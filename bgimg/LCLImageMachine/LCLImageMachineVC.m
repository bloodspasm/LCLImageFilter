//
//  ViewController.m
//  bgimg
//
//  Created by Alien on 16/6/20.
//  Copyright © 2016年 覗文君. All rights reserved.
//

#import "LCLImageMachineVC.h"
#import "UIImageView+WebCache.h"
#import "GPUImage.h"
#import "LCLGPUImage.h" 
#import "LCLConfig.h"
#import "ToolbarView.h"
#import "EnhanceView.h"
#import "StateModel.h"
#define imageNub 20
#define ViewSizeW 70
#define ViewSizeH 90
#define imageSizeH 60
#define imageSizeW 80



@interface LCLImageMachineVC ()<ToolbarDelegate,EnhanceDelegate>{
    ToolbarView * toolbar;
    EnhanceView * enhanceV;
    UINavigationController * tempNavigationController;
}

@end

@implementation LCLImageMachineVC

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    tempNavigationController = self.navigationController;
    //[self.navigationController.navigationBar setHidden:YES];;
    // 禁用 iOS7 返回手势
    if ([self.navigationController respondsToSelector:@selector(interactivePopGestureRecognizer)]) {
        self.navigationController.interactivePopGestureRecognizer.enabled = NO;
    }
}

- (void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
    //[self.navigationController.navigationBar setHidden:tempNavigationController.navigationBar.isHidden];
    // 开启
    if ([self.navigationController respondsToSelector:@selector(interactivePopGestureRecognizer)]) {
        self.navigationController.interactivePopGestureRecognizer.enabled = YES;
    }
}


- (void)viewDidLoad {
    [super viewDidLoad];
    [self setupView];
    [self setupNavBarButtonItem];
}


