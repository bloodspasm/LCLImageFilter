#import "GPUImageFilterGroup.h"
#import "GPUImageLowPassFilter.h"
#import "GPUImageAverageColor.h"

@interface GPUImageMotionDetector : GPUImageFilterGroup
{
    GPUImageLowPassFilter *lowPassFilter;
    GPUImageTwoInputFilter *frameComparisonFilter;
    GPUImageAverageColor *averageColor;
}

// This controls the low pass filter strength used to compare the current frame with previous ones to detect motion. This ranges from 0.0 to 1.0, with a default of 0.5.
@property(readwrite, nonatomic) CGFloat lowPassFilterStrength;

// For every frame, this will feed back the calculated centroid of the motion, as well as a relative intensity.
@property(nonatomic, copy) void(^motionDetectionBlock)(CGPoint motionCentroid, CGFloat motionIntensity, CMTime frameTime);

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com