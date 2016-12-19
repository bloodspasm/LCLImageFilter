#import "GPUImageFilter.h"

@interface GPUImageSharpenFilter : GPUImageFilter
{
    GLint sharpnessUniform;
    GLint imageWidthFactorUniform, imageHeightFactorUniform;
}

// Sharpness ranges from -4.0 to 4.0, with 0.0 as the normal level
@property(readwrite, nonatomic) CGFloat sharpness; 

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com