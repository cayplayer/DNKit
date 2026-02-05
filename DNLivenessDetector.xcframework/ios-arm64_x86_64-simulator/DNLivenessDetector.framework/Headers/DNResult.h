//
//  DNResult.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSErrorDomain const DNSSIDErrorDomain;

typedef NS_ENUM(NSUInteger, DNResultCode) {
	DNResultCodeOK = 0,
	DNResultCodeLicenseNotFound = 100,
	DNResultCodeLicenseOtherError = 101,
	DNResultCodeReadyTimeout = 105,
	DNResultCodeOnlineTimeout = 107,
	DNResultCodeDefakeHack = 108,
    DNResultCodeDefakeFramesNotEnough = 109, 
    DNResultCodeColorTimeout = 110, 
	DNResultCodeLivenessTimeout = 408,
	DNResultCodeUnsupportedSystemArch = 415,     
	DNResultCodeLivenessHack = 1000,   
    DNResultCodeColorHack = 1102, 
    DNResultCodeColorHackLightCaptcha = 1103, 
    DNResultCodeColorHackLivenessAgnostic = 1104, 
    DNResultCodeColorHackLightCaptchaSampleFailed = 1105, 
    DNResultCodeColorHackSampleFailed = 1106, 
    DNResultCodeColorHackWeakLight = 1107, 
	DNResultCodeOtherError = 2000,
	DNResultCodeTrackingLost = 6002,
	DNResultCodeLicenseNotMatchCapability  = 6006, 
	DNResultCodeLicenseMissCriticalKey = 6008,  
	DNResultCodeLicenseExpired = 6031,
	DNResultCodeLicenseAppIdNotMatch = 6033,
	DNResultCodeLicensePlatformUnsupported = 6035,
	DNResultCodeUuidMismatch = 6032, 
	DNResultCodeNotActivable = 6036, 
	DNResultCodeNotActivated = 6037, 
};

__attribute__((visibility("default")))
@interface DNResult : NSObject
@property (nonatomic, assign) DNResultCode code;
@property (nonatomic, copy) NSString *message;
- (instancetype)initWithCode: (int)code message: (NSString *)message;
+ (DNResult *)resultWithCode: (int)code;
+ (DNResult *)unsupportedPlatform;
+ (DNResult *)timeout;
@end

NS_ASSUME_NONNULL_END
