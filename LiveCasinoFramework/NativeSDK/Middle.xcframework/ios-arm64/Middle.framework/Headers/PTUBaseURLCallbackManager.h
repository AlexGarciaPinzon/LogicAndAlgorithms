//
//  PTUBaseURLCallbackManager.h
//  Middle
//
//  Created by Oleksandr Khylyk on 11/8/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUURLCallbackAction;

typedef NS_ENUM(NSUInteger, PTUURLActionNavigationPolicy)
{
    PTUURLActionNavigationPolicyCancel,
    PTUURLActionNavigationPolicyAllow
};

@interface PTUBaseURLCallbackManager : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

// TODO: pass formed objects, not dictionaries
- (instancetype)initWithActions:(NSArray <NSDictionary *> *)actionDescriptions
            enabledActionGroups:(NSArray<NSString *> *)enabledActionGroups
            oneActionPerRequest:(BOOL)oneActionAtTime;

- (PTUURLActionNavigationPolicy)performActionsForURL:(NSURL *)url;

- (void)performActions:(NSArray<PTUURLCallbackAction *> *)actions
         urlComponents:(NSURLComponents *)componenets;

@end
