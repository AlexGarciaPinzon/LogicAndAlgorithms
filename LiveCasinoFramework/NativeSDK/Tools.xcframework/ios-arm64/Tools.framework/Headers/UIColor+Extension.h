//
//  UIColor+Extension.h
//  Lobby
//
//  Created by yudu on 11/2/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Extension)

+ (UIColor*)colorWithHex:(NSString *)hexValue;
+ (UIColor*)colorWithHex64:(NSString *)hexValue;
+ (NSString *)hexWithColor:(UIColor *)color;
+ (NSString *)hexWithAlphaAndColor:(UIColor *)color;

- (UIColor *)lighterColorWithValue:(CGFloat)value;
- (UIColor *)darkerColorWithValue:(CGFloat)value;

@end
