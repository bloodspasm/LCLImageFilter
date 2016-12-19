#import "GPUImageFilter.h"

@interface GPUImageLuminanceRangeFilter : GPUImageFilter
{
    GLint rangeReductionUniform;
}

/** The degree to reduce the luminance range, from 0.0 to 1.0. Default is 0.6.
 */
@property(readwrite, nonatomic) CGFloat rangeReductionFactor;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com