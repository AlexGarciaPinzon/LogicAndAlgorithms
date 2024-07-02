//
//  PTUEnhancedMessageButton.h
//  Middle
//
//  Created by hlpa on 28.08.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUResourceGames.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, PTUEnhancedMessageButtonType)
{
    PTUEnhancedMessageButtonTypeAction,
    PTUEnhancedMessageButtonTypeCancel,
    PTUEnhancedMessageButtonTypeClose,
};

@class PTUEnhancedMessage;
@class PTUEnhancedMessageButtonAction;
@class PTUURLManager;
@class PTUEnhancedMessageError;
@class PTUGamesController;

@interface PTUEnhancedMessageButton : NSObject

@property (assign, nonatomic, readonly) PTUEnhancedMessageButtonType type;
@property (strong, nonatomic, readonly, nullable) NSString *text;
@property (strong, nonatomic, readonly, nonnull) PTUEnhancedMessageButtonAction *action;
@property (strong, nonatomic, readonly, nonnull) NSString *responseID;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)buttonWithJSONObject:(id _Nullable)jsonObject;
+ (instancetype _Nullable)buttonWithType:(PTUEnhancedMessageButtonType)type text:(NSString * _Nullable)text action:(PTUEnhancedMessageButtonAction * _Nullable)action responseID:(NSString * _Nullable)responseID;

- (void)setOwner:(PTUEnhancedMessage * _Nonnull)owner;

- (PTUEnhancedMessageError * _Nullable)validateWithGamesResource:(PTUResourceGames * _Nonnull)gamesResource gamesController:(PTUGamesController *)gamesController urlManager:(PTUURLManager * _Nonnull)urlManager;

@end

NS_ASSUME_NONNULL_END
