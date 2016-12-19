#import "GPUImage3x3TextureSamplingFilter.h"

/** This uses Sobel edge detection to place a black border around objects,
 and then it quantizes the colors present in the image to give a cartoon-like quality to the image.
 */
@interface GPUImageToonFilter : GPUImage3x3TextureSamplingFilter
{
    GLint thresholdUniform, quantizationLevelsUniform;
}

/** The threshold at which to apply the edges, default of 0.2
 */
@property(readwrite, nonatomic) CGFloat threshold; 

/** The levels of quantization for the posterization of colors within the scene, with a default of 10.0
 */
@property(readwrite, nonatomic) CGFloat quantizationLevels; 

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com