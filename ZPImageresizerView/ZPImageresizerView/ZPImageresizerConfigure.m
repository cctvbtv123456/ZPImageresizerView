//
//  ZPImageresizerConfigure.m
//  JPImageresizerView_Example
//
//  Created by Justin on 2019/2/28.
//  Copyright © 2019 Justin. All rights reserved.
//

#import "ZPImageresizerConfigure.h"

@implementation ZPImageresizerConfigure

+ (instancetype)defaultConfigureWithResizeImage:(UIImage *)resizeImage make:(void (^)(ZPImageresizerConfigure *))make {
    ZPImageresizerConfigure *configure = [[self alloc] init];
    configure.resizeImage = resizeImage;
    configure.viewFrame = [UIScreen mainScreen].bounds;
    configure.maskAlpha = ZPNormalMaskType;
    configure.frameType = ZPConciseFrameType;
    configure.animationCurve = ZPAnimationCurveEaseOut;
    configure.strokeColor = [UIColor whiteColor];
    configure.bgColor = [UIColor blackColor];
    configure.maskAlpha = 0.75;
    configure.verBaseMargin = 10.0;
    configure.horBaseMargin = 10.0;
    configure.resizeWHScale = 0.0;
    configure.edgeLineIsEnabled = YES;
    configure.contentInsets = UIEdgeInsetsZero;
    !make ? : make(configure);
    return configure;
}
    
- (void)setFrameType:(ZPImageresizerFrameType)frameType {
    _frameType = frameType;
}
    
- (void)setAnimationCurve:(ZPAnimationCurve)animationCurve {
    _animationCurve = animationCurve;
}
    
+ (instancetype)blurMaskTypeConfigureWithResizeImage:(UIImage *)resizeImage isLight:(BOOL)isLight make:(void (^)(ZPImageresizerConfigure *))make {
    ZPImageresizerMaskType maskType = isLight ? ZPLightBlurMaskType : ZPDarkBlurMaskType;
    ZPImageresizerConfigure *configure = [self defaultConfigureWithResizeImage:resizeImage make:^(ZPImageresizerConfigure *configure) {
        configure.zp_maskType(maskType).zp_maskAlpha(0.3);
    }];
    !make ? : make(configure);
    return configure;
}
    
- (void)setMaskType:(ZPImageresizerMaskType)maskType {
    _maskType = maskType;
    if (maskType == ZPLightBlurMaskType) {
        self.bgColor = [UIColor whiteColor];
    } else if (maskType == ZPDarkBlurMaskType) {
        self.bgColor = [UIColor blackColor];
    }
}
    
- (void)setBgColor:(UIColor *)bgColor {
    if (self.maskType == ZPLightBlurMaskType) {
        _bgColor = [UIColor whiteColor];
    } else if (self.maskType == ZPDarkBlurMaskType) {
        _bgColor = [UIColor blackColor];
    } else {
        _bgColor = bgColor;
    }
}
    
- (ZPImageresizerConfigure *(^)(UIImage *resizeImage))zp_resizeImage {
    return ^(UIImage *resizeImage) {
        self.resizeImage = resizeImage;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(CGRect viewFrame))zp_viewFrame {
    return ^(CGRect viewFrame) {
        self.viewFrame = viewFrame;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(ZPImageresizerMaskType maskType))zp_maskType {
    return ^(ZPImageresizerMaskType maskType) {
        self.maskType = maskType;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(ZPImageresizerFrameType frameType))zp_frameType {
    return ^(ZPImageresizerFrameType frameType) {
        self.frameType = frameType;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(ZPAnimationCurve animationCurve))zp_animationCurve {
    return ^(ZPAnimationCurve animationCurve) {
        self.animationCurve = animationCurve;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(UIColor *strokeColor))zp_strokeColor {
    return ^(UIColor *strokeColor) {
        self.strokeColor = strokeColor;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(UIColor *bgColor))zp_bgColor {
    return ^(UIColor *bgColor) {
        self.bgColor = bgColor;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(CGFloat maskAlpha))zp_maskAlpha {
    return ^(CGFloat maskAlpha) {
        self.maskAlpha = maskAlpha;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(CGFloat resizeWHScale))zp_resizeWHScale {
    return ^(CGFloat resizeWHScale) {
        self.resizeWHScale = resizeWHScale;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(BOOL edgeLineIsEnabled))zp_edgeLineIsEnabled {
    return ^(BOOL edgeLineIsEnabled) {
        self.edgeLineIsEnabled = edgeLineIsEnabled;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(CGFloat verBaseMargin))zp_verBaseMargin {
    return ^(CGFloat verBaseMargin) {
        self.verBaseMargin = verBaseMargin;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(CGFloat horBaseMargin))zp_horBaseMargin {
    return ^(CGFloat horBaseMargin) {
        self.horBaseMargin = horBaseMargin;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(UIEdgeInsets contentInsets))zp_contentInsets {
    return ^(UIEdgeInsets contentInsets) {
        self.contentInsets = contentInsets;
        return self;
    };
}
    
- (ZPImageresizerConfigure *(^)(BOOL isClockwiseRotation))zp_isClockwiseRotation {
    return ^(BOOL isClockwiseRotation) {
        self.isClockwiseRotation = isClockwiseRotation;
        return self;
    };
}
    
@end
