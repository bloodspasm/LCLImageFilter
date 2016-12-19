#import "GPUImageFilterGroup.h"

@class GPUImageGaussianBlurFilter;

/** A Gaussian blur that preserves focus within a circular region
 */
@interface GPUImageGaussianSelectiveBlurFilter : GPUImageFilterGroup 
{
    GPUImageGaussianBlurFilter *blurFilter;
    GPUImageFilter *selectiveFocusFilter;
    BOOL hasOverriddenAspectRatio;
}

/** The radius of the circular area being excluded from the blur
 */
@property (readwrite, nonatomic) CGFloat excludeCircleRadius;
/** The center of the circular area being excluded from the blur
 */
@property (readwrite, nonatomic) CGPoint excludeCirclePoint;
/** The size of the area between the blurred portion and the clear circle
 */
@property (readwrite, nonatomic) CGFloat excludeBlurSize;
/** A radius in pixels to use for the blur, with a default of 5.0. This adjusts the sigma variable in the Gaussian distribution function.
 */
@property (readwrite, nonatomic) CGFloat blurRadiusInPixels;
/** The aspect ratio of the image, used to adjust the circularity of the in-focus region. By default, this matches the image aspect ratio, but you can override this value.
 */
@property (readwrite, nonatomic) CGFloat aspectRatio;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com