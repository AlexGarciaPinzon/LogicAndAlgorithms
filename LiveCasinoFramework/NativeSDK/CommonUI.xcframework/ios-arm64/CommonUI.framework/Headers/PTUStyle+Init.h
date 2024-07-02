//
//  PTUStyle+Init.h
//  Lobby
//
//  Created by hlpa on 2/19/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTUStyle.h"

@interface PTUStyle ()

- (instancetype _Nullable)initWithGenericInfo:(PTUStyleInfo const * const _Nonnull)genericInfo
                                       parent:(PTUStyle *_Nullable)parent
                                        table:(PTUStyleTypesDescription const * _Nonnull const)table;

@end
