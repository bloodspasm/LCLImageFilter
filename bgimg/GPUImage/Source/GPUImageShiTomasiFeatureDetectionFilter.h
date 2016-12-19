#import "GPUImageHarrisCornerDetectionFilter.h"

/** Shi-Tomasi feature detector
 
 This is the Shi-Tomasi feature detector, as described in  
 J. Shi and C. Tomasi. Good features to track. Proceedings of the IEEE Conference on Computer Vision and Pattern Recognition, pages 593-600, June 1994.
 */

@interface GPUImageShiTomasiFeatureDetectionFilter : GPUImageHarrisCornerDetectionFilter

// Compared to the Harris corner detector, the default sensitivity value for this detector is set to 1.5

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com