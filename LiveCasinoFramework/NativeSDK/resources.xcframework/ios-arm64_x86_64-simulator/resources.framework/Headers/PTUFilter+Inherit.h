//
//  PTUFilter+Inherit.h
//  resources
//
//  Created by hlpa on 21.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUFilter.h"

@interface PTUFilter<TypeContent> ()

- (instancetype _Nullable)initInternal NS_DESIGNATED_INITIALIZER;

- (NSArray<id<PTUFilterObserver>> * const _Nonnull)inherit_synchr_observersCopy;

@end
