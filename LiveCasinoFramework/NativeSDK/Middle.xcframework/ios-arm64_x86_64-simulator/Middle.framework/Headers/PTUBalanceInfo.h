//
//  PTUBalanceInfo.h
//  Middle
//
//  Created by yudu on 9/20/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, PTUBalanceType) {
    PTUBalanceTypeRingfenced,
    PTUBalanceTypeWithdrawable,
    PTUBalanceTypeTypeBonusPendingWinnings,
    PTUBalanceTypePendingWithdrawals,
    PTUBalanceTypeRealGaming,
    PTUBalanceTypeCasinoGaming,
    PTUBalanceTypeCasinoTableReal,
    PTUBalanceTypeBonus,
    PTUBalanceTypeBrokenGamesReal,
    PTUBalanceTypeBrokenGamesBonus,
    PTUBalanceTypeTotalBonus
};

@interface PTUBalanceInfo : NSObject

@property (nonatomic, strong) NSString *currencyIdentifier;
@property (nonatomic, assign) int64_t balanceInCents;
@property (nonatomic, assign) NSUInteger compoints;
@property (nonatomic, assign) PTUBalanceType type;
@property (nonatomic, assign, readonly) double balanceValue;

+ (PTUBalanceType)balanceTypeFromBalanceTypeKey:(NSString *)balanceTypeKey;

@end
