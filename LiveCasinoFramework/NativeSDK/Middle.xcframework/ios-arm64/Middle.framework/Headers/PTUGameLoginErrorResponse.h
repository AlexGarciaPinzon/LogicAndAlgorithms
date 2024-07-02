//
//  PTUGameLoginErrorResponse.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/22/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTUGameLoginErrorResponse : PTUCommonResponse

- (NSString *)message;
- (int)errorCode;
- (long)commandCode;

@end
