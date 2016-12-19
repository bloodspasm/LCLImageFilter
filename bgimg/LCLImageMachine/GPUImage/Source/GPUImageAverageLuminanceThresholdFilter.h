#import "GPUImageFilterGroup.h"

@interface GPUImageAverageLuminanceThresholdFilter : GPUImageFilterGroup

// This is multiplied by the continually calculated average image luminosity to arrive at the final threshold. Default is 1.0.
@property(readwrite, nonatomic) CGFloat thresholdMultiplier;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com