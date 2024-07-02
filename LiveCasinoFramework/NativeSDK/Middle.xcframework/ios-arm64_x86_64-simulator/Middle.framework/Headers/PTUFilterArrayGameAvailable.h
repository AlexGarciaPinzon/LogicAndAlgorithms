//
//  PTUFilterArrayGameAvailable.h
//  Middle
//
//  Created by hlpa on 20.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

@import resources.PTUFilterArray;
#import "PTUResourceGame.h"

@class PTURegulationManager;
@class PTUMiddleLayerController;

@interface PTUFilterArrayGameAvailable<TypeContent: PTUResourceGame *> : PTUFilterArray<TypeContent>

+ (instancetype _Nullable)filterWithRegulationManager:(PTURegulationManager * const _Nonnull)regulationManager
                                               middle:(PTUMiddleLayerController * const _Nonnull)middle;

@end
