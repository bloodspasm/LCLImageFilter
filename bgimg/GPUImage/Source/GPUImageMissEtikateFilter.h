#import "GPUImageFilterGroup.h"

@class GPUImagePicture;

/** A photo filter based on Photoshop action by Miss Etikate:
    http://miss-etikate.deviantart.com/art/Photoshop-Action-15-120151961
 */

// Note: If you want to use this effect you have to add lookup_miss_etikate.png
//       from Resources folder to your application bundle.

@interface GPUImageMissEtikateFilter : GPUImageFilterGroup
{
    GPUImagePicture *lookupImageSource;
}

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com