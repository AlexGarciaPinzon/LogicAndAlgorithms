//
//  PTUResourceArray.h
//  resources
//
//  Created by hlpa on 09.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResource.h"
#import "PTUFilterArray.h"

@class PTUResourceArray;

typedef void (^PTUResourceArrayEnumarationBlock)(id const _Nonnull content, NSUInteger const index, BOOL * const _Nonnull stop);
typedef BOOL (^PTUResourceArrayEnumarationBlockTest)(id const _Nonnull content, NSUInteger const index, BOOL * const _Nonnull stop);

@interface PTUResourceArray<TypeContent> : PTUResource<TypeContent>

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (NSArray<TypeContent> * const _Nonnull)contents;

- (instancetype const _Nonnull)subsetWithFilter:(PTUFilterArray<TypeContent> * const _Nonnull)filter;

- (BOOL)isReadyContent;
- (void)seizeContent;
- (void)seizeAndRequestContent;
- (void)freeContent;
- (void)invalidateAndRequestContent;

- (void)addObserver:(id<PTUResourceObserver> const _Nonnull)observer;
- (void)removeObserver:(id<PTUResourceObserver> const _Nonnull)observer;

@end
