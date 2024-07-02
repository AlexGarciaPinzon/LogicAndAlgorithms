//
//  PTUITRegulationResponse.h
//  Middle
//
//  Created by dmgo on 2/22/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"
#import "Constants.h"

@interface PTUITRegulationResponse : PTUCommonResponse

- (NSString *)aamsCode;
- (NSString *)ropCode;
- (NSString *)ropDateString;
- (NSString *)sessionCode;
- (NSString *)windowId;
- (PTUBalanceInCents)totalTransferAmountInCents;
- (uint64_t)totalTransferFSBs;

@end
