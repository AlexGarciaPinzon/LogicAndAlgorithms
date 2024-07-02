//
//  PTUStyle.h
//  Lobby
//
//  Created by hlpa on 2/15/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUStylesTypes.h"

@class PTUStyleInfo;

@interface PTUStyle : NSObject

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (NSArray<NSString *> * _Nonnull)pathsToPreloadForPreloadTag:(NSNull * _Nullable)preloadTag;

- (instancetype _Nullable)initWithNSObject:(id _Nullable)object
                                     table:(PTUStyleTypesDescription const * _Nonnull const)table;
- (id _Nonnull)nsObjectRepresentationWithTable:(PTUStyleTypesDescription const * _Nonnull const)table;

@end
