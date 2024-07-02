//
//  PTURetrieverArray.h
//  resources
//
//  Created by hlpa on 6/27/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUResourceArray.h"

@interface PTURetrieverArray<__covariant TypeContent> : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (BOOL)isResourceReady:(PTUResourceArray<TypeContent> * const)resource;
- (void)loadResource:(PTUResourceArray<TypeContent> *)resource;
- (void)cancelLoadingResource:(PTUResourceArray<TypeContent> *)resource;
- (void)invalidateResource:(PTUResourceArray<TypeContent> *)resource;

@end
