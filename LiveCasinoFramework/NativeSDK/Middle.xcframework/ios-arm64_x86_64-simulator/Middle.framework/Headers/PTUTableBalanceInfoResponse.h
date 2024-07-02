//
//  PTUTableBalanceResponce.h
//  Middle
//
//  Created by local_adm on 5/17/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTUTableBalanceInfoResponse : PTUCommonResponse
- (int) freeSpinsCount;
- (long) balance;
- (long) delta;
@end
