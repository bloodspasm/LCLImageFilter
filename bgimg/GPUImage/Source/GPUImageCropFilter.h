#import "GPUImageFilter.h"

@interface GPUImageCropFilter : GPUImageFilter
{
    GLfloat cropTextureCoordinates[8];
}

// The crop region is the rectangle within the image to crop. It is normalized to a coordinate space from 0.0 to 1.0, with 0.0, 0.0 being the upper left corner of the image
@property(readwrite, nonatomic) CGRect cropRegion;

// Initialization and teardown
- (id)initWithCropRegion:(CGRect)newCropRegion;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com