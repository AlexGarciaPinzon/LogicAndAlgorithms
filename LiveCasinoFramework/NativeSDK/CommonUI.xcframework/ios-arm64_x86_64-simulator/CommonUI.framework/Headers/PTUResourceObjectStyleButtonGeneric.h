//
//  PTUResourceObjectStyleButtonGeneric.h
//  resources
//
//  Created by hlpa on 6/14/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUResourceObjectStyle.h"
#import "PTUStylesExtended.h"
#import "PTUStylesCodeGen.h"

@interface PTUResourceObjectStyleButtonGeneric<__covariant TypeStyle: PTUStyle *> : PTUResourceObjectStyle<TypeStyle, TypeStyle>

@property (strong, nonatomic, readonly, nullable) PTUResourceObjectImage *normalImageResource;
@property (strong, nonatomic, readonly, nullable) PTUResourceObjectImage *selectedImageResource;
@property (strong, nonatomic, readonly, nullable) PTUResourceObjectImage *disabledImageResource;
@property (strong, nonatomic, readonly, nullable) PTUResourceObjectImage *leftIconResource;
@property (strong, nonatomic, readonly, nullable) PTUResourceObjectImage *rightIconResource;

- (instancetype _Nullable)initWithContent:(TypeStyle const _Nonnull)content
                      normalImageResource:(PTUResourceObjectImage * _Nullable)normalImageResource
                    selectedImageResource:(PTUResourceObjectImage * _Nullable)selectedImageResource
                    disabledImageResource:(PTUResourceObjectImage * _Nullable)disabledImageResource
                         leftIconResource:(PTUResourceObjectImage * _Nullable)leftIconResource
                        rightIconResource:(PTUResourceObjectImage * _Nullable)rightIconResource NS_DESIGNATED_INITIALIZER;

@end
