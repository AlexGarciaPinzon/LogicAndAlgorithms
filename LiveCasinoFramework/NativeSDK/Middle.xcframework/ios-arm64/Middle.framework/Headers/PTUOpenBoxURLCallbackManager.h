//
//  PTUOpenBoxURLCallbackManager.h
//  Middle
//
//  Created by vlki on 12/12/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUWebCallbackManager.h"

@protocol PTUOpenBoxURLCallbackManagerDelegate <NSObject>

- (void)openWebPageInNewScreen:(NSURL *)url;

@end

extern NSString * const PTUOpenBoxURLCallbackManagerActionGroup;

@interface PTUOpenBoxURLCallbackManager : PTUBaseURLCallbackManager

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithActions:(NSArray <NSDictionary *> *)actionDescriptions
            enabledActionGroups:(NSArray<NSString *> *)enabledActionGroups
            oneActionPerRequest:(BOOL)oneActionAtTime
                       delegate:(NSObject<PTUOpenBoxURLCallbackManagerDelegate, PTUWebCallbackManagerDelegate> *)delegate;

@end
