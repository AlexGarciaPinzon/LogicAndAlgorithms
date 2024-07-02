//
//  NSArray+PTUValue.h
//  Tools
//
//  Created by hlpa on 07.05.18.
//  Copyright © 2018 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (PTUValue)

- (NSArray<NSString *> *)PTUStringArrayValue;
- (NSArray<NSNumber *> *)PTUNumberArrayValue;

@end
