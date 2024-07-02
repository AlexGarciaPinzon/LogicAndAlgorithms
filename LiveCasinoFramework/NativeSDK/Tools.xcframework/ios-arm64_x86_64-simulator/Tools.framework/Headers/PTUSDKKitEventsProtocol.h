//
//  PTUSDKKitEventsProtocol.h
//  Tools
//
//  Created by olbu on 8/19/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTUSDKKitEventsConstants.h"

NS_ASSUME_NONNULL_BEGIN

@protocol PTUSDKKitEventsProtocol <NSObject>

- (void)analizeEvent:(PTUSDKKitEventType)eventType
            withInfo:(nullable NSDictionary *)eventInfo;

/// This func is used to make event to sdk delegate about open game menu.
- (void)analizeEventOpenGameMenuWithGameId:(nonnull NSString *)gameId;

/// This func is used to make event to sdk delegate about open game menu.
- (void)analizeEventGameMenuItemClick:(nullable NSString *)title;

@end

NS_ASSUME_NONNULL_END
