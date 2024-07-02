//
//  PTUDynamicBalanceResponse.h
//  Middle
//
//  Created by dmgo on 2/22/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTUDynamicBalanceResponse : PTUCommonResponse

- (int) type;
- (NSString *) currency;
- (long) balance;
- (long) delta;

@end
