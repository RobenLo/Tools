//
//  UIButton+TGAddition.m
//  Tools
//
//  Created by 罗先森 on 2017/8/8.
//  Copyright © 2017年 Trouble Group. All rights reserved.
//

#import "UIButton+TGAddition.h"

@implementation UIButton (TGAddition)

+ (instancetype)tg_textButton:(NSString *)title fontSize:(CGFloat)fontSize normalColor:(UIColor *)normalColor selectedColor:(UIColor *)selectedColor {
    
    UIButton *button = [[self alloc] init];
    
    [button setTitle:title forState:UIControlStateNormal];
    
    [button setTitleColor:normalColor forState:UIControlStateNormal];
    [button setTitleColor:selectedColor forState:UIControlStateSelected];
    
    button.titleLabel.font = [UIFont systemFontOfSize:fontSize];
    
    [button sizeToFit];
    
    return button;
}

@end
