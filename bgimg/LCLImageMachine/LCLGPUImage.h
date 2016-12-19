//
//  LCLGPUImage.h
//  bgimg
//
//  Created by bloodspasm on 2016/11/4.
//  Copyright © 2016年 bloodspasm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface LCLGPUImage : NSObject

/**
 亮度
 */
+ (UIImage *)applyBrightnessFilter:(UIImageView *)image setBrightness:(CGFloat )value;

/**
 曝光
 */
+ (UIImage *)applyExposureFilter:(UIImageView *)image setExposure:(CGFloat )value;


/**
 对比度
 */
+ (UIImage *)applySaturationFilter:(UIImageView *)image setExposure:(CGFloat )value;

/**
 饱和度
 */
+ (UIImage *)applyContrastFilter:(UIImageView *)image setExposure:(CGFloat )value;

/**
 怀旧
 */
+ (UIImage *)applySepiaFilter :(UIImageView *)image setExposure:(CGFloat )value;

/**
 色度
 */
+ (UIImage *)applyHueFilter:(UIImageView *)image setExposure:(CGFloat )value;

/**
 白平衡
 */
+ (UIImage *)applyWhiteBalanceFilters:(UIImageView *)image setExposure:(CGFloat )value;

/**
 锐化
 */
+ (UIImage *)applySharpenilter:(UIImageView *)image setExposure:(CGFloat )value;

/**
 黑白
 */
+ (UIImage *)applyAverageLuminanceThresholdFilter:(UIImageView *)image setExposure:(CGFloat )value;

/**
 阴影
 */
+ (UIImage *)applyShadowFilter:(UIImageView *)image setShadow:(CGFloat)value;

/**
 模糊
 */
+ (UIImage *)applyGaussianBlur:(UIImageView *)image setBlur:(CGFloat )value;

/**
 灰度
 */
+ (UIImage *)applyGrayscaleFilters:(UIImageView *)image;

/**
 素描
 */
+ (UIImage *)applySketchFilter:(UIImageView *)image;

/**
 条纹模糊
 */
+ (UIImage *)applyTiltShiftFilter:(UIImageView *)image setTiltShift:(CGFloat )value;

/**
 中心亮度
 */
+ (UIImage *)applyVignetteFilter:(UIImageView *)image setVignette:(CGFloat )value;

/**
 色彩直方图
 */
+ (UIImage *)applyHistogramFilter:(UIImageView *)image;

//灰度
+ (UIImage *)applySepiaFilter:(UIImageView *)image;

//反色
+ (UIImage *)applyColorInvertFilter:(UIImageView *)image;

//卡通效果（黑色粗线描边）
+ (UIImage *)applyToonFilter:(UIImageView *)image;

//卡通效果（黑色粗线描边）
+ (UIImage *)applySmoothToonFilter:(UIImageView *)image;
@end
