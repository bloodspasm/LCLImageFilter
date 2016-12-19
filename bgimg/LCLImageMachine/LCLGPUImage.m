//
//  LCLGPUImage.m
//  bgimg
//
//  Created by bloodspasm on 2016/11/4.
//  Copyright © 2016年 bloodspasm. All rights reserved.
//

#import "LCLGPUImage.h"
#import <GPUImage/GPUImage.h>
@implementation LCLGPUImage

//亮度
+ (UIImage *)applyBrightnessFilter:(UIImageView *)image setBrightness:(CGFloat )value
{
    GPUImageBrightnessFilter *filter = [[GPUImageBrightnessFilter alloc] init];
    filter.brightness = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//条纹模糊
+ (UIImage *)applyTiltShiftFilter:(UIImageView *)image setTiltShift:(CGFloat )value
{
    GPUImageVignetteFilter *filter = [[GPUImageVignetteFilter alloc] init];
    //filter.blurRadiusInPixels = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//中心亮度
+ (UIImage *)applyVignetteFilter:(UIImageView *)image setVignette:(CGFloat )value
{
    GPUImageVignetteFilter *filter = [[GPUImageVignetteFilter alloc] init];
    value = 1.2 - value ;
    filter.vignetteEnd = value;
    filter.vignetteStart = value - 0.75;
    //GPUVector3 midtones = (GPUVector3){0.03,0.03,0.13};
    //filter.vignetteColor = midtones;
    return [self LCLGPUImagePicture:filter Withimg:image];
}


//曝光
+ (UIImage *)applyExposureFilter:(UIImageView *)image setExposure:(CGFloat )value
{
    GPUImageExposureFilter *filter = [[GPUImageExposureFilter alloc] init];
    filter.exposure = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//对比度
+ (UIImage *)applySaturationFilter:(UIImageView *)image setExposure:(CGFloat )value
{
    GPUImageSaturationFilter *filter = [[GPUImageSaturationFilter alloc] init];
    filter.saturation = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//饱和度
+ (UIImage *)applyContrastFilter:(UIImageView *)image setExposure:(CGFloat )value
{
    GPUImageContrastFilter *filter = [[GPUImageContrastFilter alloc] init];
    filter.contrast = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//褐色（怀旧）
+ (UIImage *)applySepiaFilter :(UIImageView *)image setExposure:(CGFloat )value
{
    GPUImageSepiaFilter *filter = [[GPUImageSepiaFilter alloc] init];
    filter.intensity = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//色度
+ (UIImage *)applyHueFilter:(UIImageView *)image setExposure:(CGFloat )value
{
    GPUImageHueFilter *filter = [[GPUImageHueFilter alloc] init];
    filter.hue = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//白平衡
+ (UIImage *)applyWhiteBalanceFilters:(UIImageView *)image setExposure:(CGFloat )value
{
    GPUImageWhiteBalanceFilter *filter = [[GPUImageWhiteBalanceFilter alloc] init];
    filter.tint = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//锐化
+ (UIImage *)applySharpenilter:(UIImageView *)image setExposure:(CGFloat )value
{
    GPUImageSharpenFilter *filter = [[GPUImageSharpenFilter alloc] init];
    filter.sharpness = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//亮度平均
+ (UIImage *)applyAverageLuminanceThresholdFilter:(UIImageView *)image setExposure:(CGFloat )value
{
    GPUImageAverageLuminanceThresholdFilter *filter = [[GPUImageAverageLuminanceThresholdFilter alloc] init];
    filter.thresholdMultiplier = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//阴影
+ (UIImage *)applyShadowFilter:(UIImageView *)image setShadow:(CGFloat)value
{
    GPUImageHighlightShadowFilter *filter = [[GPUImageHighlightShadowFilter alloc] init];
    filter.shadows = value;
    filter.highlights = 1-value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}



//灰度
+ (UIImage *)applyGrayscaleFilters:(UIImageView *)image
{
    GPUImageGrayscaleFilter *filter = [[GPUImageGrayscaleFilter alloc] init];
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//卡通效果（黑色粗线描边）
+ (UIImage *)applySmoothToonFilter:(UIImageView *)image
{
    GPUImageSmoothToonFilter *filter = [[GPUImageSmoothToonFilter alloc] init];
    filter.threshold = 0.2;
    filter.quantizationLevels = 2;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//卡通效果（黑色粗线描边）
+ (UIImage *)applyToonFilter:(UIImageView *)image
{
    GPUImageToonFilter *filter = [[GPUImageToonFilter alloc] init];
    filter.threshold = 0.2;
    filter.quantizationLevels = 2;
    return [self LCLGPUImagePicture:filter Withimg:image];
}


//模糊
+ (UIImage *)applyGaussianBlur:(UIImageView *)image setBlur:(CGFloat)value
{
    GPUImageGaussianBlurFilter *filter = [[GPUImageGaussianBlurFilter alloc] init];
    filter.texelSpacingMultiplier = 1;
    filter.blurRadiusInPixels = value;
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//反色
+ (UIImage *)applyColorInvertFilter:(UIImageView *)image
{
    GPUImageColorInvertFilter *filter = [[GPUImageColorInvertFilter alloc] init];
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//灰度
+ (UIImage *)applySepiaFilter:(UIImageView *)image
{
    GPUImageSepiaFilter *filter = [[GPUImageSepiaFilter alloc] init];
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//色彩直方图
+ (UIImage *)applyHistogramFilter:(UIImageView *)image
{
    GPUImageHistogramGenerator *filter = [[GPUImageHistogramGenerator alloc] init];
    return [self LCLGPUImagePicture:filter Withimg:image];
}

//素描
+ (UIImage *)applySketchFilter:(UIImageView *)image
{
    GPUImageSketchFilter *filter = [[GPUImageSketchFilter alloc] init];
    /*过滤强度属性影响滤波器的动态范围。高值可以使边缘更加明显,但会导致饱和。默认为1.0。*/
    filter.edgeStrength = .3;
    return [self LCLGPUImagePicture:filter Withimg:image];
}


+ (UIImage *)LCLGPUImagePicture:(id)filter Withimg:(UIImageView *)image{
    [filter useNextFrameForImageCapture];
    UIImage * img = image.image;
    [filter forceProcessingAtSize:img.size];
    GPUImagePicture *pic = [[GPUImagePicture alloc] initWithImage:image.image];
    [pic addTarget:filter];
    [pic processImage];
    UIImage * newImage = [filter imageFromCurrentFramebuffer];
    if (newImage != nil) {
        return newImage;
    }else{
        return img;
    }
    
}
@end
