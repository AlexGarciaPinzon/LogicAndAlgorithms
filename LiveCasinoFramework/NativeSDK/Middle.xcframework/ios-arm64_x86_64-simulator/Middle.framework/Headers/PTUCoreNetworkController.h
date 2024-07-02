//
//  PTUCoreNetworkController.h
//  Middle
//
//  Created by Oleksandr Khylyk on 10/4/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUNetworkManager.h"
#import "PTUGameEngine.h"
#import "PTUCoreNetworkFlowProtocol.h"
#import "PTUCoreNetworkFlow.h"
#import "PTUCoreNetworkOperationDelegate.h"

@class PTUURLSessionManager;
@class PTULicenseeRegulation;
@class PTUDeviceInfo;
@class PTUCoreNetworkController;
@class ResponseMessage;
@class PTULoginResponse;
@class PTUPASManager;
@class PTUCasinoErrorResponse;
@class PTUReachabilityManager;
@class PTEnvironmentSettings;
@class PTULanguageController;

@protocol PTUSDKNetworkCommunicationProtocol;

typedef NS_ENUM(NSInteger, PTUServerMessageType)
{
    PTUServerMessageLoginResponse = 10002,
    PTUServerMessageLoginErrorResponse = 10003,
    PTUServerMessageUserBalanceNotification = 10006,
    PTUServerMessageLogoutNotification = 10008,
    PTUServerMessageGameServerDisconnectNotification = 10009,
    PTUServerMessageUserinfoNicknameResponse = 10022,
    PTUServerMessageGoldenChipsBalanceResponse = 10023,
    PTUServerMessageBonusBalancesResponse = 10025,
    PTUServerMessageServerTimeResponse = 23513,
    PTUServerMessageGetTempTokenResponse = 30002,
    PTUServerMessageGetTempTokenErrorResponse = 30003,
    PTUServerMessageUMSLoginResponse = 31002,
    PTServerMessageUMSLoginError = 31009,
    PTUServerMessageGetUrlsResponse = 31032,
    PTUServerMessageGetPlayerInfoResponse = 31083,
    PTUServerMessageGetPlayerFavoritesResponse = 31104,
    PTUServerMessageGetPlayerFavoritesErrorResponse = 31105,
    PTUServerMessageChangePlayerFavoritesResponse = 31107,
    PTUServerMessageChangePlayerFavoritesErrorResponse = 31108,
    PTUServerMessageWindowSessionStartResponse = 31128,
    PTUServerMessageWindowSessionStartErrorResponse = 31129,
    PTUServerMessageWindowSessionEndResponse = 31131,
    PTUServerMessageWindowSessionEndErrorResponse = 31132,
    PTUServerMessageWindowSessionBalanceChangeNotification = 32010,
    PTUServerMessageUMSLogoutNotificationNotification = 33004,
    PTUServerMessageGameLimitsResponse = 40025,
    PTUServerMessageServerGameLoginResponse = 40026,
    PTUServerMessageBrokenGamesListResponse = 40037,
    PTUServerMessageJackpotUpdatesNotification = 40042,
    PTUServerMessageRegulatorAlertNotification = 40073,
    PTUServerMessageRegulatorLoginResponse = 40079,
    PTUServerMessageCasinoDynamicBalanceChangeNotification = 40083,
    PTUServerMessageGameDynamicBalanceChangeNotification = 40085,
    PTUServerMessageTableBalanceInfoNotification = 40080,
    PTUServerMessageGameModeResponse = 40381,
    PTUServerMessageServerStartFSBResponse = 40093,
    PTUServerMessageServerFSBCoinsizeResponse = 40096,
    PTUServerMessageCasinoErrorNotification = 40744,
    PTUServerMessageGetPlayerAdvisorResponse = 40906,
    PTUServerMessageGetPlayerAdvisorError = 40907,
    PTUServerMessageCasinoGtsCommonOpenGameError = 46092,
    PTUServerMessageRealityCheckNotification = 47597,
    PTUServerMessageRealityCheckError = 47598,
    PTUServerMessageRealityCheckGameCloseNotification = 47599,
    PTUServerMessageGameCloseNotification = 49262,
    PTUServerMessageWaitingMessagesResponse = 48301,
    PTUServerMessageServerFSBResponse = 48466,
    PTUServerMessageGameLoginErrorResponse = 40027,
    PTUServerMessageGameModeListNotification = 40382,
    PTUServerMessageAcceptDialogNotification = 40033,
    PTUServerMessageDialogNotification = 47591,
    PTUServerMessageBonusDetailsNotification = 40448,
    PTUServerMessageCooldownTimerNotification = 48576,
    PTUServerMessageNicknameUpdateError = 48577,
    PTUServerMessageToasterNotification = 47868,
    PTUServerMessageEnhancedDialogNotification = 47867,
    PTUServerMessageDialogClosedNotification = 47594,
};

typedef void(^PTUCoreNetworkManagerTermsCallBackBlock)(BOOL accepted);
typedef void(^PTUCoreNetworkManagerTermsOfUseBlock)(NSURL *url, PTUCoreNetworkManagerTermsCallBackBlock);
typedef void(^PTUCoreNetworkManagerChangePasswordCallBackBlock)(NSString *oldPassword, NSString *newPassword);
typedef void(^PTUCoreNetworkManagerChangePasswordBlock)(NSError *error, PTUCoreNetworkManagerChangePasswordCallBackBlock);
typedef void(^PTUCoreNetworkManagerLoginCompletionBlock)(PTULoginResponse *loginResponse, NSDictionary *balances, NSString *umsToken, NSString *pasToken,  NSError *error);
typedef void(^PTUCoreNetworkGetGamesListCompletion)(NSArray <NSString *> *games, NSError *error);
typedef void(^PTUCoreNetworkSuccessErrorCompletion)(BOOL success, NSError *error);
typedef void(^PTUCoreNetworkResponseSuccessErrorCompletion)(id responseObject, BOOL success, NSError *error);

@protocol PTUCoreNetworkControllerDelegate <NSObject>

- (void)coreNetworkControllerSocketDidConnect:(PTUCoreNetworkController *)controller;
- (void)coreNetworkControllerSocketDidDisconnect:(PTUCoreNetworkController *)controller;

@end

@protocol PTUCoreNetworkControllerJSONListenerDelegate <NSObject>

- (void)coreNetworkController:(PTUCoreNetworkController *)controller didReceiveJSON:(NSString *)string;

@end

@protocol PTUServerMessageObserverProtocol <NSObject>

@required

- (void)coreNetworkController:(PTUCoreNetworkController *)controller didReceiveResponse:(PTUCommonResponse *)response;

@end

@protocol PTUServerMessageObservableProtocol <NSObject>

- (void)addServerMessageObserver:(id<PTUServerMessageObserverProtocol>)observer forMessageType:(PTUServerMessageType)messageType;
- (void)removeServerMessageObserver:(id<PTUServerMessageObserverProtocol>)observer forMessageType:(PTUServerMessageType)messageType;

@end

@interface PTUCoreNetworkController : NSObject <PTUServerMessageObservableProtocol, PTUCoreNetworkOperationDelegate>

@property (weak, nonatomic) id<PTUCoreNetworkControllerJSONListenerDelegate> JSONListenerDelegate;

@property (weak, nonatomic) id<PTUCoreNetworkControllerDelegate> delegate;

- (PTUSocket *)mainSocket;
- (PTUPASManager *)pasManager;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithURLSessionManager:(PTUURLSessionManager *)urlSessionManager
                      environmentSettings:(PTEnvironmentSettings *)environmentSettings
                               deviceInfo:(PTUDeviceInfo *)deviceInfo
                      reachabilityManager:(PTUReachabilityManager *)reachabilityManager
                     sdkKitEventsAnalyzer:(id<PTUSDKKitEventsProtocol>)sdkKitEventsAnalyzer
                  sdkNetworkCommunication:(id<PTUSDKNetworkCommunicationProtocol>)sdkNetworkCommunication NS_DESIGNATED_INITIALIZER;

- (void)setWindowSessionID:(NSString *)windowSessionID;

- (void)updateLicenseeRegulation:(PTULicenseeRegulation *)licenseeRegulation;
- (void)updateLanguageController:(PTULanguageController *)languageController;

- (void)loadURLsByKeys:(NSArray<NSString *> *)keys;

- (void)getBrokenGames;
- (void)requestWaitingMessages;
- (void)getAdvisorGamesForGame:(NSString *)game;

- (void)userAcceptedBonus:(BOOL)accepted dialog:(NSString *)dialog;
- (void)userAcceptedRealityCheck:(BOOL)accepted dialog:(NSString *)dialog;
- (void)requestBonusDetailsForId:(NSString *)bonusId;

- (void)getFavoriteGamesWithCompletion:(PTUCoreNetworkGetGamesListCompletion)completion;
- (void)addGameToFavorites:(NSString *)game;
- (void)addGamesToFavorites:(NSArray <NSString *> *)games completion:(PTUCoreNetworkSuccessErrorCompletion)completion;
- (void)removeGameFromFavorites:(NSString *)game;
- (void)removeGamesFromFavorites:(NSArray <NSString *> *)games completion:(PTUCoreNetworkSuccessErrorCompletion)completion;
- (void)getBonusesRequestForGameWithID:(NSString *)gameID gameWindowID:(NSString *)gameWindowID;
- (void)getBonusesRequestForGameWithID:(NSString *)gameID gameWindowID:(NSString *)gameWindowID withCompletionHandler:(void(^)(PTUFreeSpinBonusResponse *response))completionHandler;
- (void)getBonusBalancesForGameSessionID:(NSString *)gameSessionID;
- (void)getPlayerInfoRequestWithCompletionBlock:(PTUCoreNetworkResponseSuccessErrorCompletion)completionBlock;
- (void)subscribeOnJackpotUpdatesWithWindowSessionId:(NSString *)windowSessionId;
- (void)syncServerTime;

- (void)responseSessionTimeLimitMessage:(PTUCasinoErrorResponse *)message withExtension:(NSUInteger)extensionPeriod;
- (void)responseSessionTimeLimitMessageWithLogout:(PTUCasinoErrorResponse *)message;

// IT Regulations
- (void)itSetTableMoney:(double)money bonuses:(double)bonuses forGameWindowID:(NSString *)gameWindowID;
- (void)updateNickname:(NSString *)nickname;

// ES Regulations
- (void)esSetTableLimit:(double)money duration:(NSUInteger)minutes forGameWindowID:(NSString *)gameWindowID;
- (void)esSetSelfExclusionDuration:(NSUInteger)minutes;

// Toaster
- (void)submitPlayerDialogSuccessRequestWithDialogId:(NSString *)dialogId
                                               input:(NSString *)input;

- (void)submitPlayerDialogFailureRequestWithDialogId:(NSString *)dialogId
                                 unsupportedGameCode:(NSString *)gameCode;

// Enhanced player dialog
// TODO: merge with Toaster callbacks

- (void)submitEnhancedPlayerMessageSuccessRequestWithDialogId:(NSString *)dialogId
                                                        input:(NSString *)input;
- (void)submitEnhancedPlayerMessageFailureRequestWithDialogId:(NSString *)dialogId
                                         unsupportedGameCodes:(NSArray<NSString *> *)unsupportedGameCodes
                                      unsupportedCashierPages:(NSArray<NSString *> *)unsupportedCashierPages;

- (void)setGameBalanceMode:(PTUGameBalanceMode)gameBalanceMode forGameWindowID:(NSString *)gameWindowID;
- (void)freeSpinBonusCoinsizeRequestForGameWindowID:(NSString *)gameWindowID;

- (BOOL)isConnected;
- (void)logoutWithUsername:(NSString *)username completion:(PTUCoreNetworkSuccessErrorCompletion)completion;
- (void)logoutFromCasinoWithCompletion:(PTUCoreNetworkSuccessErrorCompletion)completion;
- (void)disconnectNetwork;

- (void)executeFlow:(PTUCoreNetworkFlow *)flow;

- (void)killGameWindowSessionWithId:(NSString *)gameWindowSessionId withGameId:(NSString *)gameId;

@end
