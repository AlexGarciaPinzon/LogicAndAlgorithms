//
//  PTUResourceArray+Init.h
//  resources
//
//  Created by hlpa on 19.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResourceArray.h"
#import "PTURetrieverArray.h"

@interface PTUResourceArray<TypeContent> ()

- (instancetype _Nullable)initWithContents:(NSArray<TypeContent> * const _Nonnull)baseContent
                                    filter:(__kindof PTUFilterArray<TypeContent> * const _Nullable)filter
                                 retriever:(__kindof PTURetrieverArray<TypeContent> * const _Nullable)retriever
                                  children:(NSArray<PTUResource *> * const _Nullable)children NS_DESIGNATED_INITIALIZER;

@end
