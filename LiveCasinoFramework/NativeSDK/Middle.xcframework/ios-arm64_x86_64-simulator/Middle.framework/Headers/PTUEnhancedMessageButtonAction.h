//
//  PTUEnhancedMessageButtonAction.h
//  Middle
//
//  Created by hlpa on 28.08.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUResourceGames.h"
#import "PTUEnhancedMessageButtonActionHandler.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, PTUEnhancedMessageButtonActionType)
{
    PTUEnhancedMessageButtonActionTypeOpenGame,
    PTUEnhancedMessageButtonActionTypeOpenCachier,
    PTUEnhancedMessageButtonActionTypeOpenURL,
    PTUEnhancedMessageButtonActionTypeOpenKriseShop,
    PTUEnhancedMessageButtonActionTypeOpenKriseMap,
    PTUEnhancedMessageButtonActionTypeEmpty
};

@class PTUEnhancedMessageError;
@class PTUEnhancedMessageButton;
@class PTUURLManager;
@class PTUUserInfo;
@class PTUMiddleLayerController;
@class PTUGamesController;

@protocol PTULobbyController;

@interface PTUEnhancedMessageButtonAction : NSObject

@property (assign, nonatomic, readonly) PTUEnhancedMessageButtonActionType type;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (__kindof instancetype _Nullable)actionWithJSONObject:(id _Nullable)jsonObject;
+ (__kindof instancetype _Nullable)emptyAction;

/// Function is used to perform action of the current button action.
- (void)performAction:(id<PTUEnhancedMessageButtonActionHandler>)handler;

- (void)setOwner:(PTUEnhancedMessageButton *)owner;
- (void)setUserInfo:(PTUUserInfo *)userInfo;
- (void)performWithLobbyController:(id<PTULobbyController>)lobbyController
                  middleController:(nullable PTUMiddleLayerController *)middleController __deprecated_msg("Deprecated Use `-performAction:`.");
- (PTUEnhancedMessageError * _Nullable)validateWithGamesResource:(PTUResourceGames * _Nonnull)gamesResource gamesController:(PTUGamesController *)gamesController urlManager:(PTUURLManager * _Nonnull)urlManager;

@end

NS_ASSUME_NONNULL_END
