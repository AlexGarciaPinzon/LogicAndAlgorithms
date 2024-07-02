//
//  UIViewController+Container.h
//  Lobby
//
//  Created by Oleksandr Khylyk on 9/26/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Container)

- (void)ptuAddChildViewController:(UIViewController *)childController inView:(UIView *)containerView;
- (void)ptuAddChildViewController:(UIViewController *)childController inView:(UIView *)containerView animated:(BOOL)animated;
- (void)ptuAddChildViewController:(UIViewController *)childController inView:(UIView *)containerView animated:(BOOL)animated completion:(void(^)(void))completion;
- (void)ptuRemoveFromParentViewController;
- (void)ptuRemoveFromParentViewControllerAnimated:(BOOL)animated;
- (void)ptuRemoveFromParentViewControllerAnimated:(BOOL)animated completion:(void(^)(void))completion;

@end
