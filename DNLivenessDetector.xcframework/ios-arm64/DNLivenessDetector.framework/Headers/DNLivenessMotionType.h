//
//  DNLivenessMotionType.h
//

#ifndef DNLivenessMotionType_h
#define DNLivenessMotionType_h

typedef NS_ENUM(NSUInteger, DNLivenessMotionType) {

    DNLivenessMotionTypeBlink = 1L << 0,
    DNLivenessMotionTypeMouth = 1L << 1,
    DNLivenessMotionTypeNod = 1L << 2,
    DNLivenessMotionTypeYaw = 1L << 3,
};

#endif /* DNLivenessMotionType_h */
