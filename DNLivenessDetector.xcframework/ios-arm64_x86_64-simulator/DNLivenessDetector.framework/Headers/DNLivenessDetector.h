//
//  DNLivenessDetector.h
//

#import <AVFoundation/AVFoundation.h>
#import "DNLivenessDetectorDelegate.h"
#import "DNLivenessResultImage.h"
#import "DNLivenessDetectorConfig.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, DNLivenessDetectorMode) {
    DNLivenessDetectorModeSilent = 1L << 0,
    DNLivenessDetectorModeInteractive = 1L << 1,
    DNLivenessDetectorModeColor = 1L << 2,
};

__attribute__ ((visibility ("default")))
@interface DNLivenessDetector : NSObject

- (instancetype)initWithConfig: (DNLivenessDetectorConfig *)config
                   andDelegate: (id<DNLivenessDetectorDelegate>)delegate
                      onResult: (DNResult *_Nullable *_Nullable)result;
@property (nonatomic, strong) DNFaceQualityConfig *qualityConfig;
@property (nonatomic, strong) DNLivenessConfig *livenessConfig;
@property (nonatomic, strong) DNMotionConfig *motionConfig;
@property (nonatomic, strong) DNSilentConfig *silentConfig;
@property (nonatomic, strong) DNDefakeConfig *defakeConfig;
@property (nonatomic, strong) DNOnlineConfig *onlineConfig;
@property (nonatomic, strong) DNColorConfig *colorConfig;
@property (nonatomic, assign) DNLivenessDetectorMode mode;
@property (nonatomic, weak) id<DNLivenessOnlineDataSource> onlineDataSource;
@property (nonatomic, weak) id<DNLivenessColorDelegate> colorDelegate;
- (void)setTargetRect: (CGRect)targetRect;
- (void)start;
- (void)cancel;
- (void)reStart;
- (void)input: (CMSampleBufferRef)sampleBuffer;
- (void)inputCIImage: (CIImage *)image;
- (void)inputCVPixelBuffer: (CVPixelBufferRef)pixelBuffer;
+ (NSString *)getVersion;
+ (void)enableLog: (BOOL)isEnabled callback:(void (^)(NSString *log))callback;

@end

NS_ASSUME_NONNULL_END
