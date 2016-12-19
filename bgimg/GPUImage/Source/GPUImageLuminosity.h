#import "GPUImageAverageColor.h"

@interface GPUImageLuminosity : GPUImageAverageColor
{
    GLProgram *secondFilterProgram;
    GLint secondFilterPositionAttribute, secondFilterTextureCoordinateAttribute;
    GLint secondFilterInputTextureUniform, secondFilterInputTextureUniform2;
    GLint secondFilterTexelWidthUniform, secondFilterTexelHeightUniform;
}

// This block is called on the completion of color averaging for a frame
@property(nonatomic, copy) void(^luminosityProcessingFinishedBlock)(CGFloat luminosity, CMTime frameTime);

- (void)extractLuminosityAtFrameTime:(CMTime)frameTime;
- (void)initializeSecondaryAttributes;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com