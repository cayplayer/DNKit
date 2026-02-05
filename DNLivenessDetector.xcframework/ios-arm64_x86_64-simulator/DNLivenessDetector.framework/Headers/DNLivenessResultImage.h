//
//  DNLivenessResultImage.h
//

#import <Foundation/Foundation.h>
#import "DNLivenessRect.h"

NS_ASSUME_NONNULL_BEGIN
__attribute__((visibility("default")))
@interface DNLivenessResultImage : NSObject
@property (nonatomic, copy, readonly) NSData *rawData;
@property (nonatomic, copy, readonly) NSString *signature;
@property (nonatomic, copy, readonly) NSArray<DNLivenessRect *> *rects;
- (instancetype)init NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
