//
//  PTUUMSLoginResponse.h
//  Middle
//
//  Created by dmgo on 2/21/17.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTUUMSLoginResponse : PTUCommonResponse

- (NSString *)sessionToken;
- (NSString *)username;
- (NSString *)lastLoginDateStr;
- (long)playerCode;

@end
