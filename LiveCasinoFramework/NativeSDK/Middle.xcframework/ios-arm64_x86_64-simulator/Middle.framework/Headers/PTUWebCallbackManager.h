//
//  PTUWebCallbackManager.h
//  Middle
//
//  Created by hlpa on 13/10/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUBaseURLCallbackManager.h"

@class PTUWebViewController;

@protocol PTUWebCallbackManagerDelegate <NSObject>

@optional

- (void)webURLCallbackAutologinWithUsername:(NSString *)username
                                   password:(NSString *)password
                          redirectToDeposit:(BOOL)redirectToDeposit;

- (void)webURLCallbackAutologinWithUsername:(NSString *)username
                        authenticationToken:(NSString *)authenticationToken
                              externalToken:(NSString *)externalToken
                         lastLoginTimestamp:(NSUInteger)lastLoginTimestamp;

- (void)webURLCallbackAutologinWithUsername:(NSString *)username
                        authenticationToken:(NSString *)authenticationToken
                              externalToken:(NSString *)externalToken
                                     keepUI:(BOOL)keepUI;

- (void)webURLCallbackAutologinWithUsername:(NSString *)username
                                   password:(NSString *)password
                                 customerID:(NSString *)customerID
                                 stayOnPage:(BOOL)stayOnPage
                             simplifiedFlow:(BOOL)simplifiedFlow
                  biometricalAllowedMethods:(NSString *)allowedMethods;

- (void)webURLCallbackSimplifiedLoginWithUsername:(NSString *)username;

- (void)webURLCallbackExternalLoginEnableBiomAuthWithPin:(NSString *)pin;
- (void)webURLCallbackExternalLoginBiometricalAuthSetupFinalizeWithResult:(BOOL)success;
- (void)webURLCallbackExternalLoginBiometricalAuthStartProcess;
- (void)webURLCallbackExternalLoginAuthReset;

- (void)webURLCallbackSuccessDepositFirstTime:(BOOL)firstTime;
- (void)webURLCallbackDismiss;
- (void)webURLCallbackOpenApplicationWithURL:(NSURL *)url;
- (void)webURLCallbackLaunchApplication;
- (void)webURLCallbackLogoutUser;
- (void)webURLCallbackOpenGameWithIdentifier:(NSString *)gameId;
- (void)webURLCallbackChangeTitle:(NSString *)title;

- (void)webURLCallbackOpenFacebookRegistration;

@end

@interface PTUWebCallbackManager : PTUBaseURLCallbackManager

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithActions:(NSArray <NSDictionary *> *)actionDescriptions
            enabledActionGroups:(NSArray<NSString *> *)enabledActionGroups
            oneActionPerRequest:(BOOL)oneActionAtTime
                       delegate:(NSObject<PTUWebCallbackManagerDelegate> *)delegate;

@end
