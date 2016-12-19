#import "GPUImageFilter.h"

@interface GPUImagePixellateFilter : GPUImageFilter
{
    GLint fractionalWidthOfAPixelUniform, aspectRatioUniform;
}

// The fractional width of the image to use as a size for the pixels in the resulting image. Values below one pixel width in the source image are ignored.
@property(readwrite, nonatomic) CGFloat fractionalWidthOfAPixel;


@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com