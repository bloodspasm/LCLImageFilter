#import "GPUImageFilter.h"

typedef enum { kGPUImageHistogramRed, kGPUImageHistogramGreen, kGPUImageHistogramBlue, kGPUImageHistogramRGB, kGPUImageHistogramLuminance} GPUImageHistogramType;

@interface GPUImageHistogramFilter : GPUImageFilter
{
    GPUImageHistogramType histogramType;
    
    GLubyte *vertexSamplingCoordinates;
    
    GLProgram *secondFilterProgram, *thirdFilterProgram;
    GLint secondFilterPositionAttribute, thirdFilterPositionAttribute;
}

// Rather than sampling every pixel, this dictates what fraction of the image is sampled. By default, this is 16 with a minimum of 1.
@property(readwrite, nonatomic) NSUInteger downsamplingFactor;

// Initialization and teardown
- (id)initWithHistogramType:(GPUImageHistogramType)newHistogramType;
- (void)initializeSecondaryAttributes;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com