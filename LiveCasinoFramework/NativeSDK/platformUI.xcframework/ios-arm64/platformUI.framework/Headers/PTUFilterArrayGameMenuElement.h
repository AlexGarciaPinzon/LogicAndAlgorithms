//
//  PTUFilterArrayGameMenuElement.h
//  resources
//
//  Created by hlpa on 6/25/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUResourceObjectStyleGameMenuSideElement.h"

// TODO: content type, not resource type
@interface PTUFilterArrayGameMenuElement<TypeContent: PTUResourceObjectStyleGameMenuSideElement *> : PTUFilterArray<TypeContent>

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithSomething:(id)something NS_DESIGNATED_INITIALIZER;

@end
