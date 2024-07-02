//
//  PTURetrieverImage+Inherit.h
//  resources
//
//  Created by hlpa on 1/28/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTURetrieverImage.h"

@interface PTURetrieverImage ()

/// Method is called when image fetch operation completes
- (void)imageLoadCompletedForResource:(PTUResourceObject * _Nonnull)resource withImage:(UIImage * _Nullable)image withError:(NSError * _Nullable)error;

@end
