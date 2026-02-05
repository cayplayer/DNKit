//
//  DNLivenessKitError.h
//  DNLivenessKit
//
//  Created by admin on 2024/5/13.
//

#import <Foundation/Foundation.h>
#import <DNLivenessKit/DNLivenessKitConfig.h>

NS_ASSUME_NONNULL_BEGIN

@interface DNLivenessKitError : NSObject

@property (nonatomic, assign) DNLivenessKitErrorType errorCode;
@property (nonatomic, copy) NSString* errorMessage;

+ (instancetype)createErrorWithCode:(DNLivenessKitErrorType)errorCode info:(NSString *__nullable)info;

@end

NS_ASSUME_NONNULL_END
