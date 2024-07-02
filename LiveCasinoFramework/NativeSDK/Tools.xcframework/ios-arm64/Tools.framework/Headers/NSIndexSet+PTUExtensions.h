//
//  NSIndexSet+PTUExtensions.h
//  Middle
//
//  Created by hlpa on 03.05.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSIndexSet (PTUExtensions)

- (NSIndexSet *)mergedWithIndexSetAsAfterRemoval:(NSIndexSet *)secondSet;
- (NSArray<NSNumber /* <NSUInteger> */ *> *)indexMap;

@end
