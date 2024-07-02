//
//  PTUFilterArrayGameIDsOrderedCount.h
//  Middle
//
//  Created by hlpa on 12/18/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUFilterArrayGameIDsOrdered.h"

@interface PTUFilterArrayGameIDsOrderedCount : PTUFilterArrayGameIDsOrdered

+ (instancetype _Nullable)gameIDs:(NSArray<NSString *> * const _Nonnull)gameIDs NS_UNAVAILABLE;

+ (instancetype _Nullable)gameIDs:(NSArray<NSString *> * const _Nonnull)gameIDs maxCount:(NSUInteger)maxCount;

@end
