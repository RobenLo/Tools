//
//  NSArray+TGAddition.h
//  Tools
//
//  Created by 罗先森 on 2017/8/8.
//  Copyright © 2017年 Trouble Group. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (TGAddition)

/// 从 plist 文件创建指定 clsName 对象数组
///
/// @param plistName plist 文件名
/// @param clsName   要创建模型的类名
///
/// @return clsName 的对象数组
+ (NSArray *)tg_objectListWithPlistName:(NSString *)plistName clsName:(NSString *)clsName;

@end
