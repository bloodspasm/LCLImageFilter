//
//  LCLConfig.h
//  bgimg
//
//  Created by bloodspasm on 2016/11/7.
//  Copyright © 2016年 bloodspasm. All rights reserved.
//

#ifndef LCLConfig_h
#define LCLConfig_h



#define krandom(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)/255.0]

#define krandomColor krandom(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))

#define kFBaseHeight [[UIScreen mainScreen]bounds].size.height
#define kFBaseWidth [[UIScreen mainScreen]bounds].size.width
#define kLCLALERT(msg) [[[UIAlertView alloc] initWithTitle:nil message:msg delegate:nil cancelButtonTitle:@"确认" otherButtonTitles:nil] show]

#endif /* LCLConfig_h */
