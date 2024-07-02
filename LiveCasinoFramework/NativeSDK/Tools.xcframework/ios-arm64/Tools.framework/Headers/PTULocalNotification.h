//
//  PTULocalNotification.h
//  Middle
//
//  Created by vlki on 9/19/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UNNotification;
@class UILocalNotification;
@class UNNotificationRequest;

typedef NS_ENUM(NSUInteger, PTULocalNotificationTriggerType) {
    PTULocalNotificationTriggerTypeOther = 0,
    PTULocalNotificationTriggerTypeAppNotLaunched
};

extern NSString * const PTULocalNotificationsDeepLinkKey;

@interface PTULocalNotification : NSObject

@property (copy,   nonatomic, readonly) NSString *notificationId;
@property (copy,   nonatomic, readonly) NSString *title;
@property (copy,   nonatomic, readonly) NSString *notificationDescription;
@property (copy,   nonatomic, readonly) NSString *actionData;
@property (strong, nonatomic, readonly) NSDateComponents *timeRangeStartComponents;
@property (strong, nonatomic, readonly) NSDateComponents *timeRangeEndComponents;
@property (assign, nonatomic, readonly) PTULocalNotificationTriggerType triggerType;
@property (assign, nonatomic, readonly) double hours;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary timeFormatter:(NSDateFormatter *)timeFormatter;

- (instancetype)initWithIdentifier:(NSString *)identifier
                             title:(NSString *)title
                       description:(NSString *)description
                        actionData:(NSString *)actionData;

+ (PTULocalNotification *)ptuLocalNotificationFromUNNotificationRequest:(UNNotificationRequest *)unNotificationRequest;
+ (UILocalNotification *)uiLocalNotificationFromPTULocalNotification:(PTULocalNotification *)ptuLocalNotification;
+ (UNNotificationRequest *)unLocalNotificationRequestFromPTULocalNotification:(PTULocalNotification *)ptuLocalNotification API_AVAILABLE(ios(10.0));

@end
