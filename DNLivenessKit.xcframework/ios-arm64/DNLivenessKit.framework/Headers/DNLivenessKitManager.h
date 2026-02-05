//
//  DNLivenessKitManager.h
//  DNLivenessKit
//
//  Created by admin on 2024/4/22.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <DNLivenessKit/DNLivenessKitConfig.h>
#import <DNLivenessKit/DNLivenessKitInitConfigItem.h>


NS_ASSUME_NONNULL_BEGIN

@interface DNLivenessKitManager : NSObject



/// Preload live detection resources
/// - Parameters:
///   - accountID: Customer ID
///   - appKey: Secret key
///   - languageType: The language for liveness detection needs to be consistent with the configuration for starting the liveness detection method
///   - resultBlock: Preloading  result callback
+ (void)dnPreloadWithAccountID:(NSString *__nonnull)accountID
                        appKey:(NSString *__nonnull)appKey
                  languageType:(DNLivenessKitLanguageType)languageType
                    completion:(DNPreLoadResultBlock)resultBlock;


/// Start liveness detection
/// - Parameters:
///   - accountID: Customer ID
///   - appKey: Secret key
///   - initConfigItem: Live detection custom configuration
///   - startBlock: Liveness detection initialization callback
///   - detectorVC: Live detection startup page, usually the current page
///   - billBlock: Callback when live detection triggers billing
///   - endBlock: Callback after the end of liveness detection
///   - dismissBlock: Callback when liveness detection page disappears
+ (void)dnLivenessKitManagerWithAccountID:(NSString *__nonnull)accountID
                                   appKey:(NSString *__nonnull)appKey
                               configInfo:(DNLivenessKitInitConfigItem *__nullable)initConfigItem
                               startBlock:(DNLivenessKitStartBlock)startBlock
                               detectorVC:(UIViewController *__nonnull)detectorVC
                             billCallBack:(DNLivenessKitBillBlock)billBlock
                              endCallBack:(DNLivenessKitEndBlock)endBlock
                          dismissCallBack:(DNLivenessKitDismissBlock)dismissBlock;

/// Get SDK version
+ (NSString *)dnGetVersion;


@end

NS_ASSUME_NONNULL_END
