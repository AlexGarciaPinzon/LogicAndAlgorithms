//
//  PTUAutoplayConfirmationSequenceController.h
//  NativeClientGames
//
//  Created by hlpa on 1/12/2017.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUGameController.h"

@protocol PTUAutoplayConfirmationSequenceControllerDelegate;

@class
PTUNGMAutoplayLimitsInfo,
PTUGameUIViewController;

typedef void(^PTUAutoplayConfirmationSequenceControllerDialogCompletion)(BOOL confirmed);
typedef void(^PTUAutoplayConfirmationSequenceControllerCompletion)(BOOL confirmed, PTUNGMAutoplayLimitsInfo *limitsIfAny);

@interface PTUAutoplayConfirmationSequenceController: NSObject

+ (instancetype)sequenceShouldAskConfirmation:(BOOL)autoplayConfirmationAvailable
                              shouldAskLimits:(BOOL)autoplayLimitAvailable
                               jackpotEnabled:(BOOL)jackpotEnabled
                         totalBetPerSpinCents:(NSInteger)totalBetPerSpinCents
                        userTableBalanceCents:(NSUInteger)userTableBalanceCents
                                     delegate:(id<PTUAutoplayConfirmationSequenceControllerDelegate>)delegate
                                   completion:(PTUAutoplayConfirmationSequenceControllerCompletion)completion;
- (instancetype)initShouldAskConfirmation:(BOOL)autoplayConfirmationAvailable
                          shouldAskLimits:(BOOL)autoplayLimitAvailable
                           jackpotEnabled:(BOOL)jackpotEnabled
                     totalBetPerSpinCents:(NSInteger)totalBetPerSpinCents
                    userTableBalanceCents:(NSUInteger)userTableBalanceCents
                                 delegate:(id<PTUAutoplayConfirmationSequenceControllerDelegate>)delegate
                               completion:(PTUAutoplayConfirmationSequenceControllerCompletion)completion;

- (void)start;

@end

@protocol PTUAutoplayConfirmationSequenceControllerDelegate
@required

- (void)showAutoplayConfirmationDialogWithCompletion:(PTUAutoplayConfirmationSequenceControllerDialogCompletion)dialogCompletion;
- (void)showAutoplaySessionLimitsWithStartAutoplayBlock:(PTUGameViewControllerProtocolAutoplayStartBlock)autoplayBlock
                                              stopBlock:(PTUGameViewControllerProtocolAutoplayStopBlock)stopBlock
                                         jackpotEnabled:(BOOL)jackpotEnabled
                                   totalBetPerSpinCents:(NSInteger)totalBetPerSpinCents
                                  userTableBalanceCents:(NSUInteger)userTableBalanceCents;

@end
