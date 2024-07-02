//
//  UIView+Extension.h
//  Lobby
//
//  Created by Oleksandr Khylyk on 11/10/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, UIViewExtensionPosition)
{
    UIViewExtensionPositionTop,
    UIViewExtensionPositionTopCenter,
    UIViewExtensionPositionTopCenterUnpinned,
    UIViewExtensionPositionBottom,
    UIViewExtensionPositionLeft,
    UIViewExtensionPositionRight
};

@interface UIView (Extension)

//will use superview if parent view is nil, but it does not work for the tableViews 
- (CGRect)globalVisibleRectWithParentView:(UIView *)parentView;

- (CGRect)globalVisibleRectForRect:(CGRect)rect;

- (void)addSubviewWithAutoresizing:(UIView *)view;

- (void)attachView:(UIView *)subView;
- (void)attachViewToXCenter:(UIView *)subView;
- (void)attachView:(UIView *)subView
        atPosition:(UIViewExtensionPosition)position
             width:(CGFloat)viewWidth;

- (UIImage *)makeScreenShot;

@end
