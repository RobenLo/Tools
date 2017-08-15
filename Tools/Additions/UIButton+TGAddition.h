//
//  UIButton+TGAddition.h
//  Tools
//
//  Created by 罗先森 on 2017/8/8.
//  Copyright © 2017年 Trouble Group. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (TGAddition)

/// 创建文本按钮
///
/// @param title         文本
/// @param fontSize      字体大小
/// @param normalColor   默认颜色
/// @param selectedColor 选中颜色
///
/// @return UIButton
+ (instancetype)tg_textButton:(NSString *)title fontSize:(CGFloat)fontSize normalColor:(UIColor *)normalColor selectedColor:(UIColor *)selectedColor;

@end
