//
//  ZPImageresizerFrameView.h
//  JPImageresizerView_Example
//
//  Created by Justin on 2019/2/28.
//  Copyright © 2019 Justin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZPImageresizerTypedef.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZPImageresizerFrameView : UIView

- (instancetype)initWithFrame:(CGRect)frame
                  contentSize:(CGSize)contentSize
                     maskType:(ZPImageresizerMaskType)maskType
                    frameType:(ZPImageresizerFrameType)frameType
               animationCurve:(ZPAnimationCurve)animationCurve
                  strokeColor:(UIColor *)strokeColor
                    fillColor:(UIColor *)fillColor
                    maskAlpha:(CGFloat)maskAlpha
                verBaseMargin:(CGFloat)verBaseMargin
                horBaseMargin:(CGFloat)horBaseMargin
                resizeWHScale:(CGFloat)resizeWHScale
                   scrollView:(UIScrollView *)scrollView
                    imageView:(UIImageView *)imageView
    imageresizerIsCanRecovery:(ZPImageresizerIsCanRecoveryBlock)imageresizerIsCanRecovery
 imageresizerIsPrepareToScale:(ZPImageresizerIsPrepareToScaleBlock)imageresizerIsPrepareToScale;

@property (nonatomic, assign, readonly) ZPImageresizerMaskType maskType;

@property (nonatomic, assign, readonly) ZPImageresizerFrameType frameType;

@property (nonatomic, weak, readonly) UIPanGestureRecognizer *panGR;

@property (nonatomic, assign) ZPAnimationCurve animationCurve;

@property (nonatomic, strong) UIColor *strokeColor;

@property (nonatomic, strong) UIColor *fillColor;

@property (nonatomic, assign) CGFloat maskAlpha;

@property (nonatomic, assign, readonly) CGRect imageresizerFrame;

@property (nonatomic, assign) CGFloat resizeWHScale;
- (void)setResizeWHScale:(CGFloat)resizeWHScale animated:(BOOL)isAnimated;

@property (nonatomic, assign) BOOL edgeLineIsEnabled;

@property (nonatomic, assign, readonly) BOOL isCanRecovery;
@property (nonatomic, copy) ZPImageresizerIsCanRecoveryBlock imageresizerIsCanRecovery;

@property (nonatomic, assign, readonly) BOOL isPrepareToScale;
@property (nonatomic, copy) ZPImageresizerIsPrepareToScaleBlock imageresizerIsPrepareToScale;

@property (nonatomic, assign, readonly) ZPImageresizerRotationDirection rotationDirection;

@property (nonatomic, readonly) BOOL isHorizontalDirection;

@property (nonatomic, assign, readonly) CGFloat sizeScale;

@property (nonatomic, assign, readonly) CGFloat scrollViewMinZoomScale;

@property (nonatomic, assign) BOOL isRotatedAutoScale;

@property (nonatomic, copy) BOOL (^isVerticalityMirror)(void);
@property (nonatomic, copy) BOOL (^isHorizontalMirror)(void);

- (void)updateFrameType:(ZPImageresizerFrameType)frameType;

- (void)updateImageresizerFrameWithVerBaseMargin:(CGFloat)verBaseMargin horBaseMargin:(CGFloat)horBaseMargin;

- (void)startImageresizer;
- (void)endedImageresizer;

- (void)rotationWithDirection:(ZPImageresizerRotationDirection)direction rotationDuration:(NSTimeInterval)rotationDuration;
    
- (void)willRecovery;
- (void)recoveryWithDuration:(NSTimeInterval)duration;
- (void)recoveryDone;
    
- (void)willMirror:(BOOL)animated;
- (void)verticalityMirrorWithDiffX:(CGFloat)diffX;
- (void)horizontalMirrorWithDiffY:(CGFloat)diffY;
- (void)mirrorDone;
    
- (void)imageresizerWithComplete:(void(^)(UIImage *resizeImage))complete isOriginImageSize:(BOOL)isOriginImageSize referenceWidth:(CGFloat)referenceWidth;
    
@end

NS_ASSUME_NONNULL_END
