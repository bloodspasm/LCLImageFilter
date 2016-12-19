#import "GPUImageFilter.h"

@interface GPUImageFalseColorFilter : GPUImageFilter
{
    GLint firstColorUniform, secondColorUniform;
}

// The first and second colors specify what colors replace the dark and light areas of the image, respectively. The defaults are (0.0, 0.0, 0.5) amd (1.0, 0.0, 0.0).
@property(readwrite, nonatomic) GPUVector4 firstColor;
@property(readwrite, nonatomic) GPUVector4 secondColor;

- (void)setFirstColorRed:(GLfloat)redComponent green:(GLfloat)greenComponent blue:(GLfloat)blueComponent;
- (void)setSecondColorRed:(GLfloat)redComponent green:(GLfloat)greenComponent blue:(GLfloat)blueComponent;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com