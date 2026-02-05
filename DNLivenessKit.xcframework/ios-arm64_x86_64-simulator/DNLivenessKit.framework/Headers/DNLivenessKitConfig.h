//
//  DNLivenessKitConfig.h
//  DNLivenessKit
//
//  Created by admin on 2024/4/22.
//

#ifndef DNLivenessKitConfig_h
#define DNLivenessKitConfig_h

@class DNSDKResultModel;
@class DNLivenessKitError;
typedef enum : NSUInteger {
    DNLivenessKitErrorTypeLowerOSVerison       = 3100,
    DNLivenessKitErrorTypeParamIllegal         = 3101,
    DNLivenessKitErrorTypeCameraReject         = 3102,
    DNLivenessKitErrorTypeCameraFailed         = 3103,
    DNLivenessKitErrorTypeNoNetWork            = 3104,
    DNLivenessKitErrorTypeOuathTimeOut         = 3105,
    DNLivenessKitErrorTypeOuathError           = 3106,
    DNLivenessKitErrorTypeOuathFailed          = 3107,
    DNLivenessKitErrorTypeOuathParamsMiss      = 3108,
    DNLivenessKitErrorTypeLicTimeout           = 3109,
    DNLivenessKitErrorTypeLicError             = 3110,
    DNLivenessKitErrorTypeLicParamsMiss        = 3111,
    DNLivenessKitErrorTypeLicFailed            = 3112,
    DNLivenessKitErrorTypeLicNoFound           = 3113,
    DNLivenessKitErrorTypeLicLoadError         = 3114,
    DNLivenessKitErrorTypeLicNoSupport         = 3115,
    DNLivenessKitErrorTypeLicKeyMiss           = 3116,
    DNLivenessKitErrorTypeLicExpired           = 3117,
    DNLivenessKitErrorTypeLicDeviceError       = 3118,
    DNLivenessKitErrorTypeLicAPPIDError        = 3119,
    DNLivenessKitErrorTypeLicPlatTypeError     = 3120,
    DNLivenessKitErrorTypeLicTypeError         = 3121,
    DNLivenessKitErrorTypeLicNoActivate        = 3122,
    DNLivenessKitErrorTypeReadyTimeout         = 3123,
    DNLivenessKitErrorTypeMotionTimeout        = 3124,
    DNLivenessKitErrorTypeOnlineTimeout        = 3125,
    DNLivenessKitErrorTypeArchitectureError    = 3126,
    DNLivenessKitErrorTypeOtherError           = 3127,
    DNLivenessKitErrorTypeFaceMiss             = 3128,
    DNLivenessKitErrorTypeLivenessTimeout      = 3129,
    DNLivenessKitErrorTypeLivenessError        = 3130,
    DNLivenessKitErrorTypeLivenessParamsMiss   = 3131,
    DNLivenessKitErrorTypeLivenessFailed       = 3135,
    DNLivenessKitErrorTypeSDKCrash             = 3132,
    DNLivenessKitErrorTypeUnexpectedExit       = 3133,
    DNLivenessKitErrorTypeResponseParseFailed  = 3134,
    DNLivenessKitErrorTypeOnlineCheckTimeout   = 3136,
    DNLivenessKitErrorTypeOnlineCheckError     = 3137,
    DNLivenessKitErrorTypeOnlineCheckFailed    = 3138,
    DNLivenessKitErrorTypeDeviceJailbreak      = 3139,
    DNLivenessKitErrorTypeOnGoing              = 3150
    
} DNLivenessKitErrorType;


/**
 Preloading result callback
 If is_Success is YES, it means the loading is complete; If is_Success is NO, it means the loading failed, and the specific failure information is in the error
 */
typedef void(^DNPreLoadResultBlock)(BOOL is_success, DNLivenessKitError *error);

/**
 Liveness detection initialization callback;
 If error is nil, the initialization is successful;
 If error is not nil, the initialization fails and liveness detection is interrupted.
 */
typedef void(^DNLivenessKitStartBlock)(DNLivenessKitError *error);
/**
 Callback when the current liveness detection is charged; callback at most once for one liveness detection
 */
typedef void(^DNLivenessKitBillBlock)(void);
/**
 Callback after the end of liveness detection;
 If the error is nil, it means the detection is completed, and result is the detection result;
 If the error is not nil, it means the detection is interrupted, and result will return nil;
 */
typedef void(^DNLivenessKitEndBlock)(DNLivenessKitError *error, DNSDKResultModel *result);
/**
 Callback when liveness detection page disappears
 */
typedef void(^DNLivenessKitDismissBlock)(void);



#endif /* DNLivenessKitConfig_h */
