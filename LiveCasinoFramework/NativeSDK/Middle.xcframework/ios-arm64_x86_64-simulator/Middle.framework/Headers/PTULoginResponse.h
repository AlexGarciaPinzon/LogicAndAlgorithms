//
//  PTULoginResponse.h
//  Middle
//
//  Created by dmgo on 2/21/17.
//  Copyright © 2016 Playtech. All rights reserved.
//

/*
{
    "token":
    {
        "secretKey":"yCAq72XeEgR1RwoBLckgwGAA4PBAAOBI",
        "currency":"GBP",
        "balance":0,
        "loginTime":"",
        "playerJurisdictions":""
    },
    "ID":10002,
    "umid":7
}
*/

// If the player’s jurisdiction parameter is ‘GB’ or jurisdictions parameter has no value (i.e. is null or empty) and UK regulation is ON,
// the player should be considered as UK player and relevant setting for Turbo mode, Manual Stop, Min Spin duration should be applied. [NGM-238009]

#import "PTUCommonResponse.h"

@interface PTULoginResponse : PTUCommonResponse

@property (nonatomic, strong, readonly) NSString *secretKey;
@property (nonatomic, strong, readonly) NSString *userName;
@property (nonatomic, strong, readonly) NSString *currency;
@property (nonatomic, assign, readonly) long balance;
@property (nonatomic, strong, readonly) NSString *serverLoginDateString;

/// This key is responsible for owerriding regulation parameter by Socket response.
/// If a game has been launched in Fun or Real modes, we must set up regulation from this property,
/// otherwise in the Demo mode launch it using selected regulation.
@property (nonatomic, strong, readonly) NSString *playerJurisdictions;

@end
