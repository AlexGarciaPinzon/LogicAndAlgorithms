//
//  PTSDKCoreProtocol.h
//  NativeSDK
//
//  Created by Macbook Pro on 7/24/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTSDKGameInfoProtocol.h"
#import "PTSDKDelegate.h"
#import "PTSDKErrorProtocol.h"

#ifndef PTSDKCoreProtocol_h
#define PTSDKCoreProtocol_h

@class PTError;

/// SDK core methods: initializing sdk, preparing/preloading resources, fetching game list and current active game
@protocol PTSDKCoreProtocol <NSObject>

/// returns last SDK error
- (nullable id<PTSDKErrorProtocol>)error1;

/// Returns list of available games contained in sdk or nil if error
- (nullable NSArray<id<PTSDKGameInfoProtocol>> *)gameList;

/// Returns current active game
- (nullable id<PTSDKGameInfoProtocol>)activeGame;

- (BOOL)setDelegate:(nonnull id<PTSDKDelegate>)delegate;

/// SDK has ability to show cutom view over all game play view.
/// So if you need to show your own view over game view use this view.
- (nullable UIView *)customViewOverGamePlayView;

/// Function to retrieve game icon using the game identifier.
- (void)urlForGameIconWithGameIdentifier:(nonnull NSString *)gameIdentifier type:(PTSDKGameImageType)type completion:(nonnull void(^)(NSURL * _Nullable))completion;

/// To suppress game sound. Is used in case if you need change focus and mute the game but continue playing.
- (void)setSoundSuppressed:(BOOL)suppressed;

/// Switch SDK language. The SDK will relaunch the game in game play mode.
/// @param language that must be applied to SDK.
/// @param completion In case PTSDKSwitchLanguageUpdatedGameRelaunchError the game must be closed and relaunched by lobby side.
- (void)switchSDKLangugage:(PTSDKLanguage)language
                compeltion:(nonnull void (^)(PTSDKSwitchLanguage))completion;

@end

#endif /* PTSDKCoreProtocol_h */
