//
//  PTUResourceObjectImage.h
//  resources
//
//  Created by hlpa on 26.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResourceObject.h"
#import "PTURetrieverObject.h"

@class PTUImage;

@interface PTUResourceObjectImage: PTUResourceObject<PTUImage *>

- (instancetype _Nullable)initWithContent:(PTUImage * const _Nonnull)content
                                retriever:(__kindof PTURetrieverObject<PTUImage *> * const _Nonnull)retriever NS_DESIGNATED_INITIALIZER;

@end
