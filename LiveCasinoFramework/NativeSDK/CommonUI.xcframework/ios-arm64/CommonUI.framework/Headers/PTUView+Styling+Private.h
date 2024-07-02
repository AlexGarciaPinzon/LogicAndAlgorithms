//
//  PTUView+Styling+Private.h
//  styles
//
//  Created by hlpa on 4/27/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUView.h"

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
@class PTUGameMenuFooterCellSeparator;
@class PTUStyleGameUIMenuSideElement;

@class PTULabel;
@class PTUButton;
@class PTUTextField;
@class PTUTextView;
@class PTUImageView;
@class PTUSwitch;
@class PTUSlider;
@class PTUGameMenu;
@class PTUGameMenuCell;
@class PTUGameMenuFooterCellTitle;
@class PTUStyleSeparator;
@class PTUGameMenuQuickCell;

@interface PTUView<TypeStyle: PTUStyleView *> ()

+ (void)applyStyle:(TypeStyle)style to:(PTUView *)view;

+ (void)applyLabelStyle:(PTUStyleLabel *)style toLabel:(PTULabel *)label;
+ (void)applyButtonStyle:(PTUStyleButton *)style toButton:(PTUButton *)button;
+ (void)applyTextFieldStyle:(PTUStyleTextField *)style toTextField:(PTUTextField *)textField;
+ (void)applyTextViewStyle:(PTUStyleTextView *)style toTextView:(PTUTextView *)textView;
+ (void)applyImageViewStyle:(PTUStyleImageView *)style toImageView:(PTUImageView *)imageView;
+ (void)applySwitchStyle:(PTUStyleSwitch *)style toSwitch:(PTUSwitch *)switch_;
+ (void)applySliderStyle:(PTUStyleSlider *)style toSlider:(PTUSlider *)slider;
+ (void)applyGameUIStyle:(PTUStyleGameUI *)style toGameMenu:(PTUGameMenu *)gameMenu;
+ (void)applyGameUISideElementStyle:(PTUStyleGameUIMenuSideElement *)style toGameMenuCell:(PTUGameMenuCell *)gameMenuCell;
+ (void)applyLabelStyle:(PTUStyleLabel *)style toFooterCellTitle:(PTUGameMenuFooterCellTitle *)cell;
+ (void)applySeparatorStyle:(PTUStyleSeparator *)style toFooterCellSeparator:(PTUGameMenuFooterCellSeparator *)cell;
+ (void)applyGameUIMenuSideElementStyle:(PTUStyleGameUIMenuSideElement *)style toGameMenuQuickCell:(PTUGameMenuQuickCell *)cell;

@end
