//
//  PTURetrieverImage+Subclassing.h
//  resources
//
//  Created by hlpa on 6/14/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTURetrieverImage.h"

@interface PTURetrieverImage ()

/// image kit instance than is used for fetching, caching and resizing images
@property (strong, nonatomic, readonly) id<ImageKitProtocol> imageKit;

@end
