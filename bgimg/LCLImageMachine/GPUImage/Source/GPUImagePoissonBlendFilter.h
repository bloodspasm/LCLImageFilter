#import "GPUImageTwoInputCrossTextureSamplingFilter.h"
#import "GPUImageFilterGroup.h"

@interface GPUImagePoissonBlendFilter : GPUImageTwoInputCrossTextureSamplingFilter
{
    GLint mixUniform;
    
    GPUImageFramebuffer *secondOutputFramebuffer;
}

// Mix ranges from 0.0 (only image 1) to 1.0 (only image 2 gradients), with 1.0 as the normal level
@property(readwrite, nonatomic) CGFloat mix;

// The number of times to propagate the gradients.
// Crank this up to 100 or even 1000 if you want to get anywhere near convergence.  Yes, this will be slow.
@property(readwrite, nonatomic) NSUInteger numIterations;

@end// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com