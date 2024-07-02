//
//  PTUStyleInfo.h
//  Lobby
//
//  Created by hlpa on 2/6/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUStyle.h"
#import "PTUStylesProperty.h"

@interface PTUStyleInfo : PTUStyle

@property (strong, nonatomic, nonnull, readonly) NSDictionary<NSString *, PTUStylesProperty *> *properties;

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (instancetype _Nullable)initWithDictionary:(NSDictionary * _Nullable)dictionary reference:(PTUStyleInfo * _Nullable)reference table:(PTUStyleTypesDescription const * const _Nullable)table;

- (PTUStylesProperty * _Nullable)propertyForKey:(NSString * _Nonnull)key; // TODO: remove ?
- (PTUStylesProperty * _Nullable)propertyOfType:(PTUStylePropertyType_Extended)type withName:(NSString * _Nonnull)name table:(PTUStyleTypesDescription const * _Nonnull const)table;
- (PTUStylesProperty * _Nullable)propertyOrNilOfType:(PTUStylePropertyType_Extended)type withName:(NSString * _Nonnull)name table:(PTUStyleTypesDescription const * _Nonnull const)table;
- (PTUStylesProperty * _Nullable)includedParentProperty;
- (PTUStylesProperty * _Nullable)unnamedPropertyWithTypeString:(NSString *_Nonnull)typeString;

@end
