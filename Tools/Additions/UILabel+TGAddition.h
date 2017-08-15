//
//  UILabel+TGAddition.h
//  Tools
//
//  Created by 罗先森 on 2017/8/8.
//  Copyright © 2017年 Trouble Group. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (TGAddition)


/// 创建文本标签
///
/// @param text     文本
/// @param fontSize 字体大小
/// @param color    颜色
///
/// @return UILabel
+ (instancetype)tg_labelWithText:(NSString *)text fontSize:(CGFloat)fontSize color:(UIColor *)color;

@end
