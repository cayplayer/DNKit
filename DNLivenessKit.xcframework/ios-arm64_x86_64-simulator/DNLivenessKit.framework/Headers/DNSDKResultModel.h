//
//  SDKResultModel.h
//  DNLivenessKit
//
//  Created by admin on 2024/5/13.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DNSDKResultModel : NSObject
/**
 Current liveness detection business number
 */
@property (nonatomic, copy) NSString *biz_num;
/**
 Liveness detection result; YES means passed, NO means not passed
 */
@property(nonatomic, assign) BOOL is_pass;
/**
 Face photo cropped from liveness detection best photo
 */
@property(nonatomic, strong) UIImage *crop;
/**
 Best photo list:
 -When the live detection passes, it is N+1 photos, where N is the number of actions and 1 is the best photo
 -When the live detection fails, it is one photo
 */
@property(nonatomic, strong) NSArray<UIImage *> *images;


@end

NS_ASSUME_NONNULL_END
