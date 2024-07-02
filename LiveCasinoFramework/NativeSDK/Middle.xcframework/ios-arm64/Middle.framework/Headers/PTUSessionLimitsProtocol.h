//
//  PTUSessionLimitsProtocol.h
//  Middle
//
//  Created by dmgo on 4/12/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUSessionSummaryProtocol.h"

@class PTUMiddleLayerController;

@protocol PTULobbyController;

@protocol PTUSessionLimitsDelegate <PTUSessionSummaryDelegate>

@required

- (void)sessionLimitsTimeReminderPlayedTime:(NSTimeInterval)playedTime
                                  totalBets:(double)totalBets;
- (void)showMessageTimeLimitProximity;
- (void)showMessageLossProximity;
- (void)showMessageBetTooHigh;
- (void)showMessageLimitsCloseGamesOnReachedLossLimitWithTotalBets:(double)totalBets
                                                          totalWin:(double)totalWin;
- (void)showMessageLimitsCloseGamesOnTimeoutWithTotalBets:(double)totalBets
                                                 totalWin:(double)totalWin;
- (void)sessionLimitDidChange:(double)sessionLimit
                    lossLimit:(double)lossLimit
                     totalWin:(double)totalWin
                    totalBets:(double)totalBets;

@end

@protocol PTUSessionLimitsProtocol <PTUSessionSummaryProtocol>

@required

- (void)configureWithSessionLimit:(NSUInteger)sessionLimit
                        lossLimit:(double)lossLimit
                   noticeInterval:(NSUInteger)noticeInterval
                    selfExclusion:(NSUInteger)selfExclusion
                     gameWindowID:(NSString *)gameWindowID
            middleLayerController:(PTUMiddleLayerController *)middleLayerController;

- (void)setDelegate:(id<PTUSessionLimitsDelegate>)delegate;

- (void)spinFinished;
- (void)stopAllActions;

@end
