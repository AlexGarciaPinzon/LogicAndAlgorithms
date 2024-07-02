//
//  PTUStyleContent.h
//  Lobby
//
//  Created by hlpa on 3/6/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTUStyle.h"

@interface PTUStyleContent<TypeContent> : PTUStyle

- (NSArray<TypeContent> * _Nonnull)elements;

@end
