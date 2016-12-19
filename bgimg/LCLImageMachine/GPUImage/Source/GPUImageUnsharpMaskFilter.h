#import "GPUImageFilterGroup.h"

@class GPUImageGaussianBlurFilter;

@interface GPUImageUnsharpMaskFilter : GPUImageFilterGroup
{
    GPUImageGaussianBlurFilter *blurFilter;
    GPUImageFilter *unsharpMaskFilter;
}
// The blur radius of the underlying Gaussian blur. The default is 4.0.
@property (readwrite, nonatomic) CGFloat blurRadiusInPixels;

// The strength of the sharpening, from 0.0 on up, with a default of 1.0
@property(readwrite, nonatomic) CGFloat intensity;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com