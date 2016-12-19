#import "GPUImageTwoPassFilter.h"

@interface GPUImageTwoPassTextureSamplingFilter : GPUImageTwoPassFilter
{
    GLint verticalPassTexelWidthOffsetUniform, verticalPassTexelHeightOffsetUniform, horizontalPassTexelWidthOffsetUniform, horizontalPassTexelHeightOffsetUniform;
    GLfloat verticalPassTexelWidthOffset, verticalPassTexelHeightOffset, horizontalPassTexelWidthOffset, horizontalPassTexelHeightOffset;
    CGFloat _verticalTexelSpacing, _horizontalTexelSpacing;
}

// This sets the spacing between texels (in pixels) when sampling for the first. By default, this is 1.0
@property(readwrite, nonatomic) CGFloat verticalTexelSpacing, horizontalTexelSpacing;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com