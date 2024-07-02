//
//  PTUOpenGameProtocol.h
//  Middle
//
//  Created by vlki on 9/30/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @brief Specifies set of possible actions upon interaction with game icon, etc.
 
 @discussion Actions are attempted in order from higher value to lower. Actions are attempted only when needed, i.e. login action will not be attempted if game can be launched in given mode without loging in first.
 
 @li @c PTULobbyControllerOpenGameBehaviourCancel - do nothing
 @li @c PTULobbyControllerOpenGameBehaviourShowInfo - show game info
 @li @c PTULobbyControllerOpenGameBehaviourLaunchGame - launch game if possible
 @li @c PTULobbyControllerOpenGameBehaviourDeescalateMode - deescalate game mode if needed
 @li @c PTULobbyControllerOpenGameBehaviourLogin - login if needed
 @li @c PTULobbyControllerOpenGameBehaviourDownloadGame - open game info screen proposing to download game if download is possible and game is not downloaded yet
 
 @note:
 PTULobbyControllerOpenGameBehaviourDeescalateMode - must not be used and will cause assert
 */
typedef NS_OPTIONS(NSUInteger, PTULobbyControllerOpenGameBehaviour)
{
    PTULobbyControllerOpenGameBehaviour_Internal_None               = 0,
    PTULobbyControllerOpenGameBehaviour_Internal_ShowInfo           = 1 << 0,
    PTULobbyControllerOpenGameBehaviour_Internal_LaunchGame         = 1 << 1,
    PTULobbyControllerOpenGameBehaviour_Internal_DeescalateMode     = 1 << 2,
    PTULobbyControllerOpenGameBehaviour_Internal_Login              = 1 << 3,
    PTULobbyControllerOpenGameBehaviour_Internal_BrokenGames        = 1 << 4,
    PTULobbyControllerOpenGameBehaviour_Internal_DownloadGame       = 1 << 5,
    
    PTULobbyControllerOpenGameBehaviourCancel                       = PTULobbyControllerOpenGameBehaviour_Internal_None,
    PTULobbyControllerOpenGameBehaviourShowInfo                     = PTULobbyControllerOpenGameBehaviour_Internal_ShowInfo,
    PTULobbyControllerOpenGameBehaviourLaunchGameNoBrokenGames      = PTULobbyControllerOpenGameBehaviour_Internal_LaunchGame,
    PTULobbyControllerOpenGameBehaviourLaunchGameAndBrokenGames     = PTULobbyControllerOpenGameBehaviour_Internal_LaunchGame | PTULobbyControllerOpenGameBehaviour_Internal_BrokenGames,
    PTULobbyControllerOpenGameBehaviourLoginNoBrokenGames           = PTULobbyControllerOpenGameBehaviour_Internal_Login,
    PTULobbyControllerOpenGameBehaviourLoginAndBrokenGames          = PTULobbyControllerOpenGameBehaviour_Internal_Login | PTULobbyControllerOpenGameBehaviour_Internal_BrokenGames,
    PTULobbyControllerOpenGameBehaviourDownloadGame                 = PTULobbyControllerOpenGameBehaviour_Internal_DownloadGame
};

typedef void(^PTULobbyControllerOpenGameCompletion)(PTULobbyControllerOpenGameBehaviour stepsTaken);

@protocol PTUOpenGameProtocol <NSObject>

@required

- (void)openGameWithIdentifier:(NSString * _Nonnull)gameIdentifier fromSource:(PTUGamesControllerLaunchSource)launchSource;
- (void)openGameWithResource:(PTUResourceGame const * const _Nonnull)gameResource fromSource:(PTUGamesControllerLaunchSource)launchSource;
- (void)openGameInfoWithResource:(PTUResourceGame * _Nonnull)gameResource fromSource:(PTUGamesControllerLaunchSource)launchSource;

- (void)openGameWithResource:(PTUResourceGame const * const _Nonnull)gameResource
                      inMode:(PTSDKGameMode)gameMode
                  fromSource:(PTUGamesControllerLaunchSource)launchSource
            behaviourOptions:(PTULobbyControllerOpenGameBehaviour)behaviourOptions
                  completion:(PTULobbyControllerOpenGameCompletion _Nullable)completion;

@end

NS_ASSUME_NONNULL_END
