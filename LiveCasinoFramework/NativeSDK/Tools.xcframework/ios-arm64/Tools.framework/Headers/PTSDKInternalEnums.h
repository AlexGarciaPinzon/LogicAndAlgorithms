//
//  PTSDKEnums.h
//  Tools
//
//  Created by olbu on 8/10/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#ifndef PTSDKEnums_h
#define PTSDKEnums_h

typedef NS_ENUM(NSInteger, PTSDKInternalErrorType) {
    PTSDKInternalErrorTypeUnknown                           = 1,
    PTSDKInternalErrorTypeNotEnoughSpace                    = 2,
    PTSDKInternalErrorTypeNoConnection                      = 3,
    PTSDKInternalErrorTypeCasinoError                       = 4,
    PTSDKInternalErrorTypeDefaultError                      = 5,
    PTSDKInternalErrorTypeCantCreateSDKProvider             = 6,
    PTSDKInternalErrorTypeNoGamesProvider                   = 7,
    PTSDKInternalErrorTypeNoMiddleLayer                     = 8,
    PTSDKInternalErrorTypeCantCreateAppController           = 9
};

typedef NS_ENUM(NSInteger, PTSDKLobbyClosedGameReason) {
    PTSDKLobbyClosedGameReasonInternal = -1,
    PTSDKLobbyClosedGameReasonUserAction,
    PTSDKLobbyClosedGameReasonError,
    PTSDKLobbyClosedGameReasonLaunchAnotherGame,
    PTSDKLobbyClosedGameReasonLogout,
    PTSDKLobbyClosedGameReasonConnectionError
};

#endif /* PTSDKEnums_h */
