//
//  PTSDKGameStateObserving.h
//  NativeSDK
//
//  Created by Macbook Pro on 7/24/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTSDKEnums.h"
#import "PTSDKGameInfoProtocol.h"

#ifndef PTSDKGameStateObserving_h
#define PTSDKGameStateObserving_h

/// implement to receive updates about game download state changes
@protocol PTSDKGameStateObserverProtocol <NSObject>

/// invoked every time game state or download progress changes
- (void)didChangeStateForGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo
                            state:(PTDownloadState)state
                         progress:(CGFloat)progress;
@end

/// SDK add/remove download state observer methods
@protocol PTSDKGameStateObservable <NSObject>

/// Starts observing game state changes for specific game info
- (BOOL)addGameStateObserver:(nonnull id<PTSDKGameStateObserverProtocol>)observer
                 forGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo;

/// Stops observing game state changes for specific game info
- (BOOL)removeGameStateObserver:(nonnull id<PTSDKGameStateObserverProtocol>)observer
                    forGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo;

/// Stops observing game state changes for all game infos
- (BOOL)removeGameStateObserverForAllGameInfos:(nonnull id <PTSDKGameStateObserverProtocol>)observer;

@end

#endif /* PTSDKGameStateObserving_h */
