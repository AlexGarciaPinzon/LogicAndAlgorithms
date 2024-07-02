//
//  PTUDeepLinkingURLCallbackManager.h
//  Middle
//
//  Created by Oleksandr Khylyk on 11/14/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUBaseURLCallbackManager.h"

extern NSString * const PTUDeepLinkingURLCallbackManagerActionGroup;

@protocol PTUDeepLinkingURLCallbackManagerDelegate <NSObject>
@required

- (void)deepLinkingURLCallbackOpenScreenWithId:(NSString *)deepLinkingId params:(NSDictionary *)params;
- (void)deepLinkingURLCallbackOpenAppWithId:(NSString *)appId link:(NSString *)link;
- (void)deepLinkingURLCallbackOpenGameWithIdentifier:(NSString *)gameId;

@end

@interface PTUDeepLinkingURLCallbackManager : PTUBaseURLCallbackManager

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithActions:(NSArray <NSDictionary *> *)actionDescriptions
            enabledActionGroups:(NSArray<NSString *> *)enabledActionGroups
            oneActionPerRequest:(BOOL)oneActionAtTime
                       delegate:(NSObject<PTUDeepLinkingURLCallbackManagerDelegate> *)delegate;

@end
