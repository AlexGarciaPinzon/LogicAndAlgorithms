//
//  PTUMiddleLayerController.h
//  Middle
//
//  Created by yudu on 9/20/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PTUBalanceInfo.h"
#import "PTUGameInfo.h"
#import "PTUUserInfo.h"
#import "PTUConfigInfo.h"
#import "PTUFeaturesManager.h"
#import "PTUReachabilityManager.h"
#import "PTUCoreNetworkFlowProtocol.h"
#import "PTULobbyController.h"
#import "PTUNetlossController.h"
#import "PTUCooldownController.h"

NS_ASSUME_NONNULL_BEGIN

@class PTUMiddleLayerController;
@class PTUURLManager;
@class PTUDownloadManager;
@class PTURegulationManager;
@class PTUToasterController;
@class PTULobbyRouting;
@class PTUSDKKit;
@class PTUWindowSessionManager;
@class PTUConfigsController;
@class PTULanguageController;
@class PTUExternalConfigsManager;
@class PTUURLSessionManager;
@class PTUBrokenGamesManager;
@class PTUURLBuilder;
@class PTURemoteMessageQueue;
@class PTURemoteMessageDialog,
       PTURemoteMessageBonusDetails,
       PTURemoteMessageRealityCheck,
       PTURemoteMessagePushNotification,
       PTUCasinoAlertNotification,
       PTURemoteMessageLogin,
       PTURemoteMessageAlert,
       PTURemoteMessageDialogMessage;

@class PTUTimeController;
@class PTUSessionTimeController;
@class PTUBrokenGamesResponse;
@class PTUGamesController;
@class PTURetrieverImageFreestylePromotion;
@class PTURetrieverImageFreestyleFromCache;
@class PTUCasinoErrorResponse;

@protocol PTULobbyController;
@import Tools.PTUSDKKitEventsProtocol;
@import Tools.PTUSDKNetworkCommunicationProtocol;
@import Tools.PTSDKInternalEnums;
@import Tools.PTSDKExternalEnums;

typedef void(^PTUMiddleLayerControllerCompletion)(void);
typedef void(^PTUMiddleLayerControllerSuccessErrorCompletion)(BOOL success, NSError * _Nullable error);
typedef void(^PTUMiddleLayerControllerUpdateTokenCompletionBlock)(NSString *name, NSString *token, NSError *error);
typedef void(^PTUMiddleLayerControllerInitialConfigsLoadCompletion)(BOOL success, NSError *error, NSURL *baseURL);
typedef void(^PTUMiddleLayerControllerConfigsLoadCompletionBlock)(NSArray<PTUConfigInfo *> *configInfos);
typedef void(^PTUMiddleLayerControllerServerTimeCompletionBlock)(NSDate *serverDate);

typedef void(^PTUMiddleLayerControllerTermsCallBackBlock)(BOOL accepted);
typedef void(^PTUMiddleLayerControllerTermsOfUseBlock)(NSURL *url, PTUMiddleLayerControllerTermsCallBackBlock acceptBlock);

typedef void(^PTUMiddleLayerControllerChangePasswordCallBackBlock)(NSString *oldPassword, NSString *newPassword);
typedef void(^PTUMiddleLayerControllerChangePasswordBlock)(NSError * _Nullable error, PTUMiddleLayerControllerChangePasswordCallBackBlock _Nullable callBackBlock);
typedef void(^PTUMiddleLayerControllerGameAdvisorCompletionBlock)(PTUResourceGames const * const _Nullable content, NSError * _Nullable error);

typedef void(^PTUMiddleLayerControllerLoginCompletion)(BOOL success, NSError *error);
typedef void(^PTUMiddleLayerControllerLogoutCompletion)(void);

// Licensee Regulation
typedef NS_ENUM (NSUInteger, PTUMiddleLayerLicenseeRegulationState)
{
    PTUMiddleLayerLicenseeRegulationStateAllowed,
    PTUMiddleLayerLicenseeRegulationStateDenied
};

@protocol PTUMiddleLayerLoginStateObserverProtocol <NSObject>

- (void)middleLayerController:(PTUMiddleLayerController *)middleLayerController didChangeLoginStateTo:(BOOL)loggedIn isForced:(BOOL)isForced;

@end

@protocol PTUMiddleLayerLoginStateObservableProtocol <NSObject>

- (void)addLoginStateObserver:(id<PTUMiddleLayerLoginStateObserverProtocol>)observer;
- (void)removeLoginStateObserver:(id<PTUMiddleLayerLoginStateObserverProtocol>)observer;

@end

@protocol PTUMiddleLayerBalanceObserverProtocol <NSObject>

- (void)middleLayerControllerDidUpdateBalance:(PTUMiddleLayerController *)middleLayerController;

@end

@protocol PTUMiddleLayerBalanceObservableProtocol <NSObject>

- (void)addBalanceObserver:(id <PTUMiddleLayerBalanceObserverProtocol>)observer;
- (void)removeBalanceObserver:(id <PTUMiddleLayerBalanceObserverProtocol>)observer;

@end

@protocol PTUMiddleLayerLicenseeRegulationDelegate <NSObject>

- (void)middleLayerController:(PTUMiddleLayerController *)middleLayerController didChangeRegulationState:(PTUMiddleLayerLicenseeRegulationState)licenseeRegulationState;

@end

@protocol PTUMiddleLayerGamesAutoRemovalStateObserver <NSObject>
@required

- (void)middle:(PTUMiddleLayerController *)middle didChangeGamesAutoRemovalStateTo:(BOOL)enabled;
- (void)middle:(PTUMiddleLayerController *)middle didChangeGamesAutoRemovalStaleTimeToWeeks:(NSUInteger)time triggeredByUser:(BOOL)triggeredByUser;
- (void)middle:(PTUMiddleLayerController *)middle didChangeGamesAutoRemovalStaleTimeConstraintsToMinWeeks:(NSUInteger)staleTimeMin maxWeeks:(NSUInteger)staleTimeMax;

@end


/// Protocol which describes functions which default notification observer has to implement in order to
/// show notification to the user.
/// In project, notification observer can be whether PlatfromUI module or Lobby module.
@protocol PTUMiddleLayerNotificationHandlerProtocol <NSObject>
@required
- (void)middle:(PTUMiddleLayerController *)middle didReceiveMessageDialogNotification:(PTURemoteMessageDialog *)message;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveMessageRegulatorNotification:(PTUCasinoAlertNotification *)message;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveRealityCheckMessage:(PTURemoteMessageRealityCheck *)message immidiate:(BOOL)immidiate;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveToasterWithEnhancedMessage:(PTUEnhancedMessage *)enhancedMessage;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveEnhancedMessageNotification:(PTUEnhancedMessage *)enhancedMessage;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveBonusDetailsMessage:(PTURemoteMessageBonusDetails *)message;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveMeesageClose:(NSString *)messageIdentifier;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveMeesageLogin:(PTURemoteMessageLogin *)messageLogin;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveMeesageAlert:(PTURemoteMessageAlert *)messageAlert;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveMeesageDialogMessage:(PTURemoteMessageDialogMessage *)messageDialogMessage;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveSessionTimeLimitMessage:(PTUCasinoErrorResponse *)response message:(NSString *)message;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveCooldownLimitMessage:(PTUCasinoErrorResponse *)response message:(NSString *)message;
- (void)middle:(PTUMiddleLayerController *)middle didReceiveCasinoErrorResponseSubtypeBringMoneyOverSpend:(PTUCasinoErrorResponse *)response message:(NSString *)message;

@end


@interface PTUMiddleLayerController : NSObject
<
PTUGamesSettingsDelegate,
PTUMiddleLayerLoginStateObservableProtocol,
PTUMiddleLayerBalanceObservableProtocol,
PTUSDKKitEventsProtocol,
PTUSDKNetworkCommunicationProtocol
>

/// Notification handlers it's objects which are responsible for handle and show alert to the user.
/// In project this handlers can be PlatfromUI and Lobby.
@property (strong, nonatomic, readonly) NSHashTable<NSObject<PTUMiddleLayerNotificationHandlerProtocol> *> *notificationHandlers;
- (void)addNotificationHandler:(id <PTUMiddleLayerNotificationHandlerProtocol>)handler;
- (void)removeNotificationHandler:(id <PTUMiddleLayerNotificationHandlerProtocol>)handler;

/// ⚠️ lobbyController it's Real sdk.
@property (weak,   nonatomic, readonly) id<PTULobbyController> lobbyController;
@property (weak, nonatomic) id<PTUMiddleLayerLicenseeRegulationDelegate> licenseeRegulationDelegate;
@property (strong, nonatomic, readonly) PTUGamesController *gamesController;
@property (strong, nonatomic, readonly) PTUURLManager *urlManager;
@property (strong, nonatomic, readonly) PTUDownloadManager *downloadManager;
@property (strong, nonatomic) PTUCoreNetworkController *coreNetworkController;
@property (strong, nonatomic, readonly) PTULobbyRouting *mainLobbyRouting;
@property (strong, nonatomic, readonly) PTUUserInfo *userInfo;
@property (strong, nonatomic, readonly) NSArray *quickActions;
@property (weak,   nonatomic, readonly) NSArray *layouts;
@property (assign, nonatomic, readonly) BOOL networkIsReachable;
@property (assign, nonatomic, readonly) PTUNetworkReachabilityState networkReachabilityState;
@property (strong, nonatomic, readonly) PTURegulationManager *regulationManager;
@property (strong, nonatomic, readonly) PTUFeaturesManager *featuresManager;
@property (strong, nonatomic, readonly) PTUBrokenGamesManager *brokenGamesManager;
@property (strong, nonatomic, readonly) PTUReachabilityManager *reachabilityManager;
@property (strong, nonatomic, readonly) PTUToasterController *toasterController __deprecated_msg("Use middle `toasterObservers` property to inform about toaster actions.");;
@property (strong, nonatomic, readonly) PTUSDKKit *SDKKit;
@property (strong, nonatomic, readonly) PTEnvironmentSettings *environmentSettings;
@property (strong, nonatomic, readonly) PTUConfigsController *configsController;
@property (strong, nonatomic, readonly) PTULanguageController *languageController;
@property (strong, nonatomic, readonly) PTUNetlossController *netlossController;
@property (strong, nonatomic, readonly) PTUCooldownController *cooldownController;
@property (strong, nonatomic, readonly) PTUExternalConfigsManager *externalConfigsManager;
@property (strong, nonatomic, readonly) PTURemoteMessageQueue *remoteMessageQueue;
@property (assign, nonatomic, readonly) PTSDKRegulation regulation;

@property (strong, nonatomic, readonly) PTUDeviceInfo *deviceInfo;

@property (strong, nonatomic, readonly) PTUTimeController *timeController;
@property (strong, nonatomic, readonly) PTUSessionTimeController *sessionTimeController;

@property (assign, nonatomic, readonly) BOOL deviceSupportsMultigame;

@property (strong, nonatomic, readonly) PTUGames *games;

@property (assign, nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;

- (BOOL)isLoggedIn;

- (PTUURLBuilder *)urlBuilder;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)middleLayerControllerWithLobbyController:(id<PTULobbyController>)lobbyController
                                        mainLobbyRouting:(PTULobbyRouting *)mainLobbyRouting
                                     environmentSettings:(PTEnvironmentSettings *)environmentSettings
                                                language:(PTSDKLanguage)language
                                              regulation:(PTSDKRegulation)regulation
                          supportedInterfaceOrientations:(UIInterfaceOrientationMask)supportedInterfaceOrientations;

- (void)loadInitialConfigsOffline:(BOOL)offline
                  completionBlock:(PTUMiddleLayerControllerSuccessErrorCompletion)completion;

- (void)loadConfigsOffline:(BOOL)offline
                completion:(PTUMiddleLayerControllerSuccessErrorCompletion)completion;

- (void)loginCasinoWithUserName:(NSString *)userName password:(NSString *)password completion:(PTUMiddleLayerControllerLoginCompletion)completion;
- (void)loginCasinoWithUserName:(NSString *)userName token:(NSString *)token completion:(PTUMiddleLayerControllerLoginCompletion)completion;


- (PTUURLSessionManager *)urlSessionManager;
- (NSURL *)configsCacheDirectoryURL;

- (id<PTUCoreNetworkFlowProtocol>)executeForgotPasswordWithUserName:(NSString *)userName
                                                        dateOfBirth:(NSDate *)dateOfBirth
                                                              email:(NSString *)email
                                                         completion:(PTUMiddleLayerControllerSuccessErrorCompletion)completionBlock;

- (id<PTUCoreNetworkFlowProtocol>)executeForgotUsernameWithEmail:(NSString *)email
                                                     dateOfBirth:(NSDate *)dateOfBirth
                                                      completion:(PTUMiddleLayerControllerSuccessErrorCompletion)completionBlock;


- (id<PTUCoreNetworkFlowProtocol>)executeChangePasswordWithUserName:(NSString *)userName
                                                        oldPassword:(NSString *)oldPassword
                                                        newPassword:(NSString *)newPassword
                                                    completionBlock:(PTUMiddleLayerControllerSuccessErrorCompletion)completionBlock;

- (BOOL)shouldTryRelogin;
- (void)updateTokenForName:(NSString *)name completion:(PTUMiddleLayerControllerUpdateTokenCompletionBlock)completion;
- (void)updateCashierTokenWithCompletion:(PTUMiddleLayerControllerSuccessErrorCompletion)completion;
- (void)updateDynamicBalance;
- (void)updateNickname:(NSString *)nickname;

/// Update internal objects with new langugage.
/// @param language new one that must be applied to internal objects.
/// @Warning This function doesn't call objects reloading like load new translations, regulations, relaunch games. To do it call loadInitialConfigsOffline: completionBlock: after this function.
- (void)updateLanguage:(PTSDKLanguage)language;

- (void)loadConfigsWithURLs:(NSArray<NSURL *> *)urls
                    offline:(BOOL)offline
                 completion:(PTUMiddleLayerControllerConfigsLoadCompletionBlock)completion;
- (void)getAdvisorGamesForGame:(NSString *)game
                    completion:(PTUMiddleLayerControllerGameAdvisorCompletionBlock)completion;

- (void)userAcceptedBonus:(BOOL)accepted remoteMessageDialog:(PTURemoteMessageDialog *)remoteMessageDialog;
- (void)userAcceptedBonus:(BOOL)accepted remoteMessageDialogId:(NSString *)dialogId;

- (void)requestBonusDetailsForId:(NSString *)bonusId;
- (void)gameLimitationsForGame:(PTUGameController *)game
               commitLossLimit:(double)lossLimit
                  sessionLimit:(NSUInteger)sessionLimit
                noticeInterval:(NSUInteger)noticeInterval
                 selfExclusion:(NSUInteger)exclusion;
- (void)submitPlayerDialogSuccessRequestWithDialogId:(NSString *)dialogId
                                               input:(NSString *)input;
- (void)submitPlayerDialogFailureRequestWithDialogId:(NSString *)dialogId
                                 unsupportedGameCode:(NSString * _Nullable)gameCode;
- (void)logoutWithCompletion:(PTUMiddleLayerControllerLogoutCompletion _Nullable)completion;
- (void)logoutFromCasinoWithCompletion:(PTUMiddleLayerControllerLogoutCompletion _Nullable)completion;
- (void)disconnectNetwork;
- (void)cleanUpLegacyResourses;

- (NSArray *)callbackUrlActionDescriptions;
- (NSDictionary *)localNotificationsDescription;

// if launch is blocked or restricted returns error describing why
- (NSError *)getLaunchGamePoliciesForLaunchedGamePresentations:(NSArray<PTUGamePresentation *> *)launchedPresentations
                                        toLaunchGamesWithInfos:(NSArray<PTUGameInfo *> *)infos
                                                        inMode:(PTSDKGameMode)gameMode
                                                    fromSource:(PTUGamesControllerLaunchSource)launchSource
                                           multipleGamesPolicy:(out PTUGamesControllerMultipleGamesPolicy *)outMultipleGamesPolicy
                                                  enginePolicy:(out PTUGamesControllerEnginePolicy *)outEnginePolicy;

- (BOOL)multigameUIEnabledForLaunchedGamePresentations:(NSArray<PTUGamePresentation *> *)launchedGamePresentations;
- (BOOL)quickSwitchUIEnabledForLaunchedPresentations:(NSArray<PTUGamePresentation *> *)launchedGamePresentations;
- (BOOL)gameAdvisorUIEnabledForLaunchedPresentations:(NSArray<PTUGamePresentation *> *)launchedGamePresentations;
- (BOOL)closeConfirmationUIEnabledForLaunchedPresentations:(NSArray<PTUGamePresentation *> *)launchedGamePresentations;
- (BOOL)multigameEnabledForGameController:(PTUGameController *)gameController;

// should return error when returns blocking behaviour
- (NSError *)openGameBehaviourWithLaunchedGamePresentations:(NSArray<PTUGamePresentation *> *)launchedGamePresentations
                                       fromGameOfEngineType:(PTUGameEngineType)fromGameEngineType
                                              allowShowInfo:(BOOL)allowShowInfo
                                                  behaviour:(out PTULobbyControllerOpenGameBehaviour *)outBehaviour;

- (void)realityCheck:(PTURemoteMessageRealityCheck *)realityCheck accepted:(BOOL)accepted;

// debug info for core team
- (NSString *)ngmCoreBuildConfig;

- (void)clearCookiesWithCompletion:(PTUMiddleLayerControllerCompletion _Nullable)completion;

//--- Games Auto Removal
- (BOOL)gamesAutoRemovalState;
- (void)handleGamesAutoRemovalStateChange:(BOOL)enabled;

- (NSUInteger)gamesAutoRemovalStaleTimeWeeks;
- (NSUInteger)gamesAutoRemovalStaleTimeMinWeeks;
- (NSUInteger)gamesAutoRemovalStaleTimeMaxWeeks;
- (void)handleGamesAutoRemovalStaleTimeChange:(NSUInteger)timeWeeks triggeredByUser:(BOOL)triggedByUser;
- (void)handleGamesAutoRemovalStaleTimeChangeToDefault;

- (void)addGamesAutoRemovalObserver:(id<PTUMiddleLayerGamesAutoRemovalStateObserver>)observer;
- (void)removeGamesAutoRemovalObserver:(id<PTUMiddleLayerGamesAutoRemovalStateObserver>)observer;

- (NSArray<NSNumber/* <NSTimeInterval> */ *> *)recentLaunchTimeForGames:(NSArray<PTUGameInfo *> *)games;
- (void)updateGameRecentLaunchDate:(PTUGameInfo *)gameInfo;

- (void)addToRemoteMessageQueuePushNotification:(PTURemoteMessagePushNotification *)pushNotifMessage;

- (void)addRecentGameFromResource:(PTUResourceGame * const)gameResource;
- (PTUResourceGame * const _Nullable)gameResourceForGameID:(NSString * const _Nonnull)gameID;
- (NSArray<PTUGameInfo *> *)gamesForEngineType:(PTUGameEngineType)engineType;
- (NSArray<PTUResourceGame *> *)knownInstalledGames;

- (NSString *)placeholderImagePath;

+ (UIUserNotificationType)notificationTypesWanted;
+ (BOOL)remoteNotificationsWanted;
+ (BOOL)localNotificationsWanted;

- (void)setSoundState:(BOOL)state;

///
- (void)responseSessionTimeLimitMessage:(nonnull PTUCasinoErrorResponse *)response extensionPeriod:(NSUInteger)extensionPeriod;

///
- (void)responseSessionTimeLimitMessageWithLogout:(nonnull PTUCasinoErrorResponse *)response;

@end

NS_ASSUME_NONNULL_END
