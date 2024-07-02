//
//  PTUToasterController.h
//  Lobby
//
//  Created by setk on 6/1/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
@class UIView;

@protocol PTULobbyController;

@class PTUMiddleLayerController;
@class PTULayoutConfigController;
@class PTUGamesController;
@class PTUToasterController;
@class PTUEnhancedMessage;

@protocol PTUToasterMessagesObserver <NSObject>;
@required

- (void)toasterController:(PTUToasterController *)toasterController changedStateHasToastersTo:(BOOL)hasToasters;

@end

@protocol PTUToasterControllerDelegate <NSObject>

- (void)createToastersContainerView;
- (void)dismissToastersContainerView;
- (BOOL)isToastersViewExist;
- (void)removeFromSuperview;
- (void)showInContainer:(UIView *)container;
- (BOOL)addToasterToQueueWithInfo:(PTUEnhancedMessage *)info;
- (void)toasterControllerDidAllowShowingMessages:(BOOL)showingMessagesAllowed;
- (void)tickTimer;
- (void)freezeToastersLifetime:(BOOL)freezeLifetime;

@end

@protocol PTUToastersInteractionDelegate <NSObject>

- (void)handleLinkClicked:(PTUEnhancedMessage *)enhancedMessage withURL:(NSURL *)url;
- (void)handleCloseClicked:(PTUEnhancedMessage *)enhancedMessage;
- (void)handleMessageClicked:(PTUEnhancedMessage *)enhancedMessage;
- (void)handleReadMoreClicked:(PTUEnhancedMessage *)enhancedMessage;
- (void)requestNextToasterMessageInfo:(id)sender toastersInPresenting:(NSUInteger)count;

@end

@interface PTUToasterController : NSObject <PTUToastersInteractionDelegate>

@property (nonatomic, weak) id <PTUToasterControllerDelegate> toastersControllerDelegate;

+ (instancetype)controllerWithMiddleLayerController:(PTUMiddleLayerController *)middleLayerController
                                    lobbyController:(id<PTULobbyController>)lobbyController
                             showingMessagesAllowed:(BOOL)showingMessagesAllowed;

- (void)addToasterMessageWithEnhancedMessage:(PTUEnhancedMessage *)enhancedMessage;
- (void)requestNextToasterMessageInfo:(id)sender toastersInPresenting:(NSUInteger)count;

- (void)gamesControllerDidAllowShowMessage:(BOOL)allow;
- (void)remoteMessagesInPresenting:(BOOL)remoteMessagesInPresenting;
- (void)webviewIsPresented:(BOOL)webviewIsPresented;
//- (void)mainContainerDidChangeStateTo:(PTUMainContainerViewControllerState)state; // TODO:

- (void)addObserverMessages:(id<PTUToasterMessagesObserver>)observer;
- (void)removeObserverMessages:(id<PTUToasterMessagesObserver>)observer;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end
