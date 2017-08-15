//
//  UIScreen+TGAddition.m
//  Tools
//
//  Created by 罗先森 on 2017/8/8.
//  Copyright © 2017年 Trouble Group. All rights reserved.
//

#import "UIScreen+TGAddition.h"

@implementation UIScreen (TGAddition)

+ (CGFloat)tg_screenWidth {
    return [UIScreen mainScreen].bounds.size.width;
}

+ (CGFloat)tg_screenHeight {
    return [UIScreen mainScreen].bounds.size.height;
}

+ (CGFloat)tg_scale {
    return [UIScreen mainScreen].scale;
}
@end
