//
//  PTUCasinoErrorResponse.h
//  Middle
//
//  Created by dmgo on 4/19/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

typedef NS_ENUM(NSUInteger, PTUCasinoErrorResponseBehaviour)
{
    PTUCasinoErrorResponseBehaviourNoop = 0,
    PTUCasinoErrorResponseBehaviourGameLogout,
    PTUCasinoErrorResponseBehaviourCloseClient
};

typedef NS_ENUM(NSUInteger, PTUCasinoErrorResponseSubtype)
{
    PTUCasinoErrorResponseSubtypeUnknown,
    PTUCasinoErrorResponseSubtypeSessionTimeLimit,
    PTUCasinoErrorResponseSubtypeBringMoneyOverSpend,
    PTUCasinoErrorResponseSubtypeCooldownLimit
};

@class PTUCasinoErrorResponseSessionTimeLimit;

@interface PTUCasinoErrorResponse : PTUCommonResponse

- (int) code;
- (NSString *) message;
- (PTUCasinoErrorResponseBehaviour)behaviour;
- (PTUCasinoErrorResponseSubtype)subtype;

- (PTUCasinoErrorResponseSessionTimeLimit *)sessionTimeLimitInfo;

@end
