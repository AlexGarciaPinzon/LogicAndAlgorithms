//
//  PTUResourceObject.h
//  resources
//
//  Created by hlpa on 05.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResource.h"

@class PTUResourceObject;
@class PTUFilterObject;

/// Base class representing loadable resource, incapsulates memory allocation behaviour and state management
@interface PTUResourceObject<__covariant TypeContent> : PTUResource<TypeContent>

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

/// returns type of resource content
- (TypeContent const _Nonnull)content;

/// returns resource availability state
- (BOOL)isAvailable;

/// returns resource readiness state
- (BOOL)isReadyContent;

/// allocates space for resource content
- (void)seizeContent;

/// allocates space and requests resource content
- (void)seizeAndRequestContent;

/// releases memory allocated by resource content
- (void)freeContent;

/// reallocates memory and starts requesting content
- (void)invalidateAndRequestContent;

/// adds resource state observer
- (void)addObserver:(id<PTUResourceObserver> const _Nonnull)observer;

/// removes resource state observer
- (void)removeObserver:(id<PTUResourceObserver> const _Nonnull)observer;

@end
