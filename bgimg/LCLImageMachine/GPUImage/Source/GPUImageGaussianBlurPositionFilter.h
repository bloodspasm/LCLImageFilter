#import "GPUImageTwoPassTextureSamplingFilter.h"

/** A more generalized 9x9 Gaussian blur filter
 */
@interface GPUImageGaussianBlurPositionFilter : GPUImageTwoPassTextureSamplingFilter 
{
    GLint blurCenterUniform, blurRadiusUniform, aspectRatioUniform;
}

/** A multiplier for the blur size, ranging from 0.0 on up, with a default of 1.0
 */
@property (readwrite, nonatomic) CGFloat blurSize;

/** Center for the blur, defaults to 0.5, 0.5
 */
@property (readwrite, nonatomic) CGPoint blurCenter;

/** Radius for the blur, defaults to 1.0
 */
@property (readwrite, nonatomic) CGFloat blurRadius;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com