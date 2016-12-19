//
//  EnhanceView.m
//  bgimg
//
//  Created by bloodspasm on 2016/11/7.
//  Copyright © 2016年 bloodspasm. All rights reserved.
//

#import "EnhanceView.h"
#import "LCLGPUImage.h"
#import "LCLConfig.h"
#import "LCLSlider.h"

@interface EnhanceView (){
    LCLSlider * slider;
    NSInteger index ;       //当前滤镜号
    int slideValue ;        //滑块值
    NSMutableArray * title; //滤镜集
}

@end

@implementation EnhanceView

+ (EnhanceView *)initWithFrame:(CGRect)frame{
    EnhanceView * toolbar = [[EnhanceView alloc]initWithFrame:frame];
    [toolbar setupView:frame toolbar:toolbar];
    return toolbar;
}

- (void)setupView:(CGRect)frame toolbar:(EnhanceView *)toolbar{
    CGFloat iconW = frame.size.height/2;
    CGFloat iconH = frame.size.height/2;
    UIScrollView * scrollV = [[UIScrollView alloc]initWithFrame:CGRectMake(0, iconH, frame.size.width, iconH)];
    [toolbar addSubview:scrollV];
    title = [NSMutableArray array];
    StateModel * temp = [[StateModel alloc]init];
    [title addObject:temp.newStateModel(@"亮度")];
    [title addObject:temp.newStateModel(@"曝光")];
    [title addObject:temp.newStateModel(@"对比度")];
    [title addObject:temp.newStateModel(@"饱和度")];
    [title addObject:temp.newStateModel(@"色度")];
    [title addObject:temp.newStateModel(@"白平衡")];
    [title addObject:temp.newStateModel(@"锐化")];
    [title addObject:temp.newStateModel(@"阴影")];
    [title addObject:temp.newStateModel(@"中间亮度")];
    int counts =(int) title.count;
    for (int ii = 0; ii < counts; ii++) {
        StateModel * temp = title[ii];
        UIButton * effectsBtn = [[UIButton alloc]initWithFrame:CGRectMake(iconW*ii, 0, iconW, iconH)];
        [effectsBtn setBackgroundColor:krandomColor];
        [effectsBtn setTitle:temp.stateName forState:UIControlStateNormal];
        [scrollV addSubview:effectsBtn];
        effectsBtn.tag = ii;
        [effectsBtn.titleLabel setFont:[UIFont systemFontOfSize:14]];
        [effectsBtn addTarget:self action:@selector(_actionEffectsBtn:) forControlEvents:UIControlEventTouchUpInside];
    }
    [scrollV setShowsHorizontalScrollIndicator:NO];
    [scrollV setShowsVerticalScrollIndicator:NO];
    [scrollV setContentSize:CGSizeMake(counts * iconW, iconH)];
    slider = [[LCLSlider alloc]initWithFrame:CGRectMake(40, 20, frame.size.width-80, 20)];
    [slider addTarget:self action:@selector(sliderValueChanged:) forControlEvents:UIControlEventValueChanged];
    [toolbar addSubview:slider];
}

- (void)sliderValueChanged:(LCLSlider *)slide{
    int temp = slide.value * 10;
    if (slideValue == temp) {
        return;
    }else{
        slideValue = temp;
        StateModel * tempM = title[index];
        tempM.value = slider.value;
        [self.delegate actionEnhance:tempM.stateType slide:slide.value];
    }
}


/**
 初始化效果范围
 */
- (void)_actionEffectsBtn:(UIButton *)btn{
    StateModel * tempM = title[btn.tag];
    index = btn.tag;
    slider.value = tempM.value;
    slider.maximumValue = tempM.maximumValue;//1
    slider.minimumValue = tempM.minimumValue;//-1
    [self.delegate actionChooseEnhance:tempM.stateName];
}



@end
