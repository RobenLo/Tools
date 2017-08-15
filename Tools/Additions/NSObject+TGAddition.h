//
//  NSObject+TGAddition.h
//  Tools
//
//  Created by 罗先森 on 2017/8/8.
//  Copyright © 2017年 Trouble Group. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (TGAddition)

/// 使用字典创建模型对象
///
/// @param dict 字典
///
/// @return 模型对象
+ (instancetype)tg_objectWithDict:(NSDictionary *)dict;

@end
