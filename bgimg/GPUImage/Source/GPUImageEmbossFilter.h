#import "GPUImage3x3ConvolutionFilter.h"

@interface GPUImageEmbossFilter : GPUImage3x3ConvolutionFilter

// The strength of the embossing, from  0.0 to 4.0, with 1.0 as the normal level
@property(readwrite, nonatomic) CGFloat intensity; 

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com