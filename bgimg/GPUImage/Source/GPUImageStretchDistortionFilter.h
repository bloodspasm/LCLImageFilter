#import "GPUImageFilter.h"

/** Creates a stretch distortion of the image
 */
@interface GPUImageStretchDistortionFilter : GPUImageFilter {
    GLint centerUniform;
}

/** The center about which to apply the distortion, with a default of (0.5, 0.5)
 */
@property(readwrite, nonatomic) CGPoint center;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com