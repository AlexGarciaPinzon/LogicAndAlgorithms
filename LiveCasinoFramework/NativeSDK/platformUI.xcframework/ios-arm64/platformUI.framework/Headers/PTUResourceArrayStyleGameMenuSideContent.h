//
//  PTUResourceArrayStyleGameMenuSideContent.h
//  resources
//
//  Created by hlpa on 6/24/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUResourceObjectStyleGameMenuSideElement.h"

@interface PTUResourceArrayStyleGameMenuSideContent : PTUResourceArrayStyle<PTUStyleGameUIMenuSideContent *, PTUResourceObjectStyleGameMenuSideElement *>

- (instancetype _Nonnull)initWithStyle:(PTUStyleGameUIMenuSideContent * _Nonnull)style
filter:(PTUFilterArray<PTUResourceObjectStyleGameMenuSideElement *> * _Nullable)filter
items:(NSArray<PTUResourceObjectStyleGameMenuSideElement *> * _Nonnull)items;

@end
