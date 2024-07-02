//
//  PTUFreeSpinBonusResponse.h
//  Middle
//
//  Created by dmgo on 3/22/17.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTUFreeSpinBonusResponse : PTUCommonResponse

- (double)monetaryBalance;
- (double)funBalance;
- (double)fsbBalance;

- (instancetype)initWithRealBalance:(double)realBalance funBalance:(double)funBalance fsbBalance:(double)fsbBalance;

@end
