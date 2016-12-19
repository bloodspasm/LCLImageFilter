#import "GPUImageFilterGroup.h"

@class GPUImageErosionFilter;
@class GPUImageDilationFilter;

// A filter that first performs a dilation on the red channel of an image, followed by an erosion of the same radius. 
// This helps to filter out smaller dark elements.

@interface GPUImageClosingFilter : GPUImageFilterGroup
{
    GPUImageErosionFilter *erosionFilter;
    GPUImageDilationFilter *dilationFilter;
}

@property(readwrite, nonatomic) CGFloat verticalTexelSpacing, horizontalTexelSpacing;

- (id)initWithRadius:(NSUInteger)radius;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com