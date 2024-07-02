//
//  PTUGameEngine.h
//  Middle
//
//  Created by Daniil Mazepin on 10/4/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PTUGameInfo.h"
#import "PTUBringMoneyData.h"
#import "PTUResourceGame.h"
#import "Globals.h"

@class PTUDownloadGameInfo;
@class PTUMiddleLayerController;
@class PTUGamesController;
@class PTUCoreNetworkController;
@class PTUUserInfo;
@class PTUDownloadManager;
@class PTUZipArchiveController;
@class PTUURLManager;
@class PTURegulationManager;
@class PTUGameController;
@class PTUGameEngineCanLaunchResult;
@class PTUURLBuilder;
@class PTUDeviceInfo;
@class PTUConfigsController;
@class PTUReachabilityManager;
@class PTUGameEngineGameAndView;
@class PTEnvironmentSettings;
@class PTULanguageController;

@protocol PTULobbyController;
@protocol PTUGameEngineDelegate;
@protocol PTUGameController;

#pragma mark - typedef

typedef void(^PTUStopGameCompletionBlock)(BOOL success);
typedef void(^PTUGetDownloadSizeCompletionBlock)(unsigned long long downloadSize);
typedef void(^PTUGameEngineCloseGameCompletion)(BOOL success);
typedef void(^PTUGameEngineCompletion)(void);
typedef void(^PTUGameEngineRelaunchCompletion)(BOOL success);

#pragma mark - PTUGameMessageType

typedef NS_ENUM(NSUInteger, PTUGameMessageType)
{
    PTUGameHelpInfoRequest = 0,
    PTUGameShowPaytable,
    PTUGameShowSettings,
    PTUGameShowStatistic,
    PTUGameShowTutorial,
    PTUGameChangeToLeftHandOrientation,
    PTUGameChangeToRightHandOrientation,
    PTUGameTapDynamicMenu,
    PTUGameGoldenChipInfoPageRequest,
    PTUGameStartFSBRequest,
    PTUGameBackButtonRequest
};

#pragma mark - <PTUGameEngine>

@protocol PTUGameEngine <NSObject>
@required

#pragma mark Variables

/// Game engine delegate is responsible for notifying engine state actions.
@property (weak, nonatomic, nullable) id<PTUGameEngineDelegate> delegate;

/// TODO: Description
- (instancetype _Nonnull)initWithCoreNetworkController:(PTUCoreNetworkController * _Nonnull)coreNetworkController
                                      middleController:(PTUMiddleLayerController * _Nonnull)middleController
                                  zipArchiveController:(PTUZipArchiveController * _Nonnull)zipArchiveController
                                            urlManager:(PTUURLManager * _Nonnull)urlManager
                                            urlBuilder:(PTUURLBuilder * _Nonnull)urlBuilder
                                       gamesCDNBaseURL:(NSURL * _Nonnull)gamesCDNBaseURL
                                  baseHomeDirectoryURL:(NSURL * _Nonnull)baseHomeDirectoryURL
                              baseDownloadDirectoryURL:(NSURL * _Nonnull)baseDownloadDirectoryURL
                                              userInfo:(PTUUserInfo * _Nonnull)userInfo
                                   reachabilityManager:(PTUReachabilityManager * _Nonnull)reachabilityManager
                                     regulationManager:(PTURegulationManager * _Nonnull)regulationManager
                                   environmentSettings:(PTEnvironmentSettings * _Nonnull)environmentSettings
                                            deviceInfo:(PTUDeviceInfo * _Nonnull)deviceInfo
                                gameUIConfigDictionary:(NSDictionary * _Nonnull)gameUIConfigDictionary
                                stylesConfigDictionary:(NSDictionary * _Nonnull)stylesConfigDictionary
                                commonConfigDictionary:(NSDictionary * _Nonnull)commonConfigDictionary;

#pragma mark - Data sources?

- (PTUGameEngineType)gameEngineId;

- (BOOL)shouldGameBeInstalled:(PTUGameInfo * _Nonnull)gameInfo;
- (BOOL)isGameInstalled:(PTUGameInfo * _Nonnull)gameInfo;

// For bonus messages and reality check
- (BOOL)isExternalHandlingForSystemMessages;

// You need to implement isEqual and hash methods as well
- (BOOL)isEqualToGameEngine:(id<PTUGameEngine> _Nonnull)gameEngine;
- (BOOL)gamesCanSurviveThroughReconnection;
- (BOOL)gamesShouldStayThroughReconnection;
- (BOOL)supportDemoMode;
- (BOOL)canLaunchGameOfflineInDemoMode;
- (BOOL)needsShowLoadingUponSizeChange;

- (PTUGameEngineCanLaunchResult * _Nonnull)canLaunchGameWithGameInfo:(PTUGameInfo * _Nonnull)gameInfo;

- (PTUGameEngineGameAndView * _Nullable)launchGameWithResource:(PTUResourceGame * _Nonnull)gameResource
                                                     modeToken:(PTUGameModeToken * _Nonnull)modeToken
                                                      gameDate:(NSDate * _Nonnull)date
                                     gameAdvisorFeatureEnabled:(BOOL)gameAdvisorFeatureEnabled
                                            gameUILayoutConfig:(NSDictionary * _Nonnull)gameUILayoutConfig
                                                    urlBuilder:(PTUURLBuilder * _Nonnull)urlBuilder
                                                         owner:(PTUGamesController * _Nonnull)owner;

- (NSString * _Nonnull)sendAutoTestRequest:(NSString * _Nonnull)request toGameWithGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (NSURL * _Nullable)downloadDirectoryURLForGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (NSURL * _Nullable)resourcesDirectoryURLForGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (unsigned long long)downloadGameSizeForGameInfo:(PTUGameInfo * _Nonnull)game;
- (PTUGameType)gameTypeForGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (PTUGameState)stateForGame:(PTUGameInfo * _Nonnull)game;
- (NSError * _Nullable)stateForGame:(PTUGameInfo * _Nonnull)game state:(out PTUGameState * _Nonnull)outState progress:(out double *  _Nonnull)outProgress;
- (NSDictionary * _Nonnull)gameConfigForGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (NSArray<NSString *> * _Nonnull)physicallyInstalledGameIDs;

#pragma mark - Actions

- (void)launchGamesUpdate;


- (void)relaunchCurrentGameWithToken:(PTUGameModeToken * _Nonnull)modeToken
                          completion:(PTUGameEngineRelaunchCompletion _Nonnull)completion;

/// One of 4 functions to close game.
- (void)stopGame:(PTUGameController * _Nonnull)game withCompletion:(PTUGameEngineCloseGameCompletion _Nonnull)completion;

/// One of 4 functions to close game. Try to stop active game.
/// @param completion used to notify result of stoping game (NO if game can't be stopped)
- (void)tryStopGame:(PTUGameController * _Nonnull)game withCompletion:(PTUGameEngineCloseGameCompletion _Nonnull)completion;

/// One of 4 functions to close game. Schedule stop an active game to be performed once it is possible.
- (void)scheduleStopGame:(PTUGameController * _Nonnull)game withCompletion:(PTUGameEngineCompletion _Nonnull)completion;

/// One of 4 functions to close game. Force active game stop.
/// ⚠️ Not safe action. Better to use funcs 'tryStopGame:' or 'scheduleStopGame:'
- (void)forceStopGame:(PTUGameController * _Nonnull)game withCompletion:(PTUGameEngineCompletion _Nonnull)completion;

/// Before calling makeGameClosing you have to call stopGame func.
- (void)makeGameClosing:(PTUGameController * _Nonnull)game withCompletion:(PTUGameEngineCompletion _Nonnull)completion;
- (void)sendMessage:(PTUGameMessageType)messageType toGameWithGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (void)addChatCheat:(NSString * _Nonnull)cheatString toGameWithGameInfo:(PTUGameInfo * _Nonnull)gameInfo;
- (void)deleteGame:(PTUGameInfo * _Nonnull)game completion:(PTUGameEngineCompletion _Nonnull)completion;
- (void)deleteGameWithIDDontNotify:(NSString * _Nonnull)gameID completion:(PTUGameEngineCompletion _Nonnull)completion;
- (void)startDownloadForGame:(PTUGameInfo * _Nonnull)game;
- (void)pauseDownloadForGame:(PTUGameInfo * _Nonnull)game;
- (void)cancelDownloadForGame:(PTUGameInfo * _Nonnull)game;

- (void)getDownloadSizeForGame:(PTUGameInfo * _Nonnull)game completionBlock:(PTUGetDownloadSizeCompletionBlock _Nonnull)completionBlock;

@optional
/// Is used to send to game visability state in case if platform shows alert or web view, we have to set visability to false.
- (void)updateVisability:(BOOL)gameIsVisible;
- (void)handleSocketDidDisconnect;
- (void)handleUserRelogin;
- (void)userSetGameBalanceMode:(PTUGameBalanceMode)gameBalanceMode;
- (void)stopAutoplay;
- (void)startSessionWithLossLimit:(double)lossLimit;

- (void)loadInitialConfigWithCompletionBlock:(void(^_Nonnull)(void))completionBlock;

@end

#pragma mark - PTUGameEngineDelegate

@protocol PTUGameEngineDelegate <NSObject>
@required

- (void)gameEngine:(id<PTUGameEngine> _Nonnull)gameEngine
didChangeStateForGame:(PTUGameInfo * _Nonnull)game
             state:(PTUGameState)state
  isOnlyBaseUpdate:(BOOL)isOnlyBaseUpdate
          progress:(CGFloat)progress
             error:(NSError * _Nullable)error;

@end
