#import "GPUImageFilter.h"

@interface GPUImageCrosshairGenerator : GPUImageFilter
{
    GLint crosshairWidthUniform, crosshairColorUniform;
}

// The width of the displayed crosshairs, in pixels. Currently this only works well for odd widths. The default is 5.
@property(readwrite, nonatomic) CGFloat crosshairWidth;

// The color of the crosshairs is specified using individual red, green, and blue components (normalized to 1.0). The default is green: (0.0, 1.0, 0.0).
- (void)setCrosshairColorRed:(GLfloat)redComponent green:(GLfloat)greenComponent blue:(GLfloat)blueComponent;

// Rendering
- (void)renderCrosshairsFromArray:(GLfloat *)crosshairCoordinates count:(NSUInteger)numberOfCrosshairs frameTime:(CMTime)frameTime;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com