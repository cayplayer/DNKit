//
//  DNLivenessDetectorDelegate.h
//

#ifndef DNLivenessDetectorDelegate_h
#define DNLivenessDetectorDelegate_h

#import "DNLivenessResultImage.h"
#import "DNDetectorFaceStatus.h"
#import "DNLivenessMotionType.h"
#import "DNResult.h"
#import "DNSignedData.h"

typedef NS_ENUM(NSUInteger, DNExtraDataType) {
    DNExtraDataTypeEncryptedImage = 0,
    DNExtraDataTypeEncryptedCropImage
};

typedef NS_ENUM(NSUInteger, DNLivenessDetectorStage) {
    DNLivenessDetectorStageBlink = 1L << 0,
    DNLivenessDetectorStageMouth = 1L << 1,
    DNLivenessDetectorStageNod = 1L << 2,
    DNLivenessDetectorStageYaw = 1L << 3,
    DNLivenessDetectorStageSilent = 1L << 4,
    DNLivenessDetectorStageOnline = 1L << 5,
    DNLivenessDetectorStageColor = 1L << 6,
};

@protocol DNLivenessDetectorDelegate <NSObject>

@required

- (void)livenessUpdateResult: (nonnull DNResult *)result
                       image: (nullable DNLivenessResultImage *)image
                croppedImage: (nullable DNLivenessResultImage *)croppedImage
                 stageImages: (nullable NSArray<DNLivenessResultImage *> *)stageImages
                  signedData: (nullable DNSignedData *)signedData
                   extraData: (nullable NSDictionary *)extraData;

@optional

- (void)livenessUpdateStage: (DNLivenessDetectorStage)stage;
- (void)livenessUpdateStatus: (DNDetectorFaceStatus)status;
- (void)livenessUpdateFaceRect: (CGRect)faceRect;
- (void)livenessUpdateFaceCount: (int)faceCount;

@end

@protocol DNLivenessColorDelegate <NSObject>
- (void)livenessColorStart;
- (void)livenessColorUpdate: (nonnull UIColor *)color index: (NSUInteger)index colors:(NSArray<UIColor *> *)colors;
- (void)livenessColorEnd;

@end

@protocol DNLivenessOnlineDataSource <NSObject>
- (void)uploadData: (nonnull NSData *)data
          callback: (void (^_Nullable)(NSData *_Nullable data))callback;

@end

#endif /* DNLivenessDetectorDelegate_h */
