//
//  NSObject+PTUValue.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/22/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (PTUValue)

- (NSString *)PTUStringValue;
- (NSNumber *)PTUNumberValue;
- (NSArray<NSString *> *)PTUStringArrayValue;
- (NSArray<NSNumber *> *)PTUNumberArrayValue;

@end
