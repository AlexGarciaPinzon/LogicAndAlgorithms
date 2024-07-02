//
//  PTULobbyActionsProtocol.h
//  Middle
//
//  Created by vlki on 10/1/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^PTULobbyControllerAdvisorCompletion)(void);

@protocol PTULobbyActionsProtocol <NSObject>

@optional

- (void)closeChat;
- (void)commitPreviewGameInfoController:(UIViewController *)controller;

- (void)showSecurityOverlayImageView;
- (void)hideSecurityOverlayImageView;

- (BOOL)shouldShowCustomStatusBar;
- (void)showLastLoginMessageWithDate:(NSDate * _Nonnull)date userName:(NSString * _Nonnull)userName;
- (void)showNicknameUpdateWithValidationError:(BOOL)validationError;

- (void)userSelectedGameWithGameInfo:(PTUGameInfo * _Nonnull)gameInfo __attribute__((deprecated));
- (void)userSelectedGameWithResource:(PTUResourceGame const * const _Nonnull)gameResource;

- (NSArray<id<UIPreviewActionItem>> * _Nonnull)lobbyPreviewActionItemsForGameResource:(PTUResourceGame * _Nonnull)gameResource;
- (void)middleLayerDidUpdateConfigs;

- (void)openAppScheme:(NSString * _Nonnull)appScheme itunesURL:(NSURL * _Nullable)itunesURL;

- (PTUViewControllerPresentation * _Nonnull)previewGameInfoControllerForGameWithResource:(PTUResourceGame * _Nonnull)gameResource
                                                                               container:(__kindof UIViewController * _Nonnull)container
                                                                              fromSource:(PTUGamesControllerLaunchSource)launchSource
                                                                          previewActions:(NSArray<id<UIPreviewActionItem>> * _Nonnull)previewActions;

- (void)requestAdvisorForGameController:(PTUGameController * _Nonnull)gameController
                               gameView:(UIViewController<PTUGameViewControllerProtocol> * _Nonnull)gameView
                            withContent:(PTUResourceGames * _Nonnull)content
                    withCloseCompletion:(PTULobbyControllerAdvisorCompletion _Nullable)completion;

- (void)openDepositAndCloseGames:(BOOL)needCloseGames;

- (void)closeKriseView;
- (void)kriseIsReadyForDisplay;

@end

NS_ASSUME_NONNULL_END
