//
//  DNDetectorFaceStatus.h
//

#ifndef DNDetectorFaceStatus_h
#define DNDetectorFaceStatus_h

typedef NS_ENUM(NSUInteger, DNDetectorFaceStatus) {
    DNDetectorFaceStatusNormal = 0,
    DNDetectorFaceStatusNoFaceFound = 1,
    DNDetectorFaceStatusFaceOcclusionBrow = 2,
    DNDetectorFaceStatusFaceOcclusionEye = 3,
    DNDetectorFaceStatusFaceOcclusionNose = 4,
    DNDetectorFaceStatusFaceOcclusionMouth = 5,
    DNDetectorFaceStatusFaceOcclusionCheek = 6,
    DNDetectorFaceStatusFaceTooFar = 7,
    DNDetectorFaceStatusFaceTooClose = 8,
    DNDetectorFaceStatusFaceUp = 9,
    DNDetectorFaceStatusFaceDown = 10,
    DNDetectorFaceStatusFaceLeft = 11,
    DNDetectorFaceStatusFaceRight = 12,
    DNDetectorFaceStatusAngleFail = 13,
    DNDetectorFaceStatusTooDark = 14,
    DNDetectorFaceStatusOverExposure = 15,
    DNDetectorFaceStatusBlur = 16,
    DNDetectorFaceStatusEyeClosed = 17,
    DNDetectorFaceStatusMouthOpen = 18,
    DNDetectorFaceStatusTooManyTargetFound = 19,
};

#endif /* DNDetectorFaceStatus_h */
