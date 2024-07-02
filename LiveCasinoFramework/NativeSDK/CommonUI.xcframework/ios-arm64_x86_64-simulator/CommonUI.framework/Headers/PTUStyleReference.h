//
//  PTUStyleReference.h
//  Lobby
//
//  Created by hlpa on 3/11/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTUStylesTypes.h"
#import "PTUStyleContent.h"

@class PTUStyleInfo;

@interface PTUStyleReference : PTUStyleContent

@property (strong, nonatomic, nonnull, readonly) PTUStyleInfo *compositeInfo;

- (instancetype _Nullable)initWithDictionary:(NSDictionary * _Nullable)dictionary table:(PTUStyleTypesDescription const * const _Nonnull)table NS_DESIGNATED_INITIALIZER;

@end
