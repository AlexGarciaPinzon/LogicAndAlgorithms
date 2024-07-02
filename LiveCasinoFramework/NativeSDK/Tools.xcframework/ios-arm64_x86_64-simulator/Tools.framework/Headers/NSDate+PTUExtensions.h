//
//  NSDate+PTUExtensions.h
//  Middle
//
//  Created by Daniil Mazepin on 1/25/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (PTUExtensions)

+ (instancetype)ptuLocalTime;
+ (NSUInteger)timeStampWithMillSecs;

@end
