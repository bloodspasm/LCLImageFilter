#import "GPUImageFilter.h"

@interface GPUImageHighlightShadowFilter : GPUImageFilter
{
    GLint shadowsUniform, highlightsUniform;
}

/**
 * 0 - 1, increase to lighten shadows.
 * @default 0
 */
@property(readwrite, nonatomic) CGFloat shadows;

/**
 * 0 - 1, decrease to darken highlights.
 * @default 1
 */
@property(readwrite, nonatomic) CGFloat highlights;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com