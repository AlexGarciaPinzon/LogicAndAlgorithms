//
//  PTUGameController+Inherit.h
//  Middle
//
//  Created by hlpa on 27/12/2017.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUGameController.h"
#import "PTUGamesController.h"

@class PTUNGMAutoplayLimitsInfo;

@interface PTUGameController (Inherit)

@property (weak, nonatomic, readonly) id<PTUGameControllerGenericObserver> genericObserver;

@property (strong, nonatomic, readonly) NSHashTable<NSObject<PTUGameControllerGenericObserver> *> *genericObservers;

+ (BOOL)tweak_usesFreeSpinsTweak;

- (BOOL)tweak_autoplaying;
- (BOOL)tweak_busy;

- (BOOL)setBusy:(BOOL)busy;
- (BOOL)setAutoplaying:(BOOL)autoplaying;
- (void)setLoadingProgress:(double)loadingProgress;
- (void)setIsReadyForDisplay:(BOOL)isReadyForDisplay;
- (void)setIsReadyForMessages:(BOOL)isReadyForMessages;
- (void)setNativeUIElementsEnabled:(BOOL)nativeUIElementsEnabled;
- (void)setMenuButtonVisible:(BOOL)visible;
- (void)setBackButtonVisible:(BOOL)visible;
- (void)setBottomBarVisible:(BOOL)visible;
- (void)setBalanceFreezed:(BOOL)balanceFreezed;
- (void)setGameBalance:(PTUGameBalance)gameBalance;

- (instancetype)initWithGameResource:(PTUResourceGame * _Nonnull)gameResource
                           modeToken:(PTUGameModeToken * _Nonnull)modeToken
                              engine:(id<PTUGameEngine> _Nonnull)engine
                               owner:(PTUGamesController * _Nonnull)owner
                sdkKitEventsAnalyzer:(id<PTUSDKKitEventsProtocol> _Nullable)sdkKitEventsAnalyzer;

- (void)loadGameAdvisorContent;

- (void)handleInsufficientBalanceDecision:(PTUGameControllerInsufficientBalanceDecision)decision;

- (void)setSupportedOrientations:(PTUUIOrientationMask)supportedOrientations;

- (void)setAutoplayLimitsInfo:(PTUNGMAutoplayLimitsInfo *)autoplayLimitsInfo
                       active:(BOOL)active;

- (void)setGameModeSelectorResult:(PTUGameModeSelectorResult)result;
- (void)setSpinMode:(PTUSpinMode)spinMode
          confirmed:(BOOL)confirmed
              value:(uint64_t)value
       errorMessage:(NSString *)errorMessage; /* TODO: refactoring, delete */

- (void)showBringMoneyDialogsIfNeeded;  /* TODO: refactoring, delete */
- (void)updateGameBalanceMode:(PTUGameBalanceMode)gameBalanceMode;

- (void)setGameWindowID:(NSString *)gameWindowID;

- (void)sendInitialMessagesToGame;

- (void)suppressSound:(BOOL)suppress;
- (void)turnSoundOnAggregate:(BOOL)soundOnAggregate;

- (void)endSession;

- (void)inherit_updateDisplayedBalance:(PTUGameBalance)gameBalance;

@end
