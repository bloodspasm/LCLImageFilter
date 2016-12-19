//
//  GPUImagePicture+TextureSubimage.h
//  GPUImage
//
//  Created by Jack Wu on 2014-05-28.
//  Copyright (c) 2014 Brad Larson. All rights reserved.
//

#import "GPUImagePicture.h"

@interface GPUImagePicture (TextureSubimage)

- (void)replaceTextureWithSubimage:(UIImage*)subimage;
- (void)replaceTextureWithSubCGImage:(CGImageRef)subimageSource;

- (void)replaceTextureWithSubimage:(UIImage*)subimage inRect:(CGRect)subRect;
- (void)replaceTextureWithSubCGImage:(CGImageRef)subimageSource inRect:(CGRect)subRect;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com