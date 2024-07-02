//
//  PTUURLCallbackManager.h
//  Middle
//
//  Created by Oleksandr Khylyk on 11/8/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUBaseURLCallbackManager.h"

@protocol PTUAlertsURLCallbackManagerDelegate <NSObject>

- (void)alertURLCallbackOpenGameWithIdentifier:(NSString *)gameId;

@end

extern NSString * const PTUAlertsURLCallbackManagerActionGroup;

@interface PTUAlertsURLCallbackManager : PTUBaseURLCallbackManager

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithActions:(NSArray <NSDictionary *> *)actionDescriptions
            enabledActionGroups:(NSArray<NSString *> *)enabledActionGroups
            oneActionPerRequest:(BOOL)oneActionAtTime
                       delegate:(NSObject<PTUAlertsURLCallbackManagerDelegate> *)delegate;


@end
