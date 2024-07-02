//
//  PTUFilter.h
//  resources
//
//  Created by hlpa on 21.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUFilter;

@protocol PTUFilterObserver
@required

// TODO: exists becase PTUResource and PTUResourceArray have no common base class. Delete protocol when/if they have.
- (void)filterDidUpdate:(PTUFilter * _Nonnull)filter;

@end

@interface PTUFilter<TypeContent> : NSObject

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (void)addObserver:(id<PTUFilterObserver> const _Nonnull)observer;
- (void)removeObserver:(id<PTUFilterObserver> const _Nonnull)observer;

@end
