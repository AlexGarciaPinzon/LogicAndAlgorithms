//
//  PTUFilterArray.h
//  resources
//
//  Created by hlpa on 11.05.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUFilter.h"

@interface PTUFilterArray<TypeContent>: PTUFilter<TypeContent>

- (NSArray<NSNumber /* <NSUInteger> */ *> * const _Nonnull)filterObjects:(NSArray<TypeContent> * const _Nonnull)content;

@end
