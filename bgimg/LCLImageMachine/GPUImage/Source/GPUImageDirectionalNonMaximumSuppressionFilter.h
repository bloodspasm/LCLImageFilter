#import "GPUImageFilter.h"

@interface GPUImageDirectionalNonMaximumSuppressionFilter : GPUImageFilter
{
    GLint texelWidthUniform, texelHeightUniform;
    GLint upperThresholdUniform, lowerThresholdUniform;
    
    BOOL hasOverriddenImageSizeFactor;
}

// The texel width and height determines how far out to sample from this texel. By default, this is the normalized width of a pixel, but this can be overridden for different effects.
@property(readwrite, nonatomic) CGFloat texelWidth; 
@property(readwrite, nonatomic) CGFloat texelHeight; 

// These thresholds set cutoffs for the intensities that definitely get registered (upper threshold) and those that definitely don't (lower threshold)
@property(readwrite, nonatomic) CGFloat upperThreshold;
@property(readwrite, nonatomic) CGFloat lowerThreshold;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com