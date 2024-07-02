//
//  PTUEnhancedMessage.h
//  Middle
//
//  Created by hlpa on 28.08.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTURemoteMessageWithID.h"
#import "PTUResourceGames.h"

NS_ASSUME_NONNULL_BEGIN

@class PTUEnhancedMessageButton;
@class UIImage;
@class PTUCoreNetworkController;
@class PTUURLManager;
@class PTUEnhancedMessageError;
@class PTUGamesController;

typedef NS_ENUM(NSUInteger, PTUEnhancedMessageBehavior)
{
    PTUEnhancedMessageBehaviorImmidiate,
    PTUEnhancedMessageBehaviorAfterGameRoundAndAutoplay
};

typedef NS_ENUM(NSUInteger, PTUEnhancedMessageWithToasterWrapperType)
{
    PTUEnhancedMessageWithToasterWrapperType_FromToasterResponse,
    PTUEnhancedMessageWithToasterWrapperType_FromWaitingMessages
};

typedef void(^PTUEnhancedMessageResourceLoadingCompletion)(PTUEnhancedMessageError * _Nullable error);

extern NSString * const PTUEnhancedMessageDialogResponseDataType;
extern NSString * const PTUEnhancedMessageToasterResponseDataType;

@interface PTUEnhancedMessage : PTURemoteMessageWithID

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)messageWithEnhancedPlayerMessageJSONObject:(id _Nullable)jsonObject
                                               allowedDialogDataType:(NSString * _Nullable)allowedDialogDataType;

+ (instancetype _Nullable)messageWithToasterJSONObject:(id _Nullable)jsonObject
                                 allowedDialogDataType:(NSString * _Nullable)allowedDialogDataType
                                           wrapperType:(PTUEnhancedMessageWithToasterWrapperType)wrapperType;

@property (strong, nonatomic, readonly, nullable) NSString *windowID;
@property (strong, nonatomic, readonly, nullable) NSString *messageID;
@property (strong, nonatomic, readonly, nonnull) NSArray<PTUEnhancedMessageButton *> *buttons;
@property (strong, nonatomic, readonly, nullable) NSURL *imageURL;
@property (assign, nonatomic, readonly) NSTimeInterval timeToDisplay;
@property (assign, nonatomic, readonly) PTUEnhancedMessageBehavior displayBehavior;

- (void)setNetworkController:(PTUCoreNetworkController *)networkController;

- (BOOL)firstActionType:(out NSUInteger *)outType;
- (NSURL * _Nullable)firstActionURL;
- (NSString *)firstActionButtonResponseID;
- (NSString * _Nullable)firstActionGameCode;
- (NSString * _Nullable)closeButtonResponseID;

- (void)loadResources:(PTUEnhancedMessageResourceLoadingCompletion)completion;
- (BOOL)resourcesLoaded;
- (UIImage * _Nullable)loadedImage;

- (PTUEnhancedMessageError * _Nullable)validateWithGamesResource:(PTUResourceGames * _Nonnull)gamesResource gamesController:(PTUGamesController *)gamesController urlManager:(PTUURLManager * _Nonnull)urlManager;
- (void)reportError:(PTUEnhancedMessageError *)error;

@end

NS_ASSUME_NONNULL_END
