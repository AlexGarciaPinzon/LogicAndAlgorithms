//
//  PTUGamesController.h
//  Middle
//
//  Created by yudu on 9/20/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
@import Tools.PTSDKInternalEnums;
@import Tools.PTSDKExternalEnums;

#import <Middle/Globals.h>
#import <Middle/PTUGameInfo.h>
#import <Middle/PTUSessionLimitsProtocol.h>
#import <Middle/PTUNetlossController.h>
#import <Middle/PTUSessionSummaryProtocol.h>
#import <Middle/PTUGameLaunchRecipe.h>
#import <Middle/PTUGames.h>

@class PTUGamesController;
@class PTUGamesDownloadManager;
@class PTUDownloadManager;
@class PTUZipArchiveController;
@class PTUDeviceInfo;
@class PTUUserInfo;
@class PTUCoreNetworkController;
@class PTULobbyRouting;
@class PTURegulationManager;
@class PTUPASManager;
@class PTUGameMoneyMode;
@class PTUGameController;
@class PTUGameContents;
@class PTUGamePresentation;
@class PTUGameUIViewController;
@class PTSDKInternalError;
@class PTULanguageController;

@protocol PTULobbyController;
@protocol PTUGameViewControllerProtocol;

/**
 @brief Specifies behaviour for multiple games

 @discussion Every possible value is comprises condition and action

 @b Conditions:
 @li @c OtherGames: behaviour when other unrelated games are already launched
 @li @c SameGameOtherEngine: behaviour when other instances of same game are launched on other engines
 @li @c SameGameSameEngine: behaviour when other instances of same game are launched on same engines
 @li @c BlockingGame: behaviour when other unrelated game is already launched, but given game cannot be launched in same time with it
 
 @b Actions:
 @li @c Cancel: cancel launch of new game, do nothing
 @li @c Allow: allow launch of new game while present games remain
 @li @c Replace: allow launch of new game while closing other games
 @li @c Skip: on given condition item is skipped and not cosidered, has priority over Replace
 */
typedef NS_OPTIONS(NSUInteger, PTUGamesControllerMultipleGamesPolicy)
{
    PTUGamesControllerMultipleGamesPolicyOtherGamesCancel                                                                   = 0b00 << 0,
    PTUGamesControllerMultipleGamesPolicyOtherGamesAllow                                                                    = 0b01 << 0,
    PTUGamesControllerMultipleGamesPolicyOtherGamesReplace                                                                  = 0b10 << 0,

    PTUGamesControllerMultipleGamesPolicySameGameOtherEngineCancel                                                          = 0b00 << 2,
    PTUGamesControllerMultipleGamesPolicySameGameOtherEngineAllow                                                           = 0b01 << 2,
    PTUGamesControllerMultipleGamesPolicySameGameOtherEngineReplace                                                         = 0b10 << 2,

    PTUGamesControllerMultipleGamesPolicySameGameSameEngineCancel                                                           = 0b00 << 4,
    PTUGamesControllerMultipleGamesPolicySameGameSameEngineAllow                                                            = 0b01 << 4,
    PTUGamesControllerMultipleGamesPolicySameGameSameEngineReplace                                                          = 0b10 << 4,

    PTUGamesControllerMultipleGamesPolicyBlockingGameCancel                                                                 = 0b00 << 6,
    PTUGamesControllerMultipleGamesPolicyBlockingGameSkip                                                                   = 0b01 << 6,
    PTUGamesControllerMultipleGamesPolicyBlockingGameReplace                                                                = 0b10 << 6
};

/**
 @brief Specified order in which game engines to run this game are considered

 @li @c Hint: engine type passed as hint parameter
 @li @c Default: default engine type for given game
 @li @c Any: any engine fit for given game in given context (like multigame blocking behaviour)
 @li @c Block: cancel operation

 @discussion
 If considered engine is not eligible for running given game it will be skipped.
 When there are no more engines to assume operation will cancel
 */
typedef NS_ENUM(NSUInteger, PTUGamesControllerEnginePolicy)
{
    PTUGamesControllerEnginePolicy_Hint_Default_Any,
    PTUGamesControllerEnginePolicy_Hint_Default_Block,
    PTUGamesControllerEnginePolicy_Hint_Any,
    PTUGamesControllerEnginePolicy_Hint_Block,
    PTUGamesControllerEnginePolicy_Default_Any,
    PTUGamesControllerEnginePolicy_Default_Block,
    PTUGamesControllerEnginePolicy_Any,
    PTUGamesControllerEnginePolicy_Block
};

PTUGamesControllerEnginePolicy PTUGamesControllerEnginePolicyAddHintToNonblocking(PTUGamesControllerEnginePolicy policy);
PTUGamesControllerEnginePolicy PTUGamesControllerEnginePolicRemoveHintButDontBlock(PTUGamesControllerEnginePolicy policy);
BOOL PTUGamesControllerEnginePolicyHasHint(PTUGamesControllerEnginePolicy policy);

typedef NS_ENUM(NSUInteger, PTUGamesControllerLaunchSource)
{
    PTUGamesControllerLaunchSourceUnknown,
    PTUGamesControllerLaunchSourceGameAdvisor,
    PTUGamesControllerLaunchSourceGameSwitch,
    PTUGamesControllerLaunchSourceGoToRealMode,
    PTUGamesControllerLaunchSourceAlertURLCallback,
    PTUGamesControllerLaunchSourceWebViewURLCallback,
    PTUGamesControllerLaunchSourceGameInternalRequestOther, // most likely from in-game game advisor
    PTUGamesControllerLaunchSourceGameInternalRequestRelaunch,
    PTUGamesControllerLaunchSourceContinuity,
    PTUGamesControllerLaunchSourceLobby,
    PTUGamesControllerLaunchSourceDeepLinking,
    PTUGamesControllerLaunchSourcePromotionBanner,
    PTUGamesControllerLaunchSourceGameUIMultigameUI,
    PTUGamesControllerLaunchSourceGameUIQuickGameSwitch,
    PTUGamesControllerLaunchSourceGameUIOther,
    PTUGamesControllerLaunchSourceNetworkStatus, // like upon reconnect
    PTUGamesControllerLaunchSourceRemoteMessage,
    PTUGamesControllerLaunchSourceBrokenGamesAlertDialog,
    PTUGamesControllerLaunchSourceToasterMessage,
    PTUGamesControllerLaunchSourceNativeSDK,
    PTUGamesControllerLaunchSourceKingdomRise
};

typedef void(^PTUGamesControllerGetDownloadSizeCompletionBlock)(unsigned long long downloadSize);
typedef void(^PTUGamesControllerGetTokenCompletionBlock)(NSString * _Nullable name, NSString * _Nullable PASToken, NSError * _Nullable error);
typedef void(^PTUGamesControllerLaunchGamesCompletion)(NSUInteger firstBadRecipeIndex, PTUGameLaunchRecipeType firstBadRecipeType, NSArray<PTUGamePresentation *> * _Nonnull launchedPresentations);
typedef void(^PTUGamesControllerSwitchGameCompletion)(BOOL fromGameWasClosed, BOOL toGameWasOpened);
typedef void(^PTUGamesControllerCloseGamesCompletion)(NSArray<PTUGamePresentation *> * _Nonnull closedPresentations, NSIndexSet * _Nonnull closedIndexes, NSUInteger newCount);
typedef void(^PTUGamesControllerTokenRequestCallback)(NSString * _Nullable name, NSString * _Nullable PASToken, NSError * _Nullable error);
typedef void(^PTUGamesControllerWillCloseCompletion)(BOOL willClose);
typedef void(^PTUGamesControllerShowAdvisorCompletion)(void);
typedef void(^PTUGamesControllerLoadAdvisorContentCompletion)(NSArray * _Nullable content);
typedef void(^PTUGamesControllerAutoplayConfirmationDialogCompletion)(BOOL confirmed);
typedef void(^PTUGamesControllerAutoplayStartBlock)(uint64_t lossLimit, BOOL stopOnUserSingleWin, uint64_t singleWinLimit, BOOL stopOnUserJackpotWin);
typedef void(^PTUGamesControllerAutoplayStopBlock)(void);
typedef void(^PTUGamesControllerBalanceRequestCompletion)(PTUFreeSpinBonusResponse * _Nullable response);
typedef void(^PTUGamesControllerMessageCompletion)(void);
typedef void(^PTUGamesControllerSuccessCompletion)(BOOL success);
//typedef void(^PTUGamesControllerInsufficientBalanceDecisionCompletion)(PTUGamesControllerInsufficientBalanceDecision decision);
typedef void(^PTUGamesControllerGameAdvisorCompletionBlock)(PTUResourceGames const * const _Nullable content, NSError * _Nullable error);
typedef void(^PTUGamesControllerCompletion)(void);

#pragma mark - PTUGameStateObserverProtocol

@protocol PTUGameStateObserverProtocol <NSObject>
@required

- (void)gamesController:(PTUGamesController * _Nonnull)gamesController didChangeStateForGameInfo:(PTUGameInfo * _Nonnull)gameInfo state:(PTUGameState)state progress:(CGFloat)progress;

@end

#pragma mark - PTUGamesSettingsDelegate

@protocol PTUGamesSettingsDelegate <NSObject>

- (BOOL)getSoundState;
- (void)handleSoundState:(BOOL)state;
- (void)handleServerTimeState:(BOOL)state;

@end

#pragma mark - PTUGamesObserver

@protocol PTUGamesObserver <NSObject>
@optional

- (void)gamesController:(PTUGamesController * _Nonnull)gamesController
             closedGame:(PTUGameInfo * _Nonnull)closedGame
             withReason:(PTSDKLobbyClosedGameReason)reason;

/// @param removedIndexes indexes in original array
/// @param addedIndexes indexes in array after removal
-    (void)gamesController:(PTUGamesController * _Nonnull)gamesController
didRemoveGamePresentations:(NSArray<PTUGamePresentation *> * _Nonnull)removedGamePresentations
                 atIndexes:(NSIndexSet * _Nonnull)removedIndexes
   didAddGamePresentations:(NSArray<PTUGamePresentation *> * _Nonnull)addedGamePresentations
                 atIndexes:(NSIndexSet * _Nonnull)addedIndexes;

- (void)gamesController:(PTUGamesController * _Nonnull)gamesController didChangeFocusFromIndex:(NSUInteger)fromIndex toIndex:(NSUInteger)toIndex;
- (void)gamesUpdatedSupportedOrientationTo:(PTUUIOrientationMask)newSupportedOrientations;
- (void)gamesController:(PTUGamesController * _Nonnull)gamesController allowesToShowMessages:(BOOL)allows;

/// Func witch asks to show web view controller (which shows game suite map/shop in web view). It relates only to Kingdom Rise games.
- (void)gamesController:(nonnull PTUGamesController *)controller askedToOpenKingdomRiseGameSuite:(nonnull UIViewController *)webViewController;

/// Obviously this func will ask to close Kingdoms Rise game suite web view in observers. (Usually observers are PlatfomUI viewModels)
- (void)gamesController:(nonnull PTUGamesController *)controller askedToCloseKingdomRiseGameSuiteWithCompeltion:(void(^_Nullable)(void))completion;

/// To notify that we no need to show loading screen.
- (void)kingdomRiseWebViewIsReadyForDisplayController:(nonnull PTUGamesController *)controller;

@end

#pragma mark - PTUGamesController

/// PTUGamesController it's the main controller of all gameControllers in the app (only one game controller may be launched at the same time). Why the app has the ability to launch several games at the same time? Answer:
/// It was a feature request bu licensees to make simultaneous launching several games, but then they refuse this idea.
/// Use this object to make requests or other UI actions to game view.
@interface PTUGamesController : NSObject

@property (weak,   nonatomic, readonly) PTUMiddleLayerController * _Nullable middleLayerController;

@property (weak,   nonatomic, nullable) id<PTUGamesSettingsDelegate> settingsDelegate;
@property (strong, nonatomic, nullable) id<PTUSessionLimitsProtocol> sessionLimitsController;
@property (strong, nonatomic, readonly, nullable) id<PTUSessionSummaryProtocol> sessionSummaryController;

@property (strong, nonatomic, readonly, nonnull) PTURegulationManager *regulationManager;
@property (strong, nonatomic, readonly, nonnull) PTEnvironmentSettings *environmentSettings;
@property (strong, nonatomic, readonly, nonnull) PTUGamesDownloadManager *gamesDownloadManager;
@property (strong, nonatomic, readonly, nullable) PTUUserInfo *userInfo;
@property (strong, nonatomic, readonly, nonnull) PTULanguageController *languageController;
@property (weak,   nonatomic, readonly, nullable) PTUNetlossController *netlossController;

@property (assign, nonatomic) BOOL sessionLimitsEnabled;

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

+ (PTUGameBalance)defaultDemoBalance;

- (instancetype _Nullable)initWithCoreNetworkController:(PTUCoreNetworkController * _Nonnull)coreNetworkController
                                  middleLayerController:(PTUMiddleLayerController * _Nonnull)middleLayerController // TODO: remove
                                        downloadManager:(PTUDownloadManager * _Nonnull)downloadManager
                                   zipArchiveController:(PTUZipArchiveController * _Nonnull)zipArchiveController
                                             urlManager:(PTUURLManager * _Nonnull)urlManager
                                             urlBuilder:(PTUURLBuilder * _Nonnull)urlBuilder
                                        gamesCDNBaseURL:(NSURL * _Nonnull)gamesCDNBaseURL
                                               userInfo:(PTUUserInfo * _Nullable)userInfo
                                        lobbyController:(id<PTULobbyController> _Nonnull)lobbyController
                                       mainLobbyRouting:(PTULobbyRouting * _Nonnull)mainLobbyRouting
                                      regulationManager:(PTURegulationManager * _Nonnull)regulationManager
                                    environmentSettings:(PTEnvironmentSettings * _Nonnull)environmentSettings
                                      configsController:(PTUConfigsController * _Nonnull)configsController
                                     languageController:(PTULanguageController * _Nonnull)languageController
                                      netlossController:(PTUNetlossController * _Nullable)netlossController
                                       settingsDelegate:(id<PTUGamesSettingsDelegate> _Nullable)settingsDelegate
                                             deviceInfo:(PTUDeviceInfo * _Nonnull)deviceInfo NS_DESIGNATED_INITIALIZER;

- (NSArray<PTUResourceGame *> * _Nullable)installedGameResourcesOfGameResources:(NSArray<PTUResourceGame *> * _Nonnull)gameResources;

- (void)registerGameEngineClasses:(NSArray<Class> * _Nonnull)gameEngineClasses
                     gameUIConfig:(NSDictionary *)gameUIConfig
                      stylesCofig:(NSDictionary *)stylesConfig
                    commonUICofig:(NSDictionary *)commonUICofig
                  completionBlock:(void(^ _Nullable)(void))completionBlock;

- (BOOL)isGameEngineSupported:(PTUGameEngineType)gameEngineType;
- (id<PTUGameEngine> _Nullable)gameEngineForGameInfo:(PTUGameInfo * _Nonnull)gameInfo;

- (void)addGameStateObserver:(id<PTUGameStateObserverProtocol> _Nonnull)observer forGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (void)removeGameStateObserver:(id<PTUGameStateObserverProtocol> _Nonnull)observer forGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (void)removeGameStateObserverForAllGameInfos:(id<PTUGameStateObserverProtocol> _Nonnull)observer;

