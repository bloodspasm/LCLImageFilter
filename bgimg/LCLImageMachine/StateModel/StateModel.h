//
//  StateModel.h
//  bgimg
//
//  Created by bloodspasm on 2016/11/11.
//  Copyright © 2016年 bloodspasm. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, GPUImageType) {
    GPUImageBrightnessFilters = 0,      //0.亮度
    GPUImageExposureFilters,            //1.曝光
    GPUImageContrastFilters,            //2.对比度
    GPUImageSaturationFilters,          //3.饱和度
    GPUImageSepiaFilters,               //4.褐色（怀旧）
    GPUImageHueFilters,                 //5.灰度
    GPUImageWhiteBalanceFilters,        //6.白平横
    GPUImageAverageLuminanceThresholdFilters,//7.黑白
    GPUImageSharpenFilters,             //8.锐化
    GPUImageGaussianBlurs,              //9.高斯模糊
    GPUImageHighlightShadowFilters,     //10.阴影
    GPUImageTiltShiftFilters,           //11.条纹模糊
    GPUImageVignetteFilters,            //12.中间亮度
};
@interface StateModel : NSObject
- (StateModel *(^)(NSString *))newStateModel;
@property (copy, nonatomic) NSString * stateName;
@property (assign, nonatomic) NSInteger  stateType;
@property (assign, nonatomic) float  value;
@property (assign, nonatomic) float  maximumValue;
@property (assign, nonatomic) float  minimumValue;

@end
