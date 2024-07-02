//
//  PTUSDKEventType.h
//  SDKKit
//
//  Created by Daniil Mazepin on 4/5/17.
//  Copyright © 2017 Playtech. All rights reserved.
//


typedef NS_ENUM(NSUInteger, PTUSDKKitEventType)
{
    PTUSDKKitEventTypeAppDidLaunch = 1,
    PTUSDKKitEventTypeAppLaunchedByLocalEvent,
    PTUSDKKitEventTypeAppDidFullyLoaded,
    PTUSDKKitEventTypeAppDidEnterBackground,
    PTUSDKKitEventTypeGameSearch,
    PTUSDKKitEventTypeLogout,
    PTUSDKKitEventTypeOpenScreen,
    PTUSDKKitEventTypeOpenHome,
    PTUSDKKitEventTypeOpenLogin,
    PTUSDKKitEventTypeOpenRegistration,
    PTUSDKKitEventTypeOpenFavourites,
    PTUSDKKitEventTypeOpenMore,
    PTUSDKKitEventTypeOpenSettings,
    PTUSDKKitEventTypeOpenGameManagement,
    PTUSDKKitEventTypeOpenAbout,
    PTUSDKKitEventTypeOpenGameInfo,
    PTUSDKKitEventTypeOpenGameSearch,
    PTUSDKKitEventTypeOpenPromotions,
    PTUSDKKitEventTypeOpenMoreFrom,
    PTUSDKKitEventTypeOpenAppLoading,
    PTUSDKKitEventTypeOpenWebPage,
    PTUSDKKitEventTypeOpenGameCategoryGrid,
    PTUSDKKitEventTypeUpdatedDeviceIdentifiers,
    PTUSDKKitEventTypeGetPlayerInfo,
    PTUSDKKitEventTypeStartGameQuickSwitchLeft,
    PTUSDKKitEventTypeStartGameQuickSwitchRight,
    PTUSDKKitEventTypeStartGameBonus,
    PTUSDKKitEventTypeStartGamePush,
    PTUSDKKitEventTypeStartGamePromotion,
    PTUSDKKitEventTypeStartGame,
    PTUSDKKitEventTypeWebPageVisitInGame,
    PTUSDKKitEventTypeNGMGameEvent,
    PTUSDKKitEventTypeStartDemoMode,
    PTUSDKKitEventTypeStartRealMode,
    PTUSDKKitEventTypeRegistrationLaunched,
    PTUSDKKitEventTypeRegistrationSuccessful,
    PTUSDKKitEventTypeLoginSuccess,
    PTUSDKKitEventTypeFirstLoginSuccess,
    PTUSDKKitEventTypeCustomerIDReceived,
    PTUSDKKitEventTypeOpenDeposit,
    PTUSDKKitEventTypeOpenAccount,
    PTUSDKKitEventTypeOpenWithdraw,
    PTUSDKKitEventTypeOpenCashierHistory,
    PTUSDKKitEventTypeOnApplicationUpdate,
    PTUSDKKitEventTypeLocationUpdate,
    PTUSDKKitEventTypeDepositSuccessful,
    PTUSDKKitEventTypeFirstDepositSuccessful,
    PTUSDKKitEventTypeTouchIDLogin,
    PTUSDKKitEventTypeTouchIDApproved,
    PTUSDKKitEventTypeFacebookLogin,
    PTUSDKKitEventTypeFacebookApproved,
    PTUSDKKitEventTypeBetPlaced,
    PTUSDKKitEventTypeBalanceUpdate,
    PTUSDKKitEventTypeLoginFailed,
    PTUSDKKitEventTypeAppOpenURL,
    PTUSDKKitEventTypeAppBecameActive,
    PTUSDKKitEventTypeAppResignActive,
    PTUSDKKitEventTypeAppWillEnterForeground,
    PTUSDKKitEventTypeAppWillTerminate,
    PTUSDKKitEventTypeAppDidRegisterUserNotificationSettings,
    PTUSDKKitEventTypeAppDidFailToRegisterRemoteNotification,
    PTUSDKKitEventTypeAppDidReceiveLocalNotification,
    PTUSDKKitEventTypeAppDidReceiveRemoteNotification,
    PTUSDKKitEventTypeHandleActionForRemoteNotification,
    PTUSDKKitEventTypeHandleActionForLocalNotification,
    PTUSDKKitEventTypeOnOpenFromPushNotification,
    PTUSDKKitEventTypeCrashSimulation,
    PTUSDKKitEventTypeErrorEncountered,
    PTUSDKKitEventTypeCategoryOpen,
    PTUSDKKitEventTypeAddToFavorites,
    PTUSDKKitEventTypeRemoveFromFavorites,
    PTUSDKKitEventTypeOpenForgotPassword,
    PTUSDKKitEventTypeOpenGameAdvisor,
    PTUSDKKitEventTypeCloseGameAdvisor,
    PTUSDKKitEventTypeDontDisplayGameAdvisor,
    PTUSDKKitEventTypeGameMenuItemClick,
    PTUSDKKitEventTypeGameLoaded,
    PTUSDKKitEventTypeGameClose,
    PTUSDKKitEventTypeGameMenuSound,
    PTUSDKKitEventTypeGameStartFSB,
    PTUSDKKitEventTypeBannerShowed,
    PTUSDKKitEventTypeBannerOpenGame,
    PTUSDKKitEventTypeOpenGameMenu,
    PTUSDKKitEventTypeMenuItemClick,
    PTUSDKKitEventTypePasConnectionFailure,
    PTUSDKKitEventTypePasConnectionFailureAllDomains,
    PTUSDKKitEventTypePasRequestFailed,
    PTUSDKKitEventTypePasRequestSuccess,
    PTUSDKKitEventTypeOgwConnectionSuccess,
    PTUSDKKitEventTypeOgwConnectionFailure,
    PTUSDKKitEventTypeOgwConnectionFailureAllDomains,
    PTUSDKKitEventTypeOgwSystemLoginSuccess,
    PTUSDKKitEventTypeLobbyBannerDisplaySuccess,
    PTUSDKKitEventTypeLobbyBannerDisplayFailure,
    PTUSDKKitEventTypeGameLaunchSuccess,
    PTUSDKKitEventTypePlayerInfoAdvertiser,
    PTUSDKKitEventTypePlayerInfoBannerId,
    PTUSDKKitEventTypePlayerInfoClientType,
    PTUSDKKitEventTypePlayerInfoCurrency,
    PTUSDKKitEventTypePlayerInfoFrozen,
    PTUSDKKitEventTypePlayerInfoIsInternalPlayer,
    PTUSDKKitEventTypePlayerInfoLanguage,
    PTUSDKKitEventTypePlayerInfoMarkEmailVerified,
    PTUSDKKitEventTypePlayerInfoNoBonus,
    PTUSDKKitEventTypePlayerInfoSex,
    PTUSDKKitEventTypePlayerInfoSignupDate,
    PTUSDKKitEventTypePlayerInfoSuspended,
    PTUSDKKitEventTypePlayerInfoTcVersion,
    PTUSDKKitEventTypePlayerInfoVipLevel,
    PTUSDKKitEventTypePlayerInfoWantMail,
    PTUSDKKitEventTypePlayerInfoСustom01,
    PTUSDKKitEventTypePlayerInfoСustom02,
    PTUSDKKitEventTypePlayerInfoСustom03,
    PTUSDKKitEventTypePlayerInfoСustom04,
    PTUSDKKitEventTypePlayerInfoСustom05,
    PTUSDKKitEventTypePlayerInfoСustom06,
    PTUSDKKitEventTypePlayerInfoСustom07,
    PTUSDKKitEventTypePlayerInfoСustom08
};

static const struct
{
    __unsafe_unretained NSString *sdk;
    __unsafe_unretained NSString *extraParams;
    __unsafe_unretained NSString *userNameInfo;
    __unsafe_unretained NSString *gameIDInfo;
    __unsafe_unretained NSString *versionInfo;
    __unsafe_unretained NSString *amountInfo;
    __unsafe_unretained NSString *amountCentsInfo;
    __unsafe_unretained NSString *currencyInfo;
    __unsafe_unretained NSString *deviceToken;
    __unsafe_unretained NSString *deviceTokenData;
    __unsafe_unretained NSString *deviceID;
    __unsafe_unretained NSString *longitude;
    __unsafe_unretained NSString *latitude;
    __unsafe_unretained NSString *gameNameInfo;
    __unsafe_unretained NSString *categoryNameInfo;
    __unsafe_unretained NSString *balanceInfo;
    __unsafe_unretained NSString *promoInfo;
    __unsafe_unretained NSString *url;
    __unsafe_unretained NSString *settings;
    __unsafe_unretained NSString *searchString;
    __unsafe_unretained NSString *gameType;
    __unsafe_unretained NSString *promotionName;
    __unsafe_unretained NSString *category;
    __unsafe_unretained NSString *action;
    __unsafe_unretained NSString *ngmLabel;
    __unsafe_unretained NSString *ngmValue;
    __unsafe_unretained NSString *customerID;
    __unsafe_unretained NSString *webPageTitle;
    __unsafe_unretained NSString *realOrFunClient;
    __unsafe_unretained NSString *realClient;
    __unsafe_unretained NSString *funClient;
    __unsafe_unretained NSString *gameCategory;
    __unsafe_unretained NSString *menuItemInfo;
    __unsafe_unretained NSString *menuLeftRightInfo;
    __unsafe_unretained NSString *valueOn;
    __unsafe_unretained NSString *valueOff;
    __unsafe_unretained NSString *gameMenuSoundInfo;
    __unsafe_unretained NSString *timeStampInfo;
    __unsafe_unretained NSString *timeStampPlaceholder;
    __unsafe_unretained NSString *emailSHA256LowerCase;
    __unsafe_unretained NSString *gameGroup;
    __unsafe_unretained NSString *localNotification;
    __unsafe_unretained NSString *localNotificationInfo;
    __unsafe_unretained NSString *failRegisterError;
    __unsafe_unretained NSString *originId;
    __unsafe_unretained NSString *playMode;
    __unsafe_unretained NSString *flowId;
    __unsafe_unretained NSString *details;
    __unsafe_unretained NSString *targetHost;
    __unsafe_unretained NSString *targetIp;
    __unsafe_unretained NSString *serial;
    __unsafe_unretained NSString *env;
    __unsafe_unretained NSString *clientVersion;
    __unsafe_unretained NSString *real;
    __unsafe_unretained NSString *anonymous;
    __unsafe_unretained NSString *time;
    __unsafe_unretained NSString *timeCompleted;
    __unsafe_unretained NSString *timeElapsed;
    __unsafe_unretained NSString *clientSessionId;
}
PTUSDKKitKeys =
{
    @"SDK",
    @"SDKExtraParams",
    @"username",
    @"gameId",
    @"version",
    @"amount",
    @"amount_cents",
    @"currency",
    @"deviceToken",
    @"deviceTokenData",
    @"deviceIdentifier",
    @"longitude",
    @"latitude",
    @"game_name",
    @"category_name",
    @"balance",
    @"promo",
    @"url",
    @"settings",
    @"search_string",
    @"game_type",
    @"promotion_name",
    @"category",
    @"action",
    @"ngm_label",
    @"ngm_value",
    @"customerID",
    @"title",
    @"realOrFunClient",
    @"Real Client",
    @"Fun Client",
    @"gameCategory",
    @"menuItemName",
    @"leftRight",
    @"1",
    @"0",
    @"soundOn",
    @"event_date_time",
    @"event_date",
    @"email_sha256",
    @"gameGroup",
    @"local_notification",
    @"local_notification_info",
    @"fail_register_error",
    @"originId",
    @"playMode",
    @"flowId",
    @"details",
    @"targetHost",
    @"targetIp",
    @"serial",
    @"env",
    @"clientVersion",
    @"real",
    @"anonymous",
    @"time",
    @"timeCompleted",
    @"timeElapsed",
    @"clientSessionId",
};
