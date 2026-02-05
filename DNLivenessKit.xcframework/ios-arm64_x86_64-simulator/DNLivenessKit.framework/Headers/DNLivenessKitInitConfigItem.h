//
//  DNLivenessKitInitConfigItem.h
//  DNLivenessKit
//
//  Created by admin on 2024/5/13.
//

#import <Foundation/Foundation.h>

//SDK language type, default is DNLivenessKitLanguageTypeSys;
typedef enum : NSUInteger {
    DNLivenessKitLanguageTypeSys    =  0,  //  System language；If the current system language is not supported, the default is English.
    DNLivenessKitLanguageTypeZh     =  1,  //  Simplified Chinese
    DNLivenessKitLanguageTypeEn     =  2,  //  English
    DNLivenessKitLanguageTypeFil    =  3,  //  Filipino
    DNLivenessKitLanguageTypeId     =  4,  //  Indonesian
    DNLivenessKitLanguageTypeTh     =  5,  //  Thai
    DNLivenessKitLanguageTypeVi     =  6,  //  Vietnamese
    DNLivenessKitLanguageTypeEs     =  7,  //  Spanish
    DNLivenessKitLanguageTypeBn     =  8,  //  Bengali‌
} DNLivenessKitLanguageType;

NS_ASSUME_NONNULL_BEGIN

@interface DNLivenessKitInitConfigItem : NSObject

/**
 SDK language type, default is DNLivenessKitLanguageTypeSys; 
 */
@property (nonatomic, assign) DNLivenessKitLanguageType languageType;

/**
 Action promptss are located above or below the camera frame, Yes is below, No is above, and the default is Yes ".
 */
@property (nonatomic, assign) BOOL isActionPromptBelow;

/**
 Whether to enable action text prompts, default enabled
 Default value: YES
 */
@property (nonatomic, assign) BOOL isActionTipEnabled;

/**
 Whether to enable action animation prompts, default enabled
 Default value: YES
 */
@property (nonatomic, assign) BOOL isActionAnimationEnabled;

/**
 Whether the head deflection angle is allowed to be too large, default setting: No;
 YES: Allow excessive head angle, ignore head angle detection
 NO: Excessive head angle is not allowed
 */
@property (nonatomic, assign) BOOL isAllowHeadTilted;

/**
 Whether to allow simultaneous detection of multiple faces. Default setting: NO;
 YES: Allow multiple faces during detection
 NO: Multiple faces are not allowed in the test.
 */
@property (nonatomic, assign) BOOL isAllowMultiTarget;

/**
 Whether to enable automatic adjustment of the brightness of the liveness detection page, default enabled
 Default value: YES
 */
@property (nonatomic, assign) BOOL isAutoBrightness;

/**
 * Brightness threshold, value range: [0, 1], default value: 0.85f;
 * When entering the liveness detection page, if the current environment brightness is less than this value, the brightness will be automatically adjusted to this value, if the current environment brightness is greater than this value, the brightness will not be adjusted
 */
@property (nonatomic, assign) CGFloat brightnessThreshold;

/**
 Brightness minimum value, value range: [0, 1], default value: 0.2f;
 Tending towards 0 to be dark and tending towards 1 to be bright
 */
@property (nonatomic, assign) CGFloat overDarkThreshold;

/**
 Brightness maximum value, value range: [0,1], default value: 0.8f;
 Tending to 0 is dark and tending to 1 is bright
 */
@property (nonatomic, assign) CGFloat overGlareThreshold;

/**
 Live detection score threshold, default value is 0.85f; Value range [0, 1];
 Tending towards 0 is true, tending towards 1 is false;
 */
@property (nonatomic, assign) CGFloat scoreThreshold;

/**
 Font size of the guidance prompt text during the action stage during the liveness detect process; default 20.0
 */
@property (nonatomic, assign) CGFloat actionTipFontSize;

/**
 Font size of warning prompt text during in liveness detect process; default 14.0
 */
@property (nonatomic, assign) CGFloat warnTipFontSize;

/**
 Action configuration，default configuration items:
 @[@(DNLivenessKitMotionTypeBlink),@(DNLivenessKitMotionTypeMouth),@(DNLivenessKitMotionTypeNod),@(DNLivenessKitMotionTypeYaw)]
 */
@property (nonatomic, strong) NSArray<NSNumber *> *motions;

/**
 Whether to enable action voice playback function, default enabled
 Default value: YES
 */
@property (nonatomic, assign) BOOL isActionVoiceEnabled;

/**
 Detects whether the device has been jailbroken. If the device has been jailbroken, the live detection will be interrupted and the error code will be returned; default detection. Default value: YES
 */
@property (nonatomic, assign) BOOL isCheckJailbreak;

/**
 Whether the action sequence is random. Default value: YES
 */
@property (nonatomic, assign) BOOL isRandom;

/**
 Does this liveness detection use defake verification, default to NO
 */
@property (nonatomic, assign) BOOL isDefake;

/**
 Timeout in the preparation phase.
 Unit: milliseconds.
 Default value: 10000 milliseconds.
 */
@property (nonatomic, assign) NSUInteger readyTimeout;

/**
 Single-action detection timeout.
 Unit: milliseconds.
 Default value: 10000 milliseconds.
 */
@property (nonatomic, assign) NSUInteger motionTimeout;

/**
 Network request timeout in SDK.
 Unit: milliseconds.
 Default value: 10000 milliseconds.
 */
@property (nonatomic, assign) NSUInteger timeout;


@end

NS_ASSUME_NONNULL_END
