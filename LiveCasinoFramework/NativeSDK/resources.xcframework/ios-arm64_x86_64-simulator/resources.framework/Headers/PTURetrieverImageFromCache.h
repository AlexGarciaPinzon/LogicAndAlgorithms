//
//  PTURetrieverImageFromCache.h
//  resources
//
//  Created by hlpa on 30.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTURetrieverImage.h"

/// Image retriever than is used for retrieving images from cache
/// @Attention Use it only when image is assumed to be available in cache
/// @Todo Remove image cache retriever and use only regular image retriever avoiding cache availability assumptions
@interface PTURetrieverImageFromCache : PTURetrieverImage

@end
