//
//  ToolbarView.m
//  bgimg
//
//  Created by bloodspasm on 2016/11/7.
//  Copyright © 2016年 bloodspasm. All rights reserved.
//

#import "ToolbarView.h"
#import "LCLConfig.h"
@implementation ToolbarView

+ (ToolbarView *)initWithFrame:(CGRect)frame{
    ToolbarView * toolbar = [[ToolbarView alloc]initWithFrame:frame];
    
    [toolbar setupView:frame toolbar:toolbar];
    
    return toolbar;
}

- (void)setupView:(CGRect)frame toolbar:(ToolbarView *)toolbar {
    CGFloat iconW = 44;
    CGFloat iconH = 44;
    UIScrollView * scrollV = [[UIScrollView alloc]initWithFrame:CGRectMake(0, 0, frame.size.width, frame.size.height)];
    [toolbar addSubview:scrollV];
    int counts = 10;
    for (int ii = 0; ii < counts; ii++) {
        UIButton * effectsBtn = [[UIButton alloc]initWithFrame:CGRectMake(iconW*ii, 0, iconW, iconH)];
        [effectsBtn setBackgroundColor:krandomColor];
        [scrollV addSubview:effectsBtn];
        effectsBtn.tag = ii;
        [effectsBtn addTarget:self action:@selector(_actionEffectsBtn:) forControlEvents:UIControlEventTouchUpInside];
    }
    [scrollV setShowsHorizontalScrollIndicator:NO];
    [scrollV setShowsVerticalScrollIndicator:NO];
    [scrollV setContentSize:CGSizeMake(counts * iconW, frame.size.height)];
}

- (void)_actionEffectsBtn:(UIButton *)btn{
    [self.delegate actionEffectsBtn:btn];
}

@end
