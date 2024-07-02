//
//  NSNumber+CGFloat.h
//  NativeGameUI
//
//  Created by hlpa on 26/9/2017.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreGraphics;

@interface NSNumber (CGFloat)

- (CGFLOAT_TYPE)cgFloatValue;
- (NSNumber *)initWithCGFloat:(CGFLOAT_TYPE)value;
+ (NSNumber *)numberWithCGFloat:(CGFLOAT_TYPE)value;

@end

