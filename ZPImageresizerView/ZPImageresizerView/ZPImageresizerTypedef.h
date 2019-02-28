//
//  ZPImageresizerTypedef.h
//  JPImageresizerView
//
//  Created by Justin on 2019/2/28.
//  Copyright © 2019 Justin. All rights reserved.
//

#ifndef ZPImageresizerTypedef_h
#define ZPImageresizerTypedef_h

#pragma mark - 枚举

/**
 * 遮罩样式
 * ZPNormalMaskType：    通常类型，bgColor能任意设置
 * ZPLightBlurMaskType： 明亮高斯模糊，bgColor强制为白色，maskAlpha可自行修改，建议为0.3
 * ZPDarkBlurMaskType：  暗黑高斯模糊，bgColor强制为黑色，maskAlpha可自行修改，建议为0.3
 */
typedef NS_ENUM(NSUInteger, ZPImageresizerMaskType) {
    ZPNormalMaskType, // default
    ZPLightBlurMaskType,
    ZPDarkBlurMaskType
};

/**
 * 边框样式
 * ZPConciseFrameType：               简洁样式，可拖拽8个方向（固定比例则4个方向）
 * ZPConciseWithoutOtherDotFrameType：简洁样式，可拖拽4个方向（4角）
 * ZPClassicFrameType：               经典样式，类似微信的裁剪边框样式，可拖拽4个方向
 */
typedef NS_ENUM(NSUInteger, ZPImageresizerFrameType) {
    ZPConciseFrameType, // default
    ZPConciseWithoutOtherDotFrameType,
    ZPClassicFrameType
};

/**
 * 动画曲线
 * ZPAnimationCurveEaseInOut：慢进慢出，中间快
 * ZPAnimationCurveEaseIn：   由慢到快
 * ZPAnimationCurveEaseOut：  由快到慢
 * ZPAnimationCurveLinear：   匀速
 */
typedef NS_ENUM(NSUInteger, ZPAnimationCurve) {
    ZPAnimationCurveEaseInOut, // default
    ZPAnimationCurveEaseIn,
    ZPAnimationCurveEaseOut,
    ZPAnimationCurveLinear
};

/**
 * 当前方向
 * ZPImageresizerVerticalUpDirection：     垂直向上
 * ZPImageresizerHorizontalLeftDirection： 水平向左
 * ZPImageresizerVerticalDownDirection：   垂直向下
 * ZPImageresizerHorizontalRightDirection：水平向右
 */
typedef NS_ENUM(NSUInteger, ZPImageresizerRotationDirection) {
    ZPImageresizerVerticalUpDirection = 0,  // default
    ZPImageresizerHorizontalLeftDirection,
    ZPImageresizerVerticalDownDirection,
    ZPImageresizerHorizontalRightDirection
};

#pragma mark - Block

/**
 * 是否可以重置的回调
 * 当裁剪区域缩放至适应范围后就会触发该回调
 - YES：可重置
 - NO：不需要重置，裁剪区域跟图片区域一致，并且没有旋转、镜像过
 */
typedef void(^ZPImageresizerIsCanRecoveryBlock)(BOOL isCanRecovery);

/**
 * 是否预备缩放裁剪区域至适应范围
 * 当裁剪区域发生变化的开始和结束就会触发该回调
 - YES：预备缩放，此时裁剪、旋转、镜像功能不可用
 - NO：没有预备缩放
 */
typedef void(^ZPImageresizerIsPrepareToScaleBlock)(BOOL isPrepareToScale);


#endif /* ZPImageresizerTypedef_h */
