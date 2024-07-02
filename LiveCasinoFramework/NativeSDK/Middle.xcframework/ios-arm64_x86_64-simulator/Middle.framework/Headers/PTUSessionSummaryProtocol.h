//
//  PTUSessionSummaryProtocol.h
//  Middle
//
//  Created by setk on 6/25/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUGameEngine.h"

@protocol PTUSessionSummaryDelegate <NSObject>

typedef void (^PTUSessionSummaryCompletion)(void);

@required

- (void)showMessageSessionSummaryWithTotalBets:(double)totalBets
                                      totalWin:(double)totalWin
                                     completion:(PTUSessionSummaryCompletion)completion;

@end

@protocol PTUSessionSummaryProtocol <NSObject>

@property (assign, nonatomic) BOOL shouldShowManualEndSessionNotification;

- (void)setDelegate:(id<PTUSessionSummaryDelegate>)delegate;

- (void)updateLossLimit:(double)balance;
- (BOOL)canBetWithBalanceDelta:(double)delta;

- (void)gameSessionEndWithCompletion:(PTUStopGameCompletionBlock)completionBlock;

@end
