//
//  PTUGameController.h
//  Middle
//
//  Created by hlpa on 20/12/2017.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreGraphics;

#import "Globals.h"
#import "PTUGameInfo.h"
#import "PTUResourceGame.h"
#import "PTUResourceGames.h"

@class UIViewController;
@class PTUGameController;
@class PTUGamesController;
@class PTUBringMoneyData;

@protocol PTUGameEngine;
@protocol PTUSDKKitEventsProtocol;

// MARK: - Typedaliases

typedef NS_ENUM(NSUInteger, PTUGameControllerUserLeadingHand)
{
    PTUGameControllerUserLeadingHandLeft,
    PTUGameControllerUserLeadingHandRight
};

typedef NS_ENUM(NSUInteger, PTUGameControllerInsufficientBalanceDecision)
{
    PTUGameControllerInsufficientBalanceDecisionDoNothing = 0,
    PTUGameControllerInsufficientBalanceDecisionResetDemoMoney,
    PTUGameControllerInsufficientBalanceDecisionOpenRealGame,
    PTUGameControllerInsufficientBalanceDecisionOpenDeposit,
    PTUGameControllerInsufficientBalanceDecisionOpenBringMoney
};

typedef void(^PTUGameViewControllerProtocolAutoplayConfirmationDialogCompletion)(BOOL confirmed);
typedef void(^PTUGameViewControllerProtocolAutoplayStartBlock)(uint64_t lossLimit, BOOL stopOnUserSingleWin, uint64_t singleWinLimit, BOOL stopOnUserJackpotWin);
typedef void(^PTUGameViewControllerProtocolAutoplayStopBlock)(void);
typedef void(^PTUGameControllerInsufficientBalanceDecisionCompletion)(PTUGameControllerInsufficientBalanceDecision decision);
typedef void(^PTUGameControllerMessageCompletion)(void);


// MARK: - PTUGameControllerGenericObserver

@protocol PTUGameControllerGenericObserver <NSObject>
@optional

// derived state observing
- (void)gameDidChangeBusyState:(BOOL)newState;
- (void)gameDidChangeAutoplayState:(BOOL)newState;

- (void)gameDidUpdateMayShowLoadingProgress:(double)progress;
- (void)gameDidUpdateMayShowLoading:(BOOL)isLoading;

- (void)gameBalanceDidChange:(PTUGameBalance)balanceInCents;
- (void)gameDidChangeUINativeElementsEnabled:(BOOL)nativeElementsEnabled
                           menuButtonVisible:(BOOL)menuButtonVisible
                           backButtonVisible:(BOOL)backButtonVisible
                            bottomBarVisible:(BOOL)bottomBarVisible;

- (void)showAutoplayConfirmationWithCompletion:(PTUGameViewControllerProtocolAutoplayConfirmationDialogCompletion _Nonnull)completion;
- (void)showAutoplaySessionLimitsWithStartAutoplayBlock:(PTUGameViewControllerProtocolAutoplayStartBlock _Nonnull)autoplayBlock
                                              stopBlock:(PTUGameViewControllerProtocolAutoplayStopBlock _Nonnull)stopBlock
                                         jackpotEnabled:(BOOL)jackpotEnabled
                                   totalBetPerSpinCents:(NSInteger)totalBetPerSpinCents
                                  userTableBalanceCents:(NSUInteger)userTableBalanceCents;

- (void)showInsufficientBalance:(BOOL)hasAbilityToBringMoney
                       gameMode:(PTSDKGameMode)gameMode
                     completion:(PTUGameControllerInsufficientBalanceDecisionCompletion _Nonnull)completion;

- (void)showMessage:(NSString * _Nonnull)message completion:(PTUGameControllerMessageCompletion _Nonnull)completion;
- (void)showInfoMessage:(NSString * _Nonnull)message completion:(PTUGameControllerMessageCompletion _Nonnull)completion;

- (void)goldenChipsAvailable:(BOOL)available count:(uint64_t)count totalValue:(double)value;
- (void)freeSpinBonusesAvailable:(BOOL)available count:(uint64_t)count;
- (void)switchMoneyItemMode:(PTUGameSwitchMoneyItemMode)switchMoneyItemMode;

- (void)wantsShowGameBalanceModeSelectorDialog:(PTUGameBalanceModeSelectorMoneyMask)balancesMask;
- (void)gameAskedToShowLimitationsDialog:(PTUGameController * _Nonnull)game;
- (void)gameAdvisorContentRetrieved:(PTUResourceGames * _Nonnull)content;
- (void)wantsToShowBringMoneyDialog:(PTUBringMoneyData * _Nonnull)data
                           spinMode:(PTUSpinMode)spinMode
                               mode:(PTUBringMoneyViewControllerMode)mode
                 positiveButtonType:(PTUBringMoneyViewControllerButtonType)positiveButtonType
                 negativeButtonType:(PTUBringMoneyViewControllerButtonType)negativeButtonType
                    allowZeroAmount:(BOOL)allowZeroAmount;
