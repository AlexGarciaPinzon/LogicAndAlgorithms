//
//  PTUCasinoAlertNotification.h
//  Middle
//
//  Created by dmgo on 4/5/17.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTUCasinoAlertNotification : PTUCommonResponse

@property (nonatomic, strong, readonly) NSString *message;
@property (nonatomic, strong, readonly) NSArray *params;
@property (nonatomic, assign, readonly) int errorCode;

@end
