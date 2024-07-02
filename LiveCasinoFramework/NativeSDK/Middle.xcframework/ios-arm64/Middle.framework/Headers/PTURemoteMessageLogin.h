//
//  PTURemoteMessageLogin.h
//  Middle
//
//  Created by hlpa on 10/3/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTURemoteMessage.h"

@interface PTURemoteMessageLogin: PTURemoteMessage

+ (instancetype)messageWithMessage:(NSString *)message;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end