- (void)gameWheelShowOnAutoplay:(BOOL)shown; // remove this, game must not make decisions regarding UI, observe mode, autoplaying, etc. and decide by itself instead
- (void)gameDidUpdateWithHelpInfo:(NSURL * _Nonnull)helpUrl script:(NSString * _Nonnull)script;
@end

// MARK: - PTUGameViewControllerProtocol

@protocol PTUGameViewControllerProtocol <PTUGameControllerGenericObserver>
@required

- (void)uiDidChangeSize;
- (void)uiClose;

// TODO: move to observer
- (void)showAutoplayConfirmationWithCompletion:(PTUGameViewControllerProtocolAutoplayConfirmationDialogCompletion)completion;
- (void)showAutoplaySessionLimitsWithStartAutoplayBlock:(PTUGameViewControllerProtocolAutoplayStartBlock)autoplayBlock
                                              stopBlock:(PTUGameViewControllerProtocolAutoplayStopBlock)stopBlock
                                         jackpotEnabled:(BOOL)jackpotEnabled
                                   totalBetPerSpinCents:(NSInteger)totalBetPerSpinCents
                                  userTableBalanceCents:(NSUInteger)userTableBalanceCents;

// TODO: move to init parameters?
- (void)enableMultigameUI:(BOOL)enabled;
- (void)enableQuickSwitchUI:(BOOL)enabled;
- (void)enableGameAdvisorUI:(BOOL)enabled;

@end

// MARK: - PTUGameController

@interface PTUGameController: NSObject

// derived state getters
- (BOOL)mayShowMessages;
- (BOOL)mayBeClosedViaUI;
- (BOOL)isReadyForDisplay;

// uncategorized

/// TODO: move this property inside game info
@property (assign, nonatomic, readonly) PTUGameType gameType;
@property (strong, nonatomic, readonly, nonnull) PTUGameModeToken *modeToken;
@property (strong, nonatomic, readonly, nonnull) PTUResourceGame *gameResource;

@property (weak,   nonatomic, nullable, readonly) id<PTUGameEngine> gameEngine;

@property (weak,   nonatomic, nullable, readonly) PTUGamesController *owner;

@property (strong, nonatomic, nonnull) PTUFreeSpinBonusResponse *balance;

@property (assign, nonatomic, readonly) PTUUIOrientationMask supportedOrientations;

@property (weak, nonatomic, readonly, nullable) id<PTUSDKKitEventsProtocol> sdkKitEventsAnalyzer;

- (NSString *)gameWindowID;
// TODO: rename and make readonly property when refactoring is over
- (PTSDKGameMode)getGameMode;

- (void)updateModeToken:(PTUGameModeToken *_Nonnull)modeToken;

- (void)updateFSBCoinSize:(double)coinsize;
- (double)balanceInCentsFromFreeSpinsAmount:(NSInteger)spins; // TODO: remove
- (NSInteger)freeSpinsFlooredAmountFromBalanceInCents:(double)spinsMonetaryValueInCents; // TODO: remove

- (void)handleInsufficientBalance;

- (void)gameLimitsDidSet;

- (void)setPixelWidth:(float)width height:(float)height; // overrides

- (void)setGenericObserver:(id<PTUGameControllerGenericObserver>)observer __deprecated_msg("use 'addGenericObserver:'");
- (void)addGenericObserver:(id<PTUGameControllerGenericObserver> _Nonnull)observer;
- (void)removeGenericObserver:(id<PTUGameControllerGenericObserver> _Nonnull)observer;

- (PTUResourceGames *)gameAdvisorContent;

- (void)setFocused:(BOOL)focused;

- (void)setupSoundState:(BOOL)soundOn;

/// Is used to send to game visability state in case if platform shows alert or web view, we have to set visability to false.
- (void)updateGameVisability:(BOOL)gameIsVisible;

- (void)endSession;

// should be set by Game Controller, not read from
- (PTUGameBalance)tweak_gameBalance;

// TODO: it's not quite good but leave it like this until CP-Native Protocol is stable, we don't know at the moment in which way it may use native UI
@property (assign, nonatomic, readonly) BOOL nativeDebugEnabled;
@property (assign, nonatomic, readonly) BOOL nativeClockEnabled;

/// Send lobby message to the game controller.
- (void)sendGameCommand:(NSString *_Nonnull)command handler:(void (^_Nullable)(BOOL isSuccess))handler;

@end