- (void)setupNavBarButtonItem {
    UIButton* finishButton= [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 44, 44)];
    [finishButton setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
    [finishButton setTitle:@"完成" forState:UIControlStateNormal];
    finishButton.titleLabel.font=[UIFont systemFontOfSize:18];
    [finishButton addTarget:self action:@selector(_actionFinishItemBtn)forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *  finishItem = [[UIBarButtonItem alloc]initWithCustomView:finishButton];
    
    UIButton* recoverButton= [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 44, 44)];
    [recoverButton setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [recoverButton setTitle:@"恢复" forState:UIControlStateNormal];
    recoverButton.titleLabel.font=[UIFont systemFontOfSize:18];
    [recoverButton addTarget:self action:@selector(_actionRecoverItemBtn)forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *  recoverItem = [[UIBarButtonItem alloc]initWithCustomView:recoverButton];
    self.navigationItem.rightBarButtonItems = @[finishItem,recoverItem];
}

- (void)setupView {
  self.bgImgView = [[UIImageView alloc]initWithFrame:CGRectMake(20, 64, kFBaseWidth-40, kFBaseHeight - 64 -144)];
    self.bgImgView.image = self.img;
    self.bgImgView.userInteractionEnabled = YES;
    self.bgImgView.contentMode = UIViewContentModeScaleAspectFit;
    [self.view addSubview:self.bgImgView];
    //初始化备用
    self.tempImage = [[UIImageView alloc]initWithImage:self.img];
    [self.tempImage setFrame:self.bgImgView.frame];
    self.oldImage = [[UIImageView alloc]initWithImage:self.img];
    [self.oldImage setFrame:self.bgImgView.frame];
    
    toolbar = [ToolbarView initWithFrame:CGRectMake(0, kFBaseHeight-44, kFBaseWidth, 44)];
    toolbar.delegate = self;
    toolbar.alpha = 1;
    [toolbar setBackgroundColor:[UIColor  whiteColor]];
    [self.view addSubview:toolbar];
    
    enhanceV = [EnhanceView initWithFrame:CGRectMake(0, kFBaseHeight-140, kFBaseWidth, 140)];
    enhanceV.delegate = self;
    enhanceV.alpha = 0;
    [enhanceV setBackgroundColor:[UIColor  whiteColor]];
    [self.view addSubview:enhanceV];
}

/**
 完成
 */
- (void)_actionFinishItemBtn{
    NSLog(@"完成");
    [self saveImageToPhotos:self.bgImgView.image];
    
}

- (void)saveImageToPhotos:(UIImage*)image{
    UIImageWriteToSavedPhotosAlbum(image, self, @selector(image:didFinishSavingWithError:contextInfo:), NULL);
 
}
- (void)image: (UIImage *) image didFinishSavingWithError: (NSError *) error contextInfo: (void *) contextInfo{
    NSString *msg = nil ;
    if(error != NULL){
        msg = @"保存图片失败" ;
    }else{
        msg = @"保存图片成功" ;
    }
    kLCLALERT(msg);
}


/**
 恢复
 */
- (void)_actionRecoverItemBtn{
    self.bgImgView.image = self.oldImage.image;
    self.tempImage.image = self.oldImage.image;

}


- (void)actionEffectsBtn:(UIButton *)btn{
    UIView * view1 = toolbar;
    UIView * view2 = enhanceV;
    [self viewAnimateHide:view1 WithShowView:view2];
    [self actionChooseEnhance:@"亮度"];
}



/**
 增强效果

 @param type 类型
 @param value 程度
 */
- (void)actionEnhance:(NSInteger)type slide:(float)value{
    if(type == GPUImageBrightnessFilters){
        self.bgImgView.image = [LCLGPUImage applyBrightnessFilter:self.tempImage setBrightness:value];
    }else if(type == GPUImageExposureFilters){
        self.bgImgView.image = [LCLGPUImage applyExposureFilter:self.tempImage setExposure:value];
    }else if(type == GPUImageContrastFilters){
        self.bgImgView.image = [LCLGPUImage applyContrastFilter:self.tempImage setExposure:value];
    }else if(type == GPUImageSaturationFilters){
        self.bgImgView.image = [LCLGPUImage applySaturationFilter:self.tempImage setExposure:value];
    }else if(type == GPUImageSepiaFilters){
        self.bgImgView.image = [LCLGPUImage applySepiaFilter:self.tempImage setExposure:value];
    }else if(type == GPUImageHueFilters){
        self.bgImgView.image = [LCLGPUImage applyHueFilter:self.tempImage setExposure:value];
    }else if(type == GPUImageWhiteBalanceFilters){
        self.bgImgView.image = [LCLGPUImage applyWhiteBalanceFilters:self.tempImage setExposure:value];
    }else if(type == GPUImageSharpenFilters){
        self.bgImgView.image = [LCLGPUImage applySharpenilter:self.tempImage setExposure:value];
    }else if(type == GPUImageAverageLuminanceThresholdFilters){
     self.bgImgView.image = [LCLGPUImage applyAverageLuminanceThresholdFilter:self.tempImage setExposure:value];
    }else if(type == GPUImageGaussianBlurs){
        self.bgImgView.image = [LCLGPUImage applyGaussianBlur:self.tempImage setBlur:value];
    }else if(type == GPUImageHighlightShadowFilters){
        self.bgImgView.image = [LCLGPUImage applyShadowFilter:self.tempImage setShadow:value];
    }else if(type == GPUImageTiltShiftFilters){
        self.bgImgView.image = [LCLGPUImage applyTiltShiftFilter:self.tempImage setTiltShift:value];
    }else if(type == GPUImageVignetteFilters){
        self.bgImgView.image = [LCLGPUImage applyVignetteFilter:self.tempImage setVignette:value];
    }
}

- (void)actionChooseEnhance:(NSString *)type{
    self.title = type;
    self.tempImage = [[UIImageView alloc]initWithImage:self.bgImgView.image];
    [self.tempImage setFrame:self.bgImgView.frame];
}


- (void)viewAnimateHide:(UIView *)view1 WithShowView:(UIView *)view2{
    [UIView animateWithDuration:.5 animations:^{
        view1.alpha = 0;
    } completion:^(BOOL finished) {
        [UIView animateWithDuration:.5 animations:^{
            view2.alpha = 1;
        }];
    }];
}




- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
