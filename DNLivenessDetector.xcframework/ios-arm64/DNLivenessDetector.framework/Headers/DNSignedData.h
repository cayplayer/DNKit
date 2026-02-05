//
//  DNSignedData.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
__attribute__((visibility("default")))
@interface DNSignedData : NSObject

@property (nonatomic, copy) NSString *rawData;
@property (nonatomic, copy) NSString *signature;

@end

NS_ASSUME_NONNULL_END
