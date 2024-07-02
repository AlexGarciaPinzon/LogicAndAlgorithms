//
//  PTUResourceArrayStyleFooterContent.h
//  resources
//
//  Created by hlpa on 6/25/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUResourceArrayStyle.h"
#import "PTUResourceObjectStyleFooterElement.h"

@interface PTUResourceArrayStyleFooterContent : PTUResourceArrayStyle<PTUStyleFooterContent *, PTUResourceObjectStyleFooterElement *>

- (instancetype _Nullable)initWithContents:(NSArray<PTUResourceObjectStyleFooterElement *> * const _Nonnull)contents
filter:(PTUFilterArray<PTUResourceObjectStyleFooterElement *> * const _Nullable)filter NS_DESIGNATED_INITIALIZER;

@end
