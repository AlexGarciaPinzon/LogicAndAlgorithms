//
//  PTUBonusBalancesResponse.h
//  Middle
//
//  Created by dmgo on 4/4/17.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTUBonusBalancesResponse : PTUCommonResponse

- (double) totalBalance;
- (NSArray *)fsbBonuses;
- (NSArray *)gsbBonuses;
- (NSArray *)gcbBonuses;

@end
