#import "GPUImageFilter.h"
/**
 * Created by Alaric Cole
 * Allows adjustment of color temperature in terms of what an image was effectively shot in. This means higher Kelvin values will warm the image, while lower values will cool it. 
 
 */
@interface GPUImageWhiteBalanceFilter : GPUImageFilter
{
    GLint temperatureUniform, tintUniform;
}
//choose color temperature, in degrees Kelvin
@property(readwrite, nonatomic) CGFloat temperature;

//adjust tint to compensate
@property(readwrite, nonatomic) CGFloat tint;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com