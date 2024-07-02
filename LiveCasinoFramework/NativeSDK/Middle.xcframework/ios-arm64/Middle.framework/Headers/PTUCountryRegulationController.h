//
//  PTUCountryProtocol.h
//  Middle
//
//  Created by yudu on 1/4/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Constants.h"

@class PTUITRegulationResponse;

@class PTUCountryRegulationController;

@interface PTUCountryRegulationController: NSObject

@property (copy, nonatomic, readwrite) NSString *aamsCode;
@property (copy, nonatomic, readwrite) NSString *ropCode; // TODO: this is per game now
@property (copy, nonatomic, readwrite) NSString *ropDateString;
@property (copy, nonatomic, readwrite) NSString *tableSessionCode;

@property (nonatomic, assign, readwrite) PTUBalanceInCents totalTransferAmountInCents;
@property (nonatomic, assign, readwrite) uint64_t totalTransferFSBs;

@property (nonatomic, assign, readonly) uint64_t maxBringAmountCents;

- (BOOL)showFSBDialog;

- (BOOL)allowedToBringAtLeastCents:(uint64_t)cents spins:(uint64_t)spins spinsToCentsCallback:(uint64_t (^)(uint64_t cents))spinsToCents;

@end
