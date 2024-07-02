//
//  PTUStylesProperty.h
//  Lobby
//
//  Created by hlpa on 2/6/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUStylesTypes.h"

@class PTUStyleInfo;

@interface PTUStylesProperty : NSObject

@property (strong, nonatomic, readonly, nonnull) NSString *key;
@property (strong, nonatomic, readonly, nonnull) NSString *name;
@property (assign, nonatomic, readonly) PTUStylePropertyType type;
@property (strong, nonatomic, readonly, nonnull) id value;

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (instancetype _Nullable)initWithKey:(NSString * _Nonnull)key object:(id _Nonnull)object reference:(PTUStyleInfo * _Nullable)reference table:(PTUStyleTypesDescription const * const _Nullable)table;
- (instancetype _Nullable)initWithType:(PTUStylePropertyType_Extended)type value:(id _Nullable)value;

- (id _Nullable)styleIfOfType:(PTUStylePropertyType_Extended)type table:(PTUStyleTypesDescription const * const _Nullable)table; // TODO: refactor

@end
