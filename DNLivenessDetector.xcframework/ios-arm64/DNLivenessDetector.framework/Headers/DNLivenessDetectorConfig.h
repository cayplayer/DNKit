//
//  DNLivenessDetectorConfig.h
//

#import <Foundation/Foundation.h>
#import "DNLivenessMotionType.h"
#import "DNLightCaptchaLevel.h"

NS_ASSUME_NONNULL_BEGIN

@class DNFaceQualityConfig;
__attribute__ ((visibility ("default")))
@interface DNMotionConfig : NSObject
@property (nonatomic, strong) NSArray<NSNumber *> *motions;
@property (nonatomic, assign) NSUInteger readyTimeout;
@property (nonatomic, assign) NSUInteger motionTimeout;

@end

__attribute__ ((visibility ("default")))
@interface DNLivenessConfig : NSObject
@property (nonatomic, assign) float scoreThreshold;

@end

__attribute__ ((visibility ("default")))
@interface DNSilentConfig : NSObject
@property (nonatomic, assign) NSUInteger timeout;
@property (nonatomic, assign) NSUInteger minimumDuration;

@end

__attribute__ ((visibility ("default")))
@interface DNDefakeConfig : NSObject
@property (nonatomic, assign) BOOL isOn;

@end

__attribute__ ((visibility ("default")))
@interface DNColorConfig : NSObject
@property (nonatomic, assign) DNLightCaptchaLevel level;
@property (nonatomic, assign) NSUInteger timeout;
- (void)setMotion:(DNLivenessMotionType)motion;
- (void)setMotions: (DNLivenessMotionType)motion1 
           motion2: (DNLivenessMotionType)motion2;

@end

__attribute__ ((visibility ("default")))
@interface DNOnlineConfig : NSObject
@property (nonatomic, assign) NSUInteger timeout;

@end

__attribute__ ((visibility ("default")))
@interface DNLivenessDetectorConfig : NSObject
@property (nonatomic, copy) NSString *licenseFilePath;
@property (nonatomic, copy) NSDictionary *modelConfig;
@property (nonatomic, assign) float resultJpegMaxSize;
@property (nonatomic, assign) BOOL isBestFrameEncrypted;

@end

__attribute__((visibility("default")))
@interface DNFaceQualityConfig : NSObject
@property (nonatomic, assign) BOOL allowHeadTilted;
@property (nonatomic, assign) BOOL allowEyeOcclusion;
@property (nonatomic, assign) BOOL allowEyeClose;
@property (nonatomic, assign) BOOL allowMouthOcclusion;
@property (nonatomic, assign) BOOL allowBrowOcclusion;
@property (nonatomic, assign) BOOL allowMouthOpen;
@property (nonatomic, assign) float overDarkThreshold;
@property (nonatomic, assign) float overGlareThreshold;
@property (nonatomic, assign) float blurThreshold;
@property (nonatomic, assign) BOOL allowMultiTarget;
@property (nonatomic, assign) BOOL allowFaceMask;

@end

NS_ASSUME_NONNULL_END
