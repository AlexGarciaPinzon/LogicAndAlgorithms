//
//  PTUResource.h
//  resources
//
//  Created by hlpa on 7/1/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUResourceUpdate.h"

@class PTUResource;

/// Contains methods for observing resource content state
@protocol PTUResourceObserver
@required

/// called when resource has just updated content availability state
- (void)resource:(PTUResource * const _Nonnull)resource didUpdateContentReadiness:(BOOL const)readyContent;

/// called when resource tree has just updated content availability state
- (void)resource:(PTUResource * const _Nonnull)resource didUpdateTreeReadiness:(BOOL const)readyTree;

/// called when resource array has just updated content availability state
- (void)resource:(PTUResource * const _Nonnull)resourceArray didUpdateAvailableContents:(PTUResourceUpdate const * const _Nonnull)updateResult;

@end

/// Abstract class representing loadable resource
@interface PTUResource<__covariant TypeContent> : NSObject

/// adds resource state observer
- (void)addObserver:(id<PTUResourceObserver> const _Nonnull)observer;

/// removes resource state observer
- (void)removeObserver:(id<PTUResourceObserver> const _Nonnull)observer;

/// returns resource tree readiness state
- (BOOL)isReadyTree;

/// allocates memory for resource tree content
- (void)seizeTree;

/// allocates memory for resource tree and start requesting content
- (void)seizeAndRequestTree;

/// releases memory allocated by resource tree content
- (void)freeTree;

/// reallocates memory and starts requesting content
- (void)invalidateAndRequestTree;

@end
