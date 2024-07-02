//
//  PTUPushNotificationMessage.h
//  Middle
//
//  Created by vlki on 9/18/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTURemoteMessage.h"

@interface PTURemoteMessagePushNotification : PTURemoteMessage

@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy, readonly) NSDictionary *pushNotificationUserInfo;

+ (instancetype)messageWithMessage:(NSString *)message title:(NSString *)title userInfo:(NSDictionary *)userInfo;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end