- (void)addGamesObserver:(id<PTUGamesObserver> _Nonnull)observer;
- (void)removeGamesObserver:(id<PTUGamesObserver> _Nonnull)observer;

- (BOOL)socketDidDisconnectShouldRetry;
- (void)handleUserReloginWithUsername:(NSString * _Nonnull)username password:(NSString * _Nullable)password token:(NSString * _Nullable)loginToken;

- (void)startDownloadForGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (void)pauseDownloadForGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (void)cancelDownloadForGameInfo:(PTUGameInfo * _Nonnull)gameInfo;

- (void)sendMessage:(PTUGameMessageType)messageType toGameWithGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (NSString * _Nullable)sendAutoTestRequest:(NSString * _Nonnull)request toGameWithGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (void)addChatCheat:(NSString * _Nonnull)cheatString toGameWithGameInfo:(PTUGameInfo * _Nonnull)gameInfo;

- (BOOL)shouldGameBeInstalled:(PTUGameInfo * _Nonnull)gameInfo;

- (void)downloadSizeForGameInfo:(PTUGameInfo * _Nonnull)gameInfo completionBlock:(PTUGamesControllerGetDownloadSizeCompletionBlock _Nonnull)completionBlock;

- (PTUGameState)stateForGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (NSError * _Nullable)stateForGameInfo:(PTUGameInfo * _Nonnull)gameInfo state:(out PTUGameState * _Nullable)outState progress:(out double * _Nullable)outProgress;
- (NSArray<PTUGameEngineCanLaunchResult *> * _Nonnull)canLaunchGameWithInfo:(PTUGameInfo * _Nonnull)gameInfo;

- (void)deleteGameWithInfo:(PTUGameInfo * _Nonnull)gameInfo completion:(PTUGamesControllerCompletion _Nullable)completion;
- (void)deleteGameWithIDDontNotify:(NSString * _Nonnull)gameID completion:(PTUGamesControllerCompletion _Nullable)completion;
- (void)deleteGames:(NSArray<PTUGameInfo *> * _Nonnull)gamesToDelete withCompletion:(PTUGamesControllerCompletion _Nullable)completion;

- (NSArray<PTUGameInfo *> * _Nullable)gamesForEngineType:(PTUGameEngineType)engineType ofGames:(NSArray<PTUGameInfo *> * _Nullable)games;
- (NSString * _Nullable)gamesVersion;

- (void)resourcesSizeForGameInfo:(PTUGameInfo * _Nullable)gameInfo
                 completionBlock:(void (^ _Nullable)(double resourcesSize, NSError * _Nullable error))completionBlock;

- (void)stopAutoplay;
- (void)startSessionWithLossLimit:(double)lossLimit;

- (void)startGameSummarySession;

- (BOOL)soundState;
- (void)handleChangeSoundStateTo:(BOOL)newState;
- (void)handleChangeServerTimeStateTo:(BOOL)newState;

- (BOOL)hasLaunchedGame;
- (NSArray<PTUGamePresentation *> * _Nonnull)launchedPresentations;
- (NSArray<PTUResourceGame *> *_Nonnull)launchedGames;
- (BOOL)isGameLaunched:(PTUResourceGame * _Nonnull)gameResource;

- (void)launchGameWithResource:(PTUResourceGame * _Nullable)gameResource
                     modeToken:(PTUGameModeToken * _Nullable)modeToken
                    fromSource:(PTUGamesControllerLaunchSource)launchSource
                    completion:(PTUGamesControllerLaunchGamesCompletion _Nullable)completion;

- (void)relaunchGamesWithModeToken:(PTUGameModeToken *_Nonnull)modeToken
                        fromSource:(PTUGamesControllerLaunchSource)launchSource
                        completion:(nullable void (^)(BOOL))completion;

//- (void)gameUI:(UIViewController<PTUGameViewControllerProtocol> *)gameUI switchToGameWithResource:(PTUResourceGame *)gameResource
//    completion:(PTUGamesControllerSwitchGameCompletion)completion;

- (void)gameUI:(UIViewController<PTUGameViewControllerProtocol> * _Nullable)gameUI
withGameAdvisor:(BOOL)showGameAdvisor
   withContent:(PTUResourceGames * _Nullable)advisorContent
willCloseCompletion:(PTUGamesControllerWillCloseCompletion _Nullable)willCloseCompletion;

- (void)quitGamePresentation:(nonnull PTUGamePresentation *)gamePresentation
                      reason:(PTSDKLobbyClosedGameReason)reason
                       error:(nullable PTSDKInternalError *)error
                 anotherGame:(nullable PTUGameInfo *)anotherGame
                        mode:(PTSDKGameMode)gameMode
                  completion:(nullable PTUGamesControllerCloseGamesCompletion)completion;

- (void)quitGamesWithReason:(PTSDKLobbyClosedGameReason)reason
                      error:(nullable PTSDKInternalError *)error
                anotherGame:(nullable PTUGameInfo *)anotherGame
                       mode:(PTSDKGameMode)gameMode
                 completion:(nullable PTUGamesControllerCloseGamesCompletion)completion;

- (void)quitGamesWithReason:(PTSDKLobbyClosedGameReason)reason
                      error:(nullable PTSDKInternalError *)error
                anotherGame:(nullable PTUGameInfo *)anotherGame
                 completion:(nullable PTUGamesControllerCloseGamesCompletion)completion;

- (void)quitGamesWithReason:(PTSDKLobbyClosedGameReason)reason
                      error:(nullable PTSDKInternalError *)error
      anotherGameIdentifier:(nullable NSString *)anotherGameIdentifier
                 completion:(nullable PTUGamesControllerCloseGamesCompletion)completion;

- (void)quitGamePresentations:(nonnull NSArray<PTUGamePresentation *> *)gamePresentations
                       reason:(PTSDKLobbyClosedGameReason)reason
                        error:(nullable PTSDKInternalError *)error
                  anotherGame:(nullable PTUGameInfo *)anotherGame
                         mode:(PTSDKGameMode)gameMode
                   completion:(nullable PTUGamesControllerCloseGamesCompletion)completion;

/// New way to close game in SDK. Is used in the case when lobby tries to close the game directly.
- (void)tryQuitGamesWithReason:(PTSDKLobbyClosedGameReason)reason
                    completion:(nullable void(^)(enum PTSDKCloseGameResult))completion;

/// New way to close game in SDK. Is used in the case when lobby tries to close the game directly.
- (void)scheduleQuitGamesWithReason:(PTSDKLobbyClosedGameReason)reason
                         completion:(nullable void(^)(enum PTSDKCloseGameResult))completion;

/// New way to close game in SDK. Is used in the case when lobby tries to close the game directly.
- (void)forceQuitGamesWithReason:(PTSDKLobbyClosedGameReason)reason
                      completion:(nullable void(^)(enum PTSDKCloseGameResult))completion;

/// Send command to launched game.
- (void)sendCommandToLaunchedGame:(nonnull NSString *)command handler:(void (^_Nullable)(BOOL isSuccess))handler;

- (void)closeGamePresentationWithGameController:(PTUGameController * _Nonnull)gameController
                                         reason:(PTSDKLobbyClosedGameReason)reason
                                    gameAdvisor:(BOOL)showGameAdvisor
                                        content:(PTUResourceGames * _Nullable)advisorContent
                            willCloseCompletion:(PTUGamesControllerWillCloseCompletion _Nullable)willCloseCompletion;

- (void)gameController:(PTUGameController * _Nonnull)gameController
         quitWithError:(NSError * _Nullable)error
            completion:(PTUGamesControllerCloseGamesCompletion _Nullable)completion;

- (void)gamePresentationFocus:(PTUGamePresentation * _Nonnull)gamePresentation;

- (BOOL)someLaunchedGamesShouldStayThroughReconnection;

- (NSDictionary<NSNumber /* <PTUGameEngineType> */ *, NSArray<PTUGamePresentation *> *> * _Nonnull)gameEnginesWithLaunchedGames;

- (PTUGamePresentation * _Nullable)firstNGMGamePresentation __attribute__((deprecated));

- (void)gameController:(PTUGameController * _Nonnull)gameController askedToOpenGameWithID:(NSString * _Nonnull)gameID inMode:(PTSDKGameMode)gameMode;
- (void)gameControllerAskedToLogout:(PTUGameController * _Nonnull)gamePresentation;
- (void)gameController:(PTUGameController * _Nonnull)gameController askedToGoToExternalPage:(NSString * _Nonnull)page withTitle:(NSString * _Nullable)title;

/// <#Description#>
- (void)gameController:(PTUGameController * _Nonnull)gameController askedForTokenWithCompletion:(PTUGamesControllerTokenRequestCallback _Nonnull)completion;
/// <#Description#>
- (void)gameController:(PTUGameController * _Nonnull)gameController askedForPOPTokenWithCompletion:(PTUGamesControllerTokenRequestCallback _Nonnull)completion;
/// <#Description#>
- (void)gameController:(PTUGameController * _Nonnull)gameController askedForHTML5TokenWithCompletion:(PTUGamesControllerTokenRequestCallback _Nonnull)completion;
/// <#Description#>
/// @param gameController <#gameController description#>
/// @param tokenName <#tokenName description#>
/// @param completion <#completion description#>
- (void)gameController:(PTUGameController *_Nonnull)gameController
 askedForTokenWithName:(NSString *_Nonnull)tokenName
           completion:(PTUGamesControllerTokenRequestCallback _Nullable)completion;
/// <#Description#>
- (void)askedForNonSysIdTokenWithCompletion:(PTUGamesControllerTokenRequestCallback _Nonnull)completion;

- (void)gameControllerAskedToOpenDeposit:(PTUGameController * _Nonnull)gameController;
- (void)gameControllerAskedToGoToRealMode:(PTUGameController * _Nonnull)gameController;
//- (void)gameControllerAskedToRelaunch:(PTUGameController *_Nonnull)gameController;

/// Func which get from PTUNativeKriseURLKey full url of Kingdomrise game suite map/shop.
- (void)getKingdomRiseSuiteUrl:(nonnull NSString *)subpage SuiteId:(nullable NSString *)suiteId completion:(void(^_Nonnull)(NSURL *_Nullable kriseUrl))completion;

- (void)gameController:(PTUGameController * _Nonnull)gameController
askedToShowAutoplayConfirmationDialogWithCompletion:(PTUGamesControllerAutoplayConfirmationDialogCompletion _Nonnull)dialogCompletion;
- (void)gameController:(PTUGameController * _Nonnull)gameController
askedToShowAutoplaySessionLimitsWithStartAutoplayBlock:(PTUGamesControllerAutoplayStartBlock _Nonnull)autoplayBlock
             stopBlock:(PTUGamesControllerAutoplayStopBlock _Nonnull)stopBlock
        jackpotEnabled:(BOOL)jackpotEnabled
  totalBetPerSpinCents:(NSInteger)totalBetPerSpinCents
 userTableBalanceCents:(NSUInteger)userTableBalanceCents;
- (void)gameRequestsBonusBalance:(PTUGameController * _Nonnull)gameController;

//- (void)gameController:(PTUGameController * _Nonnull)gameController askedToShowInsufficientBalanceDialogWithCompletion:(PTUGamesControllerInsufficientBalanceDecisionCompletion _Nonnull)completion;
- (void)gameController:(PTUGameController * _Nonnull)gameController askedToShowMessage:(NSString * _Nonnull)message completion:(PTUGamesControllerMessageCompletion _Nonnull)completion;
- (void)gameController:(PTUGameController * _Nonnull)gameController requestBalanceWithCompletion:(PTUGamesControllerBalanceRequestCompletion _Nonnull)completion;

- (NSString * _Nonnull)gameController:(PTUGameController * _Nonnull)gameController formatBalanceInCents:(uint64_t)balanceInCents;

