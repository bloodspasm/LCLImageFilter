//
//  ToolbarView.h
//  bgimg
//
//  Created by bloodspasm on 2016/11/7.
//  Copyright © 2016年 bloodspasm. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ToolbarDelegate <NSObject>

/**
 选择功能模块
 */
- (void)actionEffectsBtn:(UIButton*)btn;

@end

@interface ToolbarView : UIView
@property (weak, nonatomic) id <ToolbarDelegate> delegate;
+ (ToolbarView *)initWithFrame:(CGRect)frame;
@end
