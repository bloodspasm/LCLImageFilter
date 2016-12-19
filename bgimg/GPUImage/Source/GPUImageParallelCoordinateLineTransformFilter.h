#import "GPUImageFilter.h"

// This is an accumulator that uses a Hough transform in parallel coordinate space to identify probable lines in a scene.
//
// It is entirely based on the work of the Graph@FIT research group at the Brno University of Technology and their publications:
// M. Dubská, J. Havel, and A. Herout. Real-Time Detection of Lines using Parallel Coordinates and OpenGL. Proceedings of SCCG 2011, Bratislava, SK, p. 7.
// M. Dubská, J. Havel, and A. Herout. PClines — Line detection using parallel coordinates. 2011 IEEE Conference on Computer Vision and Pattern Recognition (CVPR), p. 1489- 1494.

@interface GPUImageParallelCoordinateLineTransformFilter : GPUImageFilter
{
    GLubyte *rawImagePixels;
    GLfloat *lineCoordinates;
    unsigned int maxLinePairsToRender, linePairsToRender;
}

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com