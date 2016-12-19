//
//  EnhanceView.h
//  bgimg
//
//  Created by bloodspasm on 2016/11/7.
//  Copyright © 2016年 bloodspasm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StateModel.h"

@protocol EnhanceDelegate <NSObject>
/**
 增强效果

 @param type 效果
 @param value 程度
 */
- (void)actionEnhance:(NSInteger)type slide:(float)value;

/**
 选择滤镜效果
 
 @param type 效果名称
 */
- (void)actionChooseEnhance:(NSString *)type;
@end
@interface EnhanceView : UIView
@property (weak, nonatomic) id <EnhanceDelegate> delegate;
+ (EnhanceView *)initWithFrame:(CGRect)frame ;
@end
