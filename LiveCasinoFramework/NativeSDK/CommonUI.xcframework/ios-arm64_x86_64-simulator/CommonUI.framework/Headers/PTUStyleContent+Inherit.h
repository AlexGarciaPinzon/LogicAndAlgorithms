//
//  PTUStyleContent+Inherit.h
//  Lobby
//
//  Created by hlpa on 3/19/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTUStyle+Inherit.h"
#import "PTUStyleContent.h"

@class PTUStyleOrder;

@interface PTUStyleContent<TypeContent> ()

@property (strong, nonatomic, nonnull, readonly) PTUStyleOrder *order;
@property (strong, nonatomic, nonnull, readonly) NSDictionary<NSString *, TypeContent> *unsorted;
@property (strong, nonatomic, nonnull, readonly) NSArray<TypeContent> *sorted;

- (instancetype _Nullable)initWithOrder:(PTUStyleOrder * _Nonnull)order
                               unsorted:(NSDictionary<NSString *, TypeContent> * _Nonnull)unsorted
                                 sorted:(NSArray<TypeContent> * _Nonnull)sorted;

@end
