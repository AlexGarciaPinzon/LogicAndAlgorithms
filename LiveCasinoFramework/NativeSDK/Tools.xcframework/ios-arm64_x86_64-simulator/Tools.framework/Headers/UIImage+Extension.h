//
//  UIImage+Extension.h
//  Lobby
//
//  Created by Oleksandr Khylyk on 11/14/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Extension)

+ (UIImage *)imageWithColor:(UIColor *)color;

- (UIImage *)scaleToFitWidth:(CGFloat)width;

@end
