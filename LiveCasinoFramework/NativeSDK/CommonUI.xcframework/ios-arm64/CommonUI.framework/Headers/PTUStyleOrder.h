//
//  PTUStyleOrder.h
//  Lobby
//
//  Created by hlpa on 3/6/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTUStylesTypes.h"
#import "PTUStyle.h"

@interface PTUStyleOrder : PTUStyle

@property (strong, nonatomic, nonnull, readonly) NSArray<NSString *> *keys;

- (instancetype _Nullable)initWithArrayObject:(NSArray * _Nonnull)arrayObject table:(PTUStyleTypesDescription const * _Nonnull const)table NS_DESIGNATED_INITIALIZER;

@end
