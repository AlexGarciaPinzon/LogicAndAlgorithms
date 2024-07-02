//
//  NSArray+PTUExtensions.h
//  Middle
//
//  Created by hlpa on 22.05.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray<ObjectType> (PTUExtensions)

+ (NSArray<NSNumber /* <NSUInteger> */ *> *)sortedIntersectionOfSortedArrayOfNSUIntegers:(NSArray<NSNumber /* <NSUInteger> */ *> const * const)a
                                                            withSortedArrayOfNSUIntegers:(NSArray<NSNumber /* <NSUInteger> */ *> const * const)b;
- (NSArray<ObjectType> *)arrayFromObjectsAtIndexes:(NSArray<NSNumber /* <NSUInteger> */ *> const * const)indexes;
- (NSMutableArray<ObjectType> *)mutableStructureCopyDeep;

- (NSArray *)mappedUsingBlock:(id (^)(ObjectType obj, NSUInteger idx))block;

@end
