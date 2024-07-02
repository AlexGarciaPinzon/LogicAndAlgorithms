//
//  PTSDKGameOpenClosing.h
//  NativeSDK
//
//  Created by Macbook Pro on 7/24/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#ifndef PTSDKGameOpenClosing_h
#define PTSDKGameOpenClosing_h

/// open/close game with different options: demo mode on/off, username with password or token etc.
@protocol PTSDKGameOpenClosing <NSObject>

/// Will open game in demo mode
- (void)openDemoGameWithGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo
                         soundOn:(BOOL)soundOn;

/// Use this func if you need to launch game in demo mode and get its view to place it on your custom container.
/// ⚠️ Please make sure that you implemented function setSupportedOrientations: from PTSDKDelegate protocol.
- (nullable UIViewController *)createDemoGameWithGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo
                                                  soundOn:(BOOL)soundOn;

/// Will open game with username and password
- (void)openGameWithUsername:(nonnull NSString *)username
                    password:(nonnull NSString *)password
                    gameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo
                     soundOn:(BOOL)soundOn;

/// Will open game using username and token
- (void)openGameWithUsername:(nonnull NSString *)username
                       token:(nonnull NSString *)token
                    gameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo
                     soundOn:(BOOL)soundOn __deprecated_msg("This func is deprecated. Use `openGameWithUsername:pasToken:gameInfo:soundOn:`");

/// Will open game using PAS token without systemId.
- (void)openGameWithUsername:(nonnull NSString *)username
                    pasToken:(nonnull NSString *)pasToken
                    gameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo
                     soundOn:(BOOL)soundOn;

/// Use this func if you need to launch game and get its view to place it on your custom container.
/// ⚠️ Please make sure that you implemented function setSupportedOrientations: from PTSDKDelegate protocol.
- (nullable UIViewController *)createGameWithUsername:(nonnull NSString *)username
                                             pasToken:(nonnull NSString *)pasToken
                                             gameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo
                                              soundOn:(BOOL)soundOn;

/// Will open game using external token.
- (void)openGameWithUsername:(nonnull NSString *)username
               externalToken:(nonnull NSString *)externalToken
                    gameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo
                     soundOn:(BOOL)soundOn;

/// Use this func if you need to launch game and get its view to place it on your custom container.
/// ⚠️ Please make sure that you implemented function setSupportedOrientations: from PTSDKDelegate protocol.
- (nullable UIViewController *)createGameWithUsername:(nonnull NSString *)username
                                        externalToken:(nonnull NSString *)externalToken
                                             gameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo
                                              soundOn:(BOOL)soundOn;

/// Try to stop active game.
/// @param handler used to notify result of stoping PTSDK (NO if PTSDK can't be stopped)
- (void)tryStopGame:(nullable void(^)(enum PTSDKCloseGameResult))handler;

/// Schedule stop an active game to be performed once it is possible
- (void)scheduleStopGame:(nullable void(^)(enum PTSDKCloseGameResult))handler;

/// Force active game stop.
/// ⚠️ Not safe action. Better to use funcs 'tryStopGame:' or 'scheduleStopGame:'
- (void)forceStopGame:(nullable void(^)(enum PTSDKCloseGameResult))handler;

/// Try to send command to a laucnhed game.
/// - Note: Method allows to forward communication with a game skipping PTSDK logic / validations.
/// - Warning: The result command will be look like:
/// ```
/// window.nw.sendToCP('{command here}') | window.nw.sendToCP('%@')
/// window.nw.sendToCP('{"mute":false,"_type":"ucip.sound.w2gSoundUpdateNotification","level":100}')
/// ```
- (void)sendCommandToLaunchedGame:(nonnull NSString *)command handler:(void (^_Nullable)(BOOL isSuccess))handler;

@end

#endif /* PTSDKGameOpenClosing_h */

