//
//  PTURetrieverImage.h
//  resources
//
//  Created by hlpa on 30.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

@import ImageKit;

#import "PTURetrieverObject.h"

@class PTUImage;

/// Image retriever than is used for retrieving images from cache or from external source
@interface PTURetrieverImage<__covariant TypeContent: PTUImage *> : PTURetrieverObject<TypeContent>

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// Returns initilialized image retriver instance
- (instancetype)initWithImageKit:(id<ImageKitProtocol>)imageKit NS_DESIGNATED_INITIALIZER;

@end
