//
//  PTUNetworkRequests.h
//  Middle
//
//  Created by dmgo on 2/14/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUNetworkManager;

@interface PTUNetworkRequests : NSObject

- (instancetype)initWithNetworkManager:(PTUNetworkManager *)networkManager;

// Global

- (void)getUrlsForURLTypes:(NSArray<NSString *> *)urlTypes
                casinoName:(NSString *)casinoName
                clientSkin:(NSString *)clientSkin
            clientPlatform:(NSString *)clientPlatform
                clientType:(NSString *)clientType
                      lang:(NSString *)lang;

- (void)requestWaitingMessages;
- (void)sessionTimeLimitLogout;

// User

- (void)requestPlayerInfoForWindowSessionID:(NSString *)windowsSessionID;
- (void)getBrokenGamesOfWindowSessionWithID:(NSString *)windowSessionID;
- (void)gameAdvisorRequestForGameWithID:(NSString *)gameID ofWindowSessionID:(NSString *)windowSessionID;
- (void)getServerTimeForWindowSessionID:(NSString *)windowSessionID;
- (void)getPlayerFavorites:(NSArray<NSString *> *)listOfFavorites forWindowSessionID:(NSString *)windowSessionID;
- (void)changePlayerFavoritesState:(BOOL)state forGames:(NSArray<NSString*>*)games ofWindowSessionID:(NSString *)windowSessionID;
- (void)updateNickname:(NSString *)nickname ofWindowSessionID:(NSString *)windowSessionID;
- (void)setSelfExclusionDuration:(long)minutes forWindowSessionID:(NSString *)windowSessionID;
- (void)subscribeOnJackpotUpdatesForWindowSessionId:(NSString *)windowSessionId;

// Game

- (void)killGameWindowWithID:(NSString *)gameWindowID ofGameWithID:(NSString *)gameID ofWindowSessionWithID:(NSString *)windowSessionID;
- (void)setTableMoney:(double)money bonuses:(long)bonuses forGameWindowID:(NSString *)gameWindowID ofWindowSessionID:(NSString *)windowSessionID;
- (void)setTableLimit:(double)money duration:(long)minutes forGameWindowID:(NSString *)gameWindowID ofWindowSessionID:(NSString *)windowSessionID;
- (void)setGameBalanceMode:(NSInteger)mode forGameSessionID:(NSString *)gameSessionID ofWindowSessionID:(NSString *)windowSessionID;
- (void)freeSpinBonusRequestForGameWithID:(NSString *)gameID forGameSessionID:(NSString *)gameSessionID ofWindowSessionID:(NSString *)windowSessionID;
- (void)freeSpinBonusCoinsizeRequestForGameSessionID:(NSString *)gameSessionID ofWindowSessionID:(NSString *)windowSessionID;
//- (void)startFreeSpinBonusRequestForGameSessionID:(NSString *)gameSessionID ofWindowSessionID:(NSString *)windowSessionID;
- (void)getBonusBalancesForGameSessionID:(NSString *)gameSessionID ofWindowSessionID:(NSString *)windowSessionID;
- (void)sessionTimeLimitExtendForMinutes:(NSUInteger)extensionPeriod forGameSessionID:(NSString *)gameSessionID windowSessionID:(NSString *)windowSessionID;

// Dialog

- (void)userAcceptedBonus:(BOOL)accepted forDialogID:(NSString *)dialogID ofWindowSessionID:(NSString *)windowSessionID;
- (void)userAcceptedRealityCheck:(BOOL)accepted forDialogID:(NSString *)dialogID ofWindowSessionID:(NSString *)windowSessionID;
- (void)submitPlayerToasterDialogSuccessRequestWithDialogID:(NSString *)dialogID input:(NSString *)input windowSessionID:(NSString *)windowSessionID;
- (void)submitPlayerToasterDialogFailureRequestWithDialogId:(NSString *)dialogId unsupportedGameCode:(NSString *)gameCode windowSessionID:(NSString *)windowSessionID;
- (void)requestBonusDetailsForBonusID:(NSString *)bonusID ofWindowSessionID:(NSString *)windowSessionID;

- (void)submitEnhancedPlayerMessageSuccessRequestWithDialogID:(NSString *)dialogID input:(NSString *)input windowSessionID:(NSString *)windowSessionID;
- (void)submitEnhancedPlayerMessageFailureWithDialogID:(NSString *)dialogID
                                  unsupportedGameCodes:(NSArray<NSString *> *)unsupportedGameCodes
                               unsupportedCashierPages:(NSArray<NSString *> *)unsupportedCashierPages // what are cachier pages? pass non-nil to iclude field or nil to exclude
                                       windowSessionID:(NSString *)windowSessionID;

@end
