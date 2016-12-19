#import "GPUImageHighPassFilter.h"

@implementation GPUImageHighPassFilter

@synthesize filterStrength;

- (id)init;
{
    if (!(self = [super init]))
    {
		return nil;
    }
    
    // Start with a low pass filter to define the component to be removed
    lowPassFilter = [[GPUImageLowPassFilter alloc] init];
    [self addFilter:lowPassFilter];
    
    // Take the difference of the current frame from the low pass filtered result to get the high pass
    differenceBlendFilter = [[GPUImageDifferenceBlendFilter alloc] init];
    [self addFilter:differenceBlendFilter];
    
    // Texture location 0 needs to be the original image for the difference blend
    [lowPassFilter addTarget:differenceBlendFilter atTextureLocation:1];
    
    self.initialFilters = [NSArray arrayWithObjects:lowPassFilter, differenceBlendFilter, nil];
    self.terminalFilter = differenceBlendFilter;
    
    self.filterStrength = 0.5;
    
    return self;
}

#pragma mark -
#pragma mark Accessors

- (void)setFilterStrength:(CGFloat)newValue;
{
    lowPassFilter.filterStrength = newValue;
}

- (CGFloat)filterStrength;
{
    return lowPassFilter.filterStrength;
}

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com