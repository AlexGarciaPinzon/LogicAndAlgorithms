//
//  Middle.h
//  Middle
//
//  Created by Konstantyn Vadyasov on 9/19/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Middle.
FOUNDATION_EXPORT double MiddleVersionNumber;

//! Project version string for Middle.
FOUNDATION_EXPORT const unsigned char MiddleVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Middle/PublicHeader.h>

#import <Middle/Globals.h>
#import <Middle/PTUMiddleLayerController.h>
#import <Middle/PTUMiddleLayerController+LoginFlow.h>
#import <Middle/PTUGamesController.h>
#import <Middle/PTUGameController.h>
#import <Middle/PTUGameController+Inherit.h>
#import <Middle/PTUGameEngine.h>
#import <Middle/PTULobbyController.h>
#import <Middle/PTUCoreNetworkController.h>
#import <Middle/PTUGamesDownloadManager.h>
#import <Middle/PTUZipArchiveController.h>
#import <Middle/PTUDownloadManager.h>
#import <Middle/PTUDownloadDataResponse.h>
#import <Middle/PTUCommonUserSettings.h>
#import <Middle/PTUURLManager.h>
#import <Middle/PTUTokensInfo.h>
#import <Middle/PTUGameInfo.h>
#import <Middle/PTUGameInfoLive.h>
#import <Middle/PTUGameContents.h>
#import <Middle/PTUGameTechnology.h>
#import <Middle/PTUGameTechnologyURLPlaceholder.h>
#import <Middle/PTUGameIntegrationInterfaceConfig.h>
#import <Middle/PTUCategoryInfo.h>
#import <Middle/PTUExternalConfigsManager.h>
#import <Middle/PTURegulationManager.h>
#import <Middle/PTUFeaturesManager.h>
#import <Middle/PTUBrokenGamesManager.h>
#import <Middle/PTULicenseeRegulation.h>
#import <Middle/PTUCountryRegulationController.h>
#import <Middle/PTULobbyRouting.h>
#import <Middle/NSError+PTUExtension.h>
#import <Middle/NSError+PTUGameErrors.h>

#import <Middle/PTUBalanceResponse.h>
#import <Middle/PTUBonusBalancesResponse.h>
#import <Middle/PTUAcceptDialogResponse.h>
#import <Middle/PTUBrokenGamesResponse.h>
#import <Middle/PTUCasinoAlertNotification.h>
#import <Middle/PTUCasinoErrorResponse.h>
#import <Middle/PTUCasinoErrorResponseSessionTimeLimit.h>
#import <Middle/PTUDynamicBalanceResponse.h>
#import <Middle/PTUFavoritesResponse.h>
#import <Middle/PTUFreeSpinBonusCoinsizeResponse.h>
#import <Middle/PTUFreeSpinBonusResponse.h>
#import <Middle/PTUGameAdvisorResponse.h>
#import <Middle/PTUGameLimitsResponse.h>
#import <Middle/PTUITRegulationResponse.h>
#import <Middle/PTUJackpotsResponse.h>
#import <Middle/PTULoginErrorResponse.h>
#import <Middle/PTULoginResponse.h>
#import <Middle/PTULogoutResponse.h>
#import <Middle/PTUPingResponse.h>
#import <Middle/PTURealityCheckResponse.h>
#import <Middle/PTUDialogClosedNotification.h>
#import <Middle/PTUServerTimeResponse.h>
#import <Middle/PTUStartWindowSessionResponse.h>
#import <Middle/PTUTempTokenResponse.h>
#import <Middle/PTUUMSLoginResponse.h>
#import <Middle/PTUURLsResponse.h>
#import <Middle/PTUWaitingMessagesResponse.h>
#import <Middle/PTUTableBalanceInfoResponse.h>
#import <Middle/PTUITGameModeResponse.h>
#import <Middle/PTUUserinfoNicknameResponse.h>
#import <Middle/PTUGameLoginErrorResponse.h>

#import <Middle/PTUReachabilityManager.h>
#import <Middle/Constants.h>
#import <Middle/PTUITCountryRegulationController.h>
#import <Middle/PTUToasterController.h>
#import <Middle/PTUConfigsController.h>
#import <Middle/PTULanguageController.h>
#import <Middle/PTUCurrencyFormatInfo.h>
#import <Middle/PTUBaseURLCallbackManager.h>
#import <Middle/PTUAlertsURLCallbackManager.h>
#import <Middle/PTUOpenBoxURLCallbackManager.h>
#import <Middle/PTULocalNotificationsManager.h>
#import <Middle/PTUWebCallbackManager.h>
#import <Middle/PTUURLSessionManager.h>
#import <Middle/PTUCoreNetworkFlow.h>
#import <Middle/PTUGameEngineCanLaunchResult.h>
#import <Middle/PTUGameLaunchRecipe.h>
#import <Middle/PTUURLBuilder.h>
#import <Middle/PTUGameAdvisorContentParser.h>
#import <Middle/PTUDeviceInfo.h>
#import <Middle/PTUBringMoneyData.h>
#import <Middle/PTUNGMAutoplayLimitsInfo.h>
#import <Middle/PTURemoteMessageQueue.h>
#import <Middle/PTURemoteMessage.h>
#import <Middle/PTURemoteMessageLogin.h>
#import <Middle/PTURemoteMessagePushNotification.h>
#import <Middle/PTURemoteMessageAlert.h>
#import <Middle/PTURemoteMessageDialog.h>
#import <Middle/PTURemoteMessageDialogMessage.h>
#import <Middle/PTURemoteMessageRealityCheck.h>
#import <Middle/PTURemoteMessageBonusDetails.h>
#import <Middle/PTUExpandedBalanceEntries.h>
#import <Middle/PTUExpandedBalanceEntry.h>

#import <Middle/PTULicenseeBrokenGamesInfo.h>
#import <Middle/PTUExtraURLPlaceholder.h>
#import <Middle/PTUHashFactory.h>
#import <Middle/PTUGetPlayerInfoResponse.h>
#import <Middle/PTUSessionTimeController.h>
#import <Middle/PTUTimeController.h>
#import <Middle/PTUNetlossController.h>
#import <Middle/PTUCooldownController.h>

#import <Middle/PTUGamePresentation.h>
#import <Middle/PTUAutoplayConfirmationSequenceController.h>

#import <Middle/PTUCurrencyInfo.h>

#import <Middle/MSWeakTimer.h>

#import <Middle/PTUEnhancedMessage.h>
#import <Middle/PTUEnhancedMessageButton.h>
#import <Middle/PTUEnhancedMessageButtonAction.h>
#import <Middle/PTUEnhancedMessageButtonActionHandler.h>

#import <Middle/PTUURLCallbackAction.h>

#import <Middle/PTUPromotionInfo.h>
#import <Middle/PTUPromotionBannerInfo.h>
#import <Middle/PTUPromotionActionData.h>

#import <Middle/PTUGames.h>

#import <Middle/PTUResourceGame.h>
#import <Middle/PTUResourceGames.h>


#import <Middle/PTUFilterObjectGameAvailable.h>
#import <Middle/PTUFilterArrayGameAvailable.h>
#import <Middle/PTUFilterArrayGameIDsUnordered.h>
#import <Middle/PTUFilterArrayGameNotIDsUnordered.h>
#import <Middle/PTUFilterArrayGameIDsOrdered.h>
#import <Middle/PTUFilterArrayGameIDsOrderedCount.h>

#import <Middle/PTUGameEngineGameAndView.h>

#import <Middle/PTUContentFilter.h>
#import <Middle/PTULicenseeRegulationBuilder.h>
#import <Middle/PTURemoteObjectBuilderProtocol.h>

#import <Middle/PTUDeeplinkingURLCallbackManager.h>
#import <Middle/PTEnvironmentSettings.h>
#import <Middle/PTUPASManager.h>
#import <Middle/PTODRInfo.h>
