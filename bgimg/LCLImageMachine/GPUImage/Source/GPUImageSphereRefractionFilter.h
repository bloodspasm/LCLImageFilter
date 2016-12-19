#import "GPUImageFilter.h"

@interface GPUImageSphereRefractionFilter : GPUImageFilter
{
    GLint radiusUniform, centerUniform, aspectRatioUniform, refractiveIndexUniform;
}

/// The center about which to apply the distortion, with a default of (0.5, 0.5)
@property(readwrite, nonatomic) CGPoint center;
/// The radius of the distortion, ranging from 0.0 to 1.0, with a default of 0.25
@property(readwrite, nonatomic) CGFloat radius;
/// The index of refraction for the sphere, with a default of 0.71
@property(readwrite, nonatomic) CGFloat refractiveIndex;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com