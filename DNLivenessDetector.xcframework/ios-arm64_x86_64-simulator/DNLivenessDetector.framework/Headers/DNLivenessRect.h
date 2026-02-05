//
//  DNLivenessRect.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

__attribute__((visibility("default")))
@interface DNLivenessRect : NSObject
- (instancetype)init NS_UNAVAILABLE;
- (CGRect)toCGRect;
- (float)left;
- (float)right;
- (float)top;
- (float)bottom;
- (float)width;
- (float)height;

@end

NS_ASSUME_NONNULL_END
