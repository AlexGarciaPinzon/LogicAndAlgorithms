//
//  PTEnums.h
//  NativeSDK
//
//  Created by Macbook Pro on 7/16/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

@import Tools.PTSDKExternalEnums;

#ifndef PTEnums_h
#define PTEnums_h

/// represents possible game download states in sdk
typedef NS_ENUM(NSInteger, PTDownloadState) {
    PTDownloadStateAvailable,
    PTDownloadStateDownloading,
    PTDownloadStatePaused,
    PTDownloadStateReady
};

/// represents possible errors in sdk
typedef NS_ENUM(NSInteger, PTErrorType) {
    PTErrorTypeNotEnoughSpace = 1,
    PTErrorTypeNoConnection,
    PTErrorTypeCasinoError,
    PTErrorTypeDefaultError,
    PTErrorTypeWrongSDKKey,
    PTErrorTypeSDKNotInitializedProperly,
    PTErrorTypeSDKAlreadyInitialized,
    PTErrorType_ParameterMissing_Environment,
    PTErrorType_ParameterMissing_DemoCurrency,
    PTErrorType_ParameterMissing_GameInfo,
    PTErrorType_ParameterMissing_Observer,
    PTErrorType_CantCreateGameModeToken,
    PTErrorType_ParameterMissing_CasinoName,
    PTErrorType_ParameterMissing_SDKKey,
    PTErrorType_ParameterMissing_Host,
    PTErrorType_ParameterMissing_ClientVersion,
    PTErrorType_ParameterMissing_InitialCDNPath,
    PTErrorType_ParameterMissing_DefaultLayout,
    PTErrorTypeGameAlreadyLaunched,
    PTErrorTypeCantCreateSDKProvider,
    PTErrorTypeCantCreateMiddle,
    PTErrorTypeCantCreateAppController,
    PTErrorTypeCantCreateGamesProvider
};

typedef NS_ENUM(NSInteger, PTSDKClosedGameReason) {
    PTSDKClosedGameReasonUserAction,
    PTSDKClosedGameReasonError,
    PTSDKClosedGameReasonLaunchAnotherGame,
    PTSDKClosedGameReasonLogout,
    PTSDKClosedGameReasonConnectionError
};

typedef NS_ENUM(NSUInteger, PTSDKClientType)
{
    PTSDKClientTypeCasino = 1,
    PTSDKClientTypePoker,
    PTSDKClientTypeSportsBook
};

#endif /* PTEnums_h */
