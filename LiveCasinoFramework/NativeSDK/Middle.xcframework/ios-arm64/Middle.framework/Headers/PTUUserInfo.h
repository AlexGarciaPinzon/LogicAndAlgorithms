//
//  PTUUserInfo.h
//  Middle
//
//  Created by yudu on 9/20/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTUBalanceInfo.h"

@class PTUTokensInfo;
@class PTULoginResponse;
@class PTUUMSLoginResponse;
@class PTUCurrencyInfo;

@interface PTUUserInfo : NSObject
/**
 The name of user for login and password in application
 */
@property (copy, nonatomic, readonly) NSString *loginName;
@property (copy, nonatomic, readonly) NSString *loginHashId;
@property (copy, nonatomic, readonly) NSString *password;
/**
 The name of user for show in application
 */
@property (copy, nonatomic, readonly) NSString *userName;
@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;
@property (copy, nonatomic, readonly) NSString *email;
@property (copy, nonatomic, readonly) NSString *activeIdToken;
@property (copy, nonatomic, readonly) NSString *title;
@property (assign, nonatomic, readonly, getter = isVipLevel) BOOL vipLevel;
@property (copy, nonatomic, readonly) NSString *secretKey;
@property (copy, nonatomic, readonly) NSDate *lastLoginDate;
@property (assign, nonatomic, readonly) BOOL forbiddenBiometricalAuthUsageByServerSide;

@property (strong, nonatomic, readonly) PTUTokensInfo *tokensInfo;
@property (weak, nonatomic, readonly) NSString *currencyIdentifier;
@property (weak, nonatomic, readonly) NSString *currencySign;
@property (strong, nonatomic, readonly) PTUBalanceInfo *balanceInfo;
@property (strong, nonatomic, readonly) PTUCurrencyInfo *currencyInfo;
 
@property (assign, nonatomic, readonly, getter = isLoggedIn) BOOL loggedIn;
@property (copy, nonatomic, readonly) NSString *playerJurisdictions;

- (void)updateWithLoginName:(NSString *)loginName
                loginHashId:(NSString *)loginHashId
                   password:(NSString *)password
        authenticationToken:(NSString *)authenticationToken
              externalToken:(NSString *)externalToken
              loginResponse:(PTULoginResponse *)loginResponse
              lastLoginDate:(NSDate *)lastLoginDate;

- (void)updateWithFirstName:(NSString *)firstName
                   lastName:(NSString *)lastName
                      title:(NSString *)title
                      email:(NSString *)email
              activeIdToken:(NSString *)activeIdToken;

- (void)updateWithUMSWalletBalanceChangeNotification:(NSDictionary *)balances;
- (void)updateWithCurrencyInfo:(PTUCurrencyInfo *)currencyInfo;
/// To set demo currency id of sdk.
- (void)updateWithDemoCurrencyIdentifier:(NSString *)currencyIdentifier;
- (void)updateOnLogout;
- (void)setupForbiddenBiometricalAuthUsageByServerSide:(BOOL)forbid;

@end