- (void)gameController:(PTUGameController * _Nonnull)gameController
askedToShowMessage:(NSString * _Nonnull)message
positiveTitle:(NSString * _Nullable)positiveTitle
positiveCompletion:(PTUGamesControllerMessageCompletion _Nullable)positiveCompletion
negativeTitle:(NSString * _Nullable)negativeTitle
negativeCompletion:(PTUGamesControllerMessageCompletion _Nullable)negativeCompletion;

- (void)gameController:(PTUGameController * _Nonnull)gameController setGameBalanceMode:(PTUGameBalanceMode)gameBalanceMode;

- (void)gameController:(PTUGameController * _Nonnull)gameController setTableMoney:(uint64_t)tableMoney bonuses:(uint64_t)bonuses;

- (void)gameController:(PTUGameController * _Nonnull)gameController askedForLiveTokenWithCompletion:(PTUGamesControllerTokenRequestCallback _Nonnull)compleiton;
- (void)gameController:(PTUGameController * _Nonnull)gameController askedForLive2TokenWithCompletion:(PTUGamesControllerTokenRequestCallback _Nonnull)compleiton;

- (void)gameController:(PTUGameController * _Nonnull)gameController didAllowShowingMessages:(BOOL)allow;

- (void)gameController:(PTUGameController * _Nonnull)gameController changedSupportedOrientationsTo:(PTUUIOrientationMask)supportedOrientations;

- (void)gameController:(PTUGameController * _Nonnull)gameController askedToOpenURL:(NSURL * _Nonnull)url title:(NSString * _Nullable)title;

- (id<PTUGameEngine> _Nullable)gameEngineWithType:(PTUGameEngineType)gameEngineType;

- (void)gameMultigameUIOfGameController:(PTUGameController * _Nonnull)gameController
            askedToOpenGameWithResource:(PTUResourceGame * _Nonnull)gameResource
                                 inMode:(PTSDKGameMode)gameMode;

- (void)addGameWindowSessionId:(NSString * _Nonnull)gameWindowId forGameId:(NSString * _Nonnull)gameId;
- (void)killGameWindowSessionId:(NSString * _Nonnull)gameWindowId forGameId:(NSString * _Nonnull)gameId;
- (void)killAllGameWindowSessions;

- (BOOL)allowsShowingMessages;

- (void)getAdvisorGamesForGameInfo:(PTUGameInfo * _Nonnull)gameInfo completion:(PTUGamesControllerGameAdvisorCompletionBlock _Nonnull)completion;

- (NSArray<NSString *> * _Nonnull)physicallyInstalledGameIDs;

- (void)launchGamesUpdate;

/// Use quitGamesWithReason
- (void)closeGamesWithReason:(PTSDKLobbyClosedGameReason)reason
                       error:(nullable PTSDKInternalError *)error
                 anotherGame:(nullable PTUGameInfo *)anotherGame
                        mode:(PTSDKGameMode)gameMode
                  completion:(void(^_Nullable)(void))completion;

/// Use this func to open Kingdoms rise game suite map (web view controller). This func has to be implemented in HTML5GameController.
/// Navigate to HTML5GameController and read more info.
- (void)askedToOpenKingdomRiseGameSuiteMapSuiteId:(nullable NSString *)suiteId;

/// Use this func to open Kingdoms rise game suite shop (web view controller). This func has to be implemented in HTML5GameController.
/// Navigate to HTML5GameController and read more info.
- (void)askedToOpenKingdomRiseGameShopSuiteId:(nullable NSString *)suiteId;

/// Use this func to close Kingdoms rise game suite web view controller. This func has to be implemented in HTML5GameController.
/// Navigate to HTML5GameController and read more info.
- (void)askedToCloseKingdomRiseGameSuite;

/// To ask platform ui that web view is ready to display.
- (void)setKingdomRiseWebViewIsReadyForDisplay;

- (BOOL)isLoggedIn;

@end
