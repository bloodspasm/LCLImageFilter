#import "GPUImageFilter.h"

@interface GPUImageMotionBlurFilter : GPUImageFilter

/** A multiplier for the blur size, ranging from 0.0 on up, with a default of 1.0
 */
@property (readwrite, nonatomic) CGFloat blurSize;

/** The angular direction of the blur, in degrees. 0 degrees by default
 */
@property (readwrite, nonatomic) CGFloat blurAngle;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com