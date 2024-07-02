//
//  PTUResourceGames.h
//  Middle
//
//  Created by hlpa on 06.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResourceGame.h"
#import "PTUGameInfo.h"
@import resources.PTUResourceArray;
@import resources.PTUFilterObject;

@interface PTUResourceGames : PTUResourceArray<PTUResourceGame *>

+ (instancetype _Nullable)resourceArrayWithContents:(NSArray<PTUResourceGame *> * _Nonnull)contents filter:(__kindof PTUFilterObject * const _Nullable)filter;

@end

PTUResourceGame * const _Nullable PTUResourceGamesResourceForGameID(PTUResourceGames const * const _Nonnull gamesResource, NSString * const _Nonnull gameID);
NSArray<PTUGameInfo *> * const _Nonnull PTUResourceGamesAllGameInfos(PTUResourceGames const * const _Nonnull gamesResource);

