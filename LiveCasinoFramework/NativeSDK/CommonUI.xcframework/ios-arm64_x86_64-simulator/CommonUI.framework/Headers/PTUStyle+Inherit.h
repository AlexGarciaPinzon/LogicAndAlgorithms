//
//  PTUStyle+Inherit.h
//  Lobby
//
//  Created by hlpa on 2/15/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTUStylesTypes.h"
#import "PTUStyle.h"

@class PTUStyleInfo;

@interface PTUStyle ()

- (instancetype _Nullable)initInternal NS_DESIGNATED_INITIALIZER; // to call super
- (instancetype _Nullable)initWithFilteredInfo:(PTUStyleInfo * _Nullable)filteredInfo
                                        parent:(__kindof PTUStyle * _Nullable)parent // TODO: remove kindof ?
                                         table:(PTUStyleTypesDescription const * _Nonnull const)table; // to override
- (void)postInit; // to be called from custom init, and, optionally, overriden; not called from PTUStyle init, but called from code-gen macros; you may not call super

@end
