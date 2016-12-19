#import "GPUImageFilter.h"

/** This reduces the color dynamic range into the number of steps specified, leading to a cartoon-like simple shading of the image.
 */
@interface GPUImagePosterizeFilter : GPUImageFilter
{
    GLint colorLevelsUniform;
}

/** The number of color levels to reduce the image space to. This ranges from 1 to 256, with a default of 10.
 */
@property(readwrite, nonatomic) NSUInteger colorLevels; 

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com