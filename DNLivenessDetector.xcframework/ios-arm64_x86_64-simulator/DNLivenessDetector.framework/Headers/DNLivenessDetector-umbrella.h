#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "DNDetectorFaceStatus.h"
#import "DNLightCaptchaLevel.h"
#import "DNLivenessDetector.h"
#import "DNLivenessDetectorConfig.h"
#import "DNLivenessDetectorDelegate.h"
#import "DNLivenessMotionType.h"
#import "DNLivenessRect.h"
#import "DNLivenessResultImage.h"
#import "DNResult.h"
#import "DNSignedData.h"

FOUNDATION_EXPORT double DNLivenessDetectorVersionNumber;
FOUNDATION_EXPORT const unsigned char DNLivenessDetectorVersionString[];

