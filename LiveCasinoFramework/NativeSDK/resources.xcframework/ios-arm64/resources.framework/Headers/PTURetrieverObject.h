//
//  PTURetrieverObject.h
//  resources
//
//  Created by hlpa on 08.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUResourceObject.h"

/// Image retriever abstract base class. If you want to create a retriever inherit from PTURetrieverObject.
@interface PTURetrieverObject<__covariant TypeContent> : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// checking if resource is loaded and ready for usage
- (BOOL)isResourceReady:(PTUResourceObject<TypeContent> * const)resource;

/// loads resource
- (void)loadResource:(PTUResourceObject<TypeContent> *)resource;

/// cancels loading resource
- (void)cancelLoadingResource:(PTUResourceObject<TypeContent> *)resource;

/// invalidates resource
- (void)invalidateResource:(PTUResourceObject<TypeContent> *)resource;

@end
