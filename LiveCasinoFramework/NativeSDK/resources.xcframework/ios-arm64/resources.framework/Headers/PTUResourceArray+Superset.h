//
//  PTUResourceArray+Superset.h
//  resources
//
//  Created by hlpa on 14.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResourceArray.h"

@class PTUResourceUpdate;

@interface PTUResourceArray<TypeContent> ()

// this method must NOT notify any observers
- (PTUResourceUpdate * const _Nonnull)superset:(PTUResourceArray<TypeContent> * const _Nonnull)superset
                                     didUpdate:(PTUResourceUpdate * const _Nonnull)update
                                  outObservers:(NSArray<id<PTUResourceObserver>> * _Nonnull * _Nullable)outObservers;
- (void)forceNotifyObservers:(NSArray<id<PTUResourceObserver>> * const _Nonnull)observers
                 aboutUpdate:(PTUResourceUpdate * const _Nonnull)update;

@end
