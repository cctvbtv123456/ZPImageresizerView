//
//  UIImage+ZPExtension.h
//  JPImageresizerView_Example
//
//  Created by Justin on 2019/2/28.
//  Copyright © 2019 Justin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (ZPExtension)

/** 修正图片的方向 */
- (UIImage *)zp_fixOrientation;
    
/** 按指定方向旋转图片 */
- (UIImage*)zp_rotate:(UIImageOrientation)orientation;
    
/** 沿Y轴翻转 */
- (UIImage *)zp_verticalityMirror;
    
/** 沿X轴翻转 */
- (UIImage *)zp_horizontalMirror;
    
@end

NS_ASSUME_NONNULL_END
