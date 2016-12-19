#import "GPUImageSobelEdgeDetectionFilter.h"

@interface GPUImageThresholdEdgeDetectionFilter : GPUImageSobelEdgeDetectionFilter
{
    GLint thresholdUniform;
}

/** Any edge above this threshold will be black, and anything below white. Ranges from 0.0 to 1.0, with 0.8 as the default
 */
@property(readwrite, nonatomic) CGFloat threshold; 

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com