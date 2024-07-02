//
//  PTULobby.h
//  Middle
//
//  Created by Daniil Mazepin on 11/2/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@import Tools.PTSDKInternalEnums;
@import Tools.PTSDKExternalEnums;
@import Tools.PTUSDKKitEventsConstants;
@import WebKit;

#import "PTUGamesController.h"
#import "PTUApplicationProtocol.h"
#import "PTUAuthProtocol.h"
#import "PTUConnectionProtocol.h"
#import "PTUOpenWebPageProtocol.h"
#import "PTUOpenLobbyScreensProtocol.h"
#import "PTUOpenGameProtocol.h"
#import "PTUGameMessagesProtocol.h"
#import "PTULobbyPresentationProtocol.h"
#import "PTUToasterMessagesProtocol.h"
#import "PTULobbyActionsProtocol.h"

@class PTUUserInfo;
@class PTUGameAdvisorContent;
@class PTUGameUIViewController;
@class PTSDKInternalError;

@protocol PTUGameViewControllerProtocol;

@protocol NativeSDKLobbyDelegate <NSObject>
@required
- (void)gameClosed:(nonnull PTUGameInfo *)closedGame
        withReason:(PTSDKLobbyClosedGameReason)reason
             error:(nullable PTSDKInternalError *)error
       anotherGame:(nullable PTUGameInfo *)anotherGame
              mode:(PTSDKGameMode)gameMode;

/// Ask to show error in lobby.
- (void)nativeSDKLobbyDidReceiveError:(nullable PTSDKInternalError *)error;

/// Needed to handle url which sdk wants to open.
- (nullable NSURL *)nativeSDKLobbyOpenRequestedURL:(nonnull NSString *)url;

/// In case SDK makes PAS requests it asks additional parameters that will be added to Qwery request.
- (nullable NSArray<NSURLQueryItem *>*)nativeSDKPASRequstAdditionalParametersForURL:(nonnull NSString *)urlString;

/// Needed to handle url which sdk wants to open.
- (nullable WKWebView *)webViewOfNativeSDK;

/// Simple analize event.
- (void)nativeSDKLobbyAnalizeEvent:(PTUSDKKitEventType)eventType
                          withInfo:(nullable NSDictionary *)eventInfo;

/// Action about state changing.
- (void)didChangeNativeSDKLobbySoundState:(BOOL)newSoundState;

/// Needed to set supportedOrientations in lobby window.
- (void)nativeSDKLobbySetSupportedOrientations:(PTUUIOrientationMask)orientationMask;

/// Returns on completion clouser game token without system id. This token is used to open Kingdomrise map/shop.
- (void)requestTokenNonSystemId:(nonnull void(^)(NSString * _Nullable token))completion;

/// Needed to add game view an app window.
- (nullable UIWindow *)mainWindow;

/// Needed to add game view an app view controller.
/// Root SDKs view controller. SDK has the ability to be launched on view controller instead of separate game window.
- (nullable UIViewController *)rootGameContainerViewController;

/// SDK has ability to show cutom view got from lobby delegate over all SDK's view even PlatfromUI and AlertUI.
- (nullable UIView *)nativeSDKLobbyAskToGetCustomViewOverGamePlayView;

/// Asking for make closing animation
- (void)makeDisapperAnimationWithCompletion:(nonnull void(^)(void))completion;

/// Asking to make logout from PAS service while game closing.
- (void)makePASLogoutWithCompletion:(nullable void(^)(void))completion;

@end

typedef void(^PTULobbyControllerCompletion)(void);
typedef void(^PTULobbyControllerConfirmationCompletion)(BOOL confirmed);
typedef void(^PTULobbyControllerSuccessCompletion)(BOOL success);
typedef void(^PTULobbyControllerRealityCheckCallBackBlock)(BOOL accepted);
typedef void(^PTUContinueUserActivityRestorationHandler)(NSArray * _Nonnull);
typedef void(^PTULobbyWillCloseCompletion)(BOOL willClose);

@protocol PTULobbyController <NSObject, PTUApplicationProtocol, PTUAuthProtocol, PTUConnectionProtocol, PTUOpenWebPageProtocol, PTUOpenLobbyScreensProtocol, PTUOpenGameProtocol, PTUGameMessagesProtocol, PTULobbyPresentationProtocol, PTUToasterMessagesProtocol, PTULobbyActionsProtocol,
    NativeSDKLobbyDelegate /* Previosly this protocol was at AppController. Now RealSDK used instead of AppController. */>

@property (strong, nonatomic, readonly, nonnull) PTULobbyRouting *mainLobbyRouting;

@required

// Styles parsing API for othefcreateContentFilterFromDictionaryr frameworks
// TODO: tweak, remove
- (PTUContentFilter * _Nullable)createContentFilterFromDictionary:(NSDictionary * _Nonnull)dictionary;

// Game methods
- (void)startDownloadGame:(PTUGameInfo * _Nonnull)gameInfo;
- (void)gameReadyToPlay:(PTUGameInfo * _Nonnull)gameInfo;

//- (void)startFreeSpinBonus;
- (void)closeGamePresentation:(PTUGamePresentation * _Nonnull)gamePresentation
           mayShowGameAdvisor:(BOOL)mayShowGameAdvisor
                  withContent:(PTUResourceGames * _Nullable)advisorContent
          willCloseCompletion:(PTULobbyWillCloseCompletion _Nullable)willCloseCompletion;

- (void)setWebViewPresented:(BOOL)webViewPresented; // TODO: Transfer it to PTULobbyActionsProtocol

// Activity indicator
//- (void)showActivityIndicatorForGamePresentation:(PTUGamePresentation *)gamePresentation message:(NSString *)message;
//- (void)hideActivityIndicatorForGamePresentation:(PTUGamePresentation *)gamePresentation;

// LobbyContainerDelegate refactoring

- (UIInterfaceOrientationMask)supportedInterfaceOrientationForOverlayWindows;

// TODO: Remove this
- (UIViewController<PTUGameViewControllerProtocol> * _Nullable)gameUIViewControllerWithGameController:(PTUGameController * _Nonnull)gameController
                                                                                           gameConfig:(NSDictionary * _Nonnull)gameConfig
                                                                                         gameResource:(PTUResourceGame * _Nonnull)gameResource
                                                                                               inMode:(PTSDKGameMode)gameMode
                                                                       needsShowLoadingUponSizeChange:(BOOL)needsShowLoadingUponSizeChange
                                                                              deviceSupportsMultigame:(BOOL)deviceSupportsMultigame
                                                                                      gamesController:(PTUGamesController * _Nonnull)gamesController
                                                                                   gameViewController:(UIViewController * _Nonnull)gameViewController;



- (void)gameClosed:(nonnull PTUGameInfo *)closedGame
        withReason:(PTSDKLobbyClosedGameReason)reason
             error:(nullable PTSDKInternalError *)error
       anotherGame:(nullable PTUGameInfo *)anotherGame
              mode:(PTSDKGameMode)gameMode;

- (void)didReceiveNativeSDKError:(nullable NSError *)error;

@end
