#import "GPUImageFilter.h"

/** Transforms the colors of an image by applying a matrix to them
 */
@interface GPUImageColorMatrixFilter : GPUImageFilter
{
    GLint colorMatrixUniform;
    GLint intensityUniform;
}

/** A 4x4 matrix used to transform each color in an image
 */
@property(readwrite, nonatomic) GPUMatrix4x4 colorMatrix;

/** The degree to which the new transformed color replaces the original color for each pixel
 */
@property(readwrite, nonatomic) CGFloat intensity;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com