//
//  UIViewController+TGAddition.m
//  Tools
//
//  Created by 罗先森 on 2017/8/8.
//  Copyright © 2017年 Trouble Group. All rights reserved.
//

#import "UIViewController+TGAddition.h"

@implementation UIViewController (TGAddition)

- (void)tg_addChildController:(UIViewController *)childController intoView:(UIView *)view  {
    
    // 1> 添加子控制器 － 否则响应者链条会被打断，导致事件无法正常传递，而且错误非常难改！
    [self addChildViewController:childController];
    
    // 2> 添加子控制器的视图
    [view addSubview:childController.view];
    
    // 3> 完成子控制器的添加
    [childController didMoveToParentViewController:self];
}


@end
