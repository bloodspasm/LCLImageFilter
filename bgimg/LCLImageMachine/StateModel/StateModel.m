//
//  StateModel.m
//  bgimg
//
//  Created by bloodspasm on 2016/11/11.
//  Copyright © 2016年 bloodspasm. All rights reserved.
//

#import "StateModel.h"

@implementation StateModel

- (StateModel *(^)(NSString *))newStateModel
{
    return ^(NSString * v)
    {
        StateModel * new = [[StateModel alloc]init];
        new.stateName = v;
        if ([v isEqualToString:@"亮度"]) {
            new.stateType = GPUImageBrightnessFilters;
            new.value  = 0;
            new.maximumValue = 0.5;//1
            new.minimumValue = -0.5;//-1
        }else if ([v isEqualToString:@"曝光"]){
            new.stateType = GPUImageExposureFilters;
            new.value = 0;
            new.maximumValue = 2.5;//5
            new.minimumValue = -2.5;//-5
        }else if ([v isEqualToString:@"对比度"]){
            new.stateType = GPUImageContrastFilters;
            new.value = 1;
            new.maximumValue = 1.5;//4
            new.minimumValue = .5;
        }else if ([v isEqualToString:@"饱和度"]){
            new.stateType = GPUImageSaturationFilters;
            new.value = 1;
            new.maximumValue = 1.5;//2
            new.minimumValue = .5;//0
        }else if ([v isEqualToString:@"色度"]){
            new.stateType = GPUImageHueFilters;
            new.value = 0;
            new.maximumValue = 100;
            new.minimumValue = 0;
        }else if ([v isEqualToString:@"白平衡"]){
            new.stateType = GPUImageWhiteBalanceFilters;
            new.value = 0;
            new.maximumValue = 500;
            new.minimumValue = 0;
        }else if ([v isEqualToString:@"锐化"]){
            new.stateType = GPUImageSharpenFilters;
            new.value = 0;
            new.maximumValue = 4;//4
            new.minimumValue = 0;//-4
        }else if ([v isEqualToString:@"阴影"]){
            new.stateType = GPUImageHighlightShadowFilters;
            new.value = 0;
            new.maximumValue = 1;//1
            new.minimumValue = 0;//0
        }else if ([v isEqualToString:@"中间亮度"]){
            new.stateType = GPUImageVignetteFilters;
            new.value = 0;
            new.maximumValue = 1;//1
            new.minimumValue = 0;//0
        }
        return new;
    };
}

@end
