//
//  PTUBringMoneyData.h
//  NativeGameUI
//
//  Created by hlpa on 25/10/2017.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef uint64_t (^PTUBringMoneyDataGetBalanceInCentsFromFreeSpinsAmountCall)(uint64_t spins);
typedef uint64_t (^PTUBringMoneyDataGetSpinsAmountFromBalanceInCentsCall)(uint64_t spinsMonetaryValueInCents);

@interface PTUBringMoneyData : NSObject

@property (assign, nonatomic, readonly) uint64_t realMoneyBalanceCents;
@property (assign, nonatomic, readonly) uint64_t bonusMoneyBalanceCents;
@property (assign, nonatomic, readonly) uint64_t freeSpinAmount;

@property (assign, nonatomic, readonly) uint64_t realMoneyCommitedForSessionCents;
@property (assign, nonatomic, readonly) uint64_t bonusMoneyCommitedForSessionCents;
@property (assign, nonatomic, readonly) uint64_t spinCountCommitedForSession;

@property (assign, nonatomic, readonly) uint64_t preselectedBringAmountCents;

@property (assign, nonatomic, readonly) uint64_t realMoneyAboutToBeCommitedCents;
@property (assign, nonatomic, readonly) uint64_t bonusMoneyAndFreeSpinsValueAboutToBeCommitedCents;

@property (assign, nonatomic, readonly) uint64_t maxTotalRealMoneyBringAmountCents;
@property (assign, nonatomic, readonly) uint64_t maxTotalBonusMoneyAndFreeSpinValueBringAmountCents;

@property (copy, nonatomic, readonly) NSString *aamsCode;
@property (copy, nonatomic, readonly) NSString *ropCode;
@property (copy, nonatomic, readonly) NSString *ropDateString;
@property (copy, nonatomic, readonly) NSString *currencySign;

@property (copy, nonatomic, readonly) PTUBringMoneyDataGetBalanceInCentsFromFreeSpinsAmountCall getBalanceInCentsFromFreeSpinsAmountCall;
@property (copy, nonatomic, readonly) PTUBringMoneyDataGetSpinsAmountFromBalanceInCentsCall getSpinsAmountFromBalanceInCents;

+ (instancetype)dataWithRealMoneyBalanceCents:(uint64_t)realMoneyBalanceCents
                       bonusMoneyBalanceCents:(uint64_t)bonusMoneyBalanceCents
                               freeSpinAmount:(uint64_t)freeSpinAmount
             realMoneyCommitedForSessionCents:(uint64_t)realMoneyCommitedForSessionCents
            bonusMoneyCommitedForSessionCents:(uint64_t)bonusMoneyCommitedForSessionCents
                  spinCountCommitedForSession:(uint64_t)spinCountCommitedForSession
                  preselectedBringAmountCents:(uint64_t)preselectedBringAmountCents
              realMoneyAboutToBeCommitedCents:(uint64_t)realMoneyAboutToBeCommitedCents
bonusMoneyAndFreeSpinsValueAboutToBeCommitedCents:(uint64_t)bonusMoneyAndFreeSpinsValueAboutToBeCommitedCents
            maxTotalRealMoneyBringAmountCents:(uint64_t)maxTotalRealMoneyBringAmountCents
maxTotalBonusMoneyAndFreeSpinValueBringAmountCents:(uint64_t)maxTotalBonusMoneyAndFreeSpinValueBringAmountCents
                                     aamsCode:(NSString *)aamsCode
                                      ropCode:(NSString *)ropCode
                                ropDateString:(NSString *)ropDateString
                                 currencySign:(NSString *)currencySign
     getBalanceInCentsFromFreeSpinsAmountCall:(PTUBringMoneyDataGetBalanceInCentsFromFreeSpinsAmountCall)getBalanceInCentsFromFreeSpinsAmountCall
         getSpinsAmountFromBalanceInCentsCall:(PTUBringMoneyDataGetSpinsAmountFromBalanceInCentsCall)getSpinsAmountFromBalanceInCentsCall;

+ (instancetype)defaultData;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end
