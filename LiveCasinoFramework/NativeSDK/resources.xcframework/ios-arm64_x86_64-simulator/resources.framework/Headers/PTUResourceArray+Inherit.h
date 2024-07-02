//
//  PTUResourceArray+Inherit.h
//  resources
//
//  Created by hlpa on 22.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResourceArray.h"

@interface PTUResourceArray<TypeContent> ()

- (void)inherit_updateFiltered;
- (void)inherit_synchr_baseContentsWillChangeFrom:(NSArray<TypeContent> * const _Nonnull)from
                                               to:(NSArray<TypeContent> * const _Nonnull)to;
- (NSArray<TypeContent> * const _Nonnull)inherit_baseContents;

@end
