#import "GPUImageFilter.h"

/** Adjusts the saturation of an image
 */
@interface GPUImageSaturationFilter : GPUImageFilter
{
    GLint saturationUniform;
}

/** Saturation ranges from 0.0 (fully desaturated) to 2.0 (max saturation), with 1.0 as the normal level
 */
@property(readwrite, nonatomic) CGFloat saturation; 

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com