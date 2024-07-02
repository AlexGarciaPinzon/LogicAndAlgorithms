//
//  PTUFilterObjectGameAvailable.h
//  Middle
//
//  Created by hlpa on 21.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

@import resources.PTUFilterObject;

@class PTUGameInfo;
@class PTURegulationManager;
@class PTUMiddleLayerController;

@interface PTUFilterObjectGameAvailable<TypeContent: PTUGameInfo *>: PTUFilterObject<TypeContent>

+ (instancetype _Nullable )filterWithRegulationManager:(PTURegulationManager * const _Nonnull)regulationManager
                                                middle:(PTUMiddleLayerController * const _Nonnull)middle;

@end
