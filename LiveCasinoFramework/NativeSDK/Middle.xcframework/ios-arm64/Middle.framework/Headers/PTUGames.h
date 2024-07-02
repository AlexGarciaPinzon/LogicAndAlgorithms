//
//  PTUGames.h
//  Middle
//
//  Created by hlpa on 06.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUResourceGame.h"
#import "PTUResourceGames.h"

extern NSString * const PTUGameCategoryRecentlyPlayedAndSuggestedAvaialableID;
extern NSString * const PTUGameCategorySuggestedGamesAvailableID;

@class PTUGames;
@class PTUGameContents;
@class PTUMiddleLayerController;
@class PTUCoreNetworkController;

@protocol PTUGamesContentRefreshObserver
@required

- (void)gamesWillUpdateContent:(PTUGames *)games;
- (void)gamesDidUpdateContent:(PTUGames *)games;

@end

@interface PTUGames : NSObject

// TODO: getters
@property (strong, nonatomic, readonly) PTUResourceGames *allGames;
@property (strong, nonatomic, readonly) PTUResourceGames *favorites;
@property (strong, nonatomic, readonly) PTUResourceGames *availableGames;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)emptyWithMiddle:(PTUMiddleLayerController *)middleLayerController
          coreNetworkController:(PTUCoreNetworkController *)coreNetworkController;

- (void)setCoreNetworkController:(PTUCoreNetworkController *)coreNetworkController;

- (void)updateToGameContents:(PTUGameContents *)gameContents;

- (void)addRecentGameFromResource:(PTUResourceGame * const)gameResource;
- (void)changeFavoriteStateForGame:(PTUGameInfo *)gameInfo;

- (void)addRefreshObserver:(id<PTUGamesContentRefreshObserver>)observer;
- (void)removeRefreshObserver:(id<PTUGamesContentRefreshObserver>)observer;

- (PTUResourceGames * const)gamesForMultigameMenuInsideGameWithResource:(PTUResourceGame *)gameResource;

@end
