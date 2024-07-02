//
//  UIView+Styling_Internal.h
//  styles
//
//  Created by hlpa on 4/26/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PTUStyleView;
@class PTUStyleLabel;
@class PTUStyleButton;
@class PTUStyleTextField;
@class PTUStyleTextView;
@class PTUStyleImageView;
@class PTUStyleSwitch;
@class PTUStyleSlider;
@class PTUStyleGameUI;
@class PTUStyleGameUIMenuSideElement;
@class PTUStyleFooter;
@class PTUStyleSeparator;

@interface UIView (Styling_Private)

+ (void)applyStyle:(PTUStyleView *)style to:(UIView *)view;
+ (void)applyLabelStyle:(PTUStyleLabel *)style toLabel:(UIView *)label;
+ (void)applyButtonStyle:(PTUStyleButton *)style toButton:(UIView *)button;
+ (void)applyTextFieldStyle:(PTUStyleTextField *)style toTextField:(UIView *)textField;
+ (void)applyTextViewStyle:(PTUStyleTextView *)style toTextView:(UIView *)textView;
+ (void)applyImageViewStyle:(PTUStyleImageView *)style toImageView:(UIView *)imageView;
+ (void)applySwitchStyle:(PTUStyleSwitch *)style toSwitch:(UIView *)switch_;
+ (void)applySliderStyle:(PTUStyleSlider *)style toSlider:(UIView *)slider;
+ (void)applyGameUIStyle:(PTUStyleGameUI *)style toGameMenu:(UIView *)gameMenu;
+ (void)applyGameUISideElementStyle:(PTUStyleGameUIMenuSideElement *)style toGameMenuCell:(UIView *)gameMenuCell;
+ (void)applyLabelStyle:(PTUStyleLabel *)style toFooterCellTitle:(UIView *)cell;
+ (void)applySeparatorStyle:(PTUStyleSeparator *)style toFooterCellSeparator:(UIView *)cell;
+ (void)applyGameUIMenuSideElementStyle:(PTUStyleGameUIMenuSideElement *)style toGameMenuQuickCell:(UIView *)cell;

@end
