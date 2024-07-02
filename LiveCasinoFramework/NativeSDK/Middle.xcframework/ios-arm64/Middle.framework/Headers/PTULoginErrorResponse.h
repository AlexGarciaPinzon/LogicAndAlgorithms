//
//  PTULoginError.h
//  Middle
//
//  Created by dmgo on 2/20/17.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTULoginErrorResponse : PTUCommonResponse

- (NSString*)message;
- (NSString*)commandName;
- (int)errorCode;
- (long)commandCode;

@end
