//
//  ViewController.h
//  bgimg
//
//  Created by Alien on 16/6/20.
//  Copyright © 2016年 覗文君. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LCLImageMachineVC : UIViewController

@property (strong, nonatomic) UIImageView *bgImgView;   //显示
@property (strong, nonatomic) UIImageView *oldImage;    //原始
@property (strong, nonatomic) UIImageView *tempImage;   //临时?
@property (strong, nonatomic) UIScrollView *imageDemoScroll;
@property (strong, nonatomic) UIImage * img;
@end

