//
//  PTEventsType.h
//  NativeSDK
//
//  Created by olbu on 8/19/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#ifndef PTEventsType_h
#define PTEventsType_h

/*        eventType: PTSDKEventType
        switch eventType {
        case .webPageVisitInGame:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.webPageTitle: url.absoluteString};
            break
        case .ngmGameEvent:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.category : category,
             PTSDKEventKeys.action   : action,
             PTSDKEventKeys.ngmLabel : label,
             PTSDKEventKeys.ngmValue : value.stringValue};
            break
        case .openDeposit:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.userNameInfo: userName};
            break
        case .openAccount:
             NSDictionary *eventInfo = nil;
            break
        case .openWithdraw:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.userNameInfo: userName}
            break
        case .openCashierHistory:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.userNameInfo: userName};
            break
        case .betPlaced:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.gameIDInfo: gameIdentifier,
             PTSDKEventKeys.gameNameInfo:  gameName,
             PTSDKEventKeys.balanceInfo:   balanceString,
             PTSDKEventKeys.amountInfo:    amountNumber,
             PTSDKEventKeys.gameGroup:     gameGroupString,
             PTSDKEventKeys.currencyInfo: currencyIdentifier};
            break
        case .gameLoaded:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.gameIDInfo: gameId};
            break
        case .gameClose:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.gameIDInfo: gameIdentifier};
            break
        case .gameMenuSound:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.gameMenuSoundInfo: @"1"};
            break
        case .gameStartFSB:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.gameIDInfo: gameIdentifier};
            break
        case .openGameMenu:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.gameIDInfo: gameIdentifier};
            break
        case .gameMenuItemClick:
             NSDictionary *eventInfo =
             @{PTSDKEventKeys.menuLeftRightInfo: @"0",
             PTSDKEventKeys.menuItemInfo: menuItemTitle};
            break
        case .ogwConnectionFailure:
             NSDictionary *eventInfo =
             @{ PTSDKEventKeys.targetHost: host,
             PTSDKEventKeys.time: timeStampWithMillSecs,
             PTSDKEventKeys.details: someUsefulDetails};
            break
        case .ogwConnectionFailureAllDomains:
             @{ PTSDKEventKeys.targetHost: host,
             PTSDKEventKeys.time: timeStampWithMillSecs,
             PTSDKEventKeys.details: someUsefulDetails};
            break
        case .ogwSystemLoginSuccess:
             NSDictionary *eventInfo =
             @{ PTSDKEventKeys.targetHost: host,
             PTSDKEventKeys.flowId: flowID,
             PTSDKEventKeys.time: startTime,
             PTSDKEventKeys.timeCompleted: completedTime,
             PTSDKEventKeys.timeElapsed: elapsedTime};
            break
        case .gameLaunchSuccess:
             NSDictionary *eventInfo =
             @{ PTSDKEventKeys.gameIDInfo: gameIdentifier,
             PTSDKEventKeys.timeElapsed: startGameDuration,
             PTSDKEventKeys.timeCompleted: completedTimeStamp,
             PTSDKEventKeys.time: startTimeStamp};
            break
        @unknown default:
            // Skip unknown events
            break
        }
*/

typedef NS_ENUM(NSUInteger, PTSDKEventType)
{
    PTSDKEventTypeWebPageVisitInGame = 101,
    PTSDKEventTypeNGMGameEvent,
    PTSDKEventTypeOpenDeposit,
    PTSDKEventTypeOpenAccount,
    PTSDKEventTypeOpenWithdraw,
    PTSDKEventTypeOpenCashierHistory,
    PTSDKEventTypeBetPlaced,
    PTSDKEventTypeGameLoaded,
    PTSDKEventTypeGameClose,
    PTSDKEventTypeGameMenuSound,
    PTSDKEventTypeGameStartFSB,
    PTSDKEventTypeOpenGameMenu,
    PTSDKEventTypeGameMenuItemClick,
    PTSDKEventTypeOgwConnectionFailure,
    PTSDKEventTypeOgwConnectionFailureAllDomains,
    PTSDKEventTypeOgwSystemLoginSuccess,
    PTSDKEventTypeGameLaunchSuccess
};

static const struct
{
    __unsafe_unretained NSString *webPageTitle; //NSString: URL or URL Template Name
    __unsafe_unretained NSString *category; //NSString: NGM game event param
    __unsafe_unretained NSString *action; //NSString: NGM game event param
    __unsafe_unretained NSString *ngmLabel; //NSString: NGM game event param
    __unsafe_unretained NSString *ngmValue; //NSString: NGM game event param
    __unsafe_unretained NSString *gameIDInfo; //NSString: game id value
    __unsafe_unretained NSString *gameNameInfo; //NSString: game name value
    __unsafe_unretained NSString *balanceInfo;  //NSString: balance value
    __unsafe_unretained NSString *amountInfo; //NSNumber: amount
    __unsafe_unretained NSString *gameGroup; //NSString: game group: slot/table/ngm
    __unsafe_unretained NSString *currencyInfo; //NSString: currency identifier
    __unsafe_unretained NSString *menuLeftRightInfo; //NSString: @"1" or @"0"
    __unsafe_unretained NSString *menuItemInfo; //NSString: menu item title
    __unsafe_unretained NSString *targetHost; //NSString: URL
    __unsafe_unretained NSString *time; //NSNumber: timeStampWithMillSecs
    __unsafe_unretained NSString *details; //NSString: some useful info
    __unsafe_unretained NSString *flowId; //NSString
    __unsafe_unretained NSString *timeCompleted; //NSNumber: timeStampWithMillSecs
    __unsafe_unretained NSString *timeElapsed; //NSNumber: timeStampWithMillSecs
}
PTSDKEventKeys =
{
    @"title",
    @"category",
    @"action",
    @"ngm_label",
    @"ngm_value",
    @"gameId",
    @"game_name",
    @"balance",
    @"amount",
    @"gameGroup",
    @"currency",
    @"leftRight",
    @"menuItemName",
    @"targetHost",
    @"time",
    @"details",
    @"flowId",
    @"timeCompleted",
    @"timeElapsed",
};

#endif /* PTEventsType_h */
