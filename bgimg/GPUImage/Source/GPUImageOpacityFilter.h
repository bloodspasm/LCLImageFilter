#import "GPUImageFilter.h"

@interface GPUImageOpacityFilter : GPUImageFilter
{
    GLint opacityUniform;
}

// Opacity ranges from 0.0 to 1.0, with 1.0 as the normal setting
@property(readwrite, nonatomic) CGFloat opacity;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com