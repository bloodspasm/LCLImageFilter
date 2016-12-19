//
//  ChoseImgVC.m
//  bgimg
//
//  Created by bloodspasm on 2016/11/4.
//  Copyright © 2016年 bloodspasm. All rights reserved.
//

#import "ChoseImgVC.h"
#import "LCLImageMachineVC.h"
@interface ChoseImgVC ()<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@end

@implementation ChoseImgVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    UIBarButtonItem *addMember = [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemAdd target:self action:@selector(addMember)];
    self.navigationItem.rightBarButtonItem = addMember;
}

- (void)addMember{
    [self getImageFromIpc];
}

- (void)getImageFromIpc{
    if (![UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypePhotoLibrary]) return;
    UIImagePickerController *ipc = [[UIImagePickerController alloc] init];
    ipc.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;
    ipc.delegate = self;
    [self presentViewController:ipc animated:YES completion:nil];
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *,id> *)info{
    [picker dismissViewControllerAnimated:YES completion:nil];
    LCLImageMachineVC * view = [[LCLImageMachineVC alloc]init];
    view.img = info[UIImagePickerControllerOriginalImage];
    [self.navigationController pushViewController:view animated:YES];
}

- (void)stringByAppendingPathComponent:(UIImage *)image{
    NSString *path = [[NSHomeDirectory()stringByAppendingPathComponent:@"Documents"]stringByAppendingPathComponent:@"image.png"];
    NSLog(@"-- %@",path);
    [UIImagePNGRepresentation(image) writeToFile:path  atomically:YES];
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
