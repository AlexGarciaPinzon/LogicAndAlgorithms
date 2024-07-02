//
//  PTUResourceObject+Init.h
//  resources
//
//  Created by hlpa on 05.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResourceObject.h"
#import "PTUFilterObject.h"
#import "PTURetrieverObject.h"

@interface PTUResourceObject<TypeContent> ()

- (instancetype _Nullable)initWithContent:(TypeContent const _Nonnull)content
                                   filter:(__kindof PTUFilterObject<TypeContent> * const _Nullable)filter
                                retriever:(__kindof PTURetrieverObject<TypeContent> * const _Nullable)retriever
                                 children:(NSArray<PTUResource *> * const _Nullable)children NS_DESIGNATED_INITIALIZER;

@end
