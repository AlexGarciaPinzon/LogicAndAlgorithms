//
//  PTULocalNotificationsManager.h
//  Middle
//
//  Created by vlki on 9/19/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTULocalNotification;
@class UNNotificationRequest;

@interface PTULocalNotificationsManager : NSObject

- (instancetype)initWithNotificationsDescription:(NSDictionary *)notificationsDescription;

+ (void)registerLocalNotificationsUsage;
- (void)registerLocalNotifications;
- (void)cancelAllScheduledLocalNotifications;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end
