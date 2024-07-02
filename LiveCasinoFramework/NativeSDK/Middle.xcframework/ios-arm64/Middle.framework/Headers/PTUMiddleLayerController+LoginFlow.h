//
//  PTUMiddleLayerController+LoginFlow.h
//  Middle
//
//  Created by vlki on 8/15/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResourceGame.h"
#import "PTUMiddleLayerController.h"

@class PTUCoreNetworkLoginFlowModel;

@interface PTUMiddleLayerController (LoginFlow)

- (id<PTUCoreNetworkFlowProtocol>)executeLoginFlowWithUserName:(NSString *)userName
                                                      password:(NSString *)password
                                                deviceBlackBox:(NSString *)deviceBlackBox
                                   termsOfUseNotificationBlock:(PTUMiddleLayerControllerTermsOfUseBlock)termsOfUseNotificationBlock
                               changePasswordNotificationBlock:(PTUMiddleLayerControllerChangePasswordBlock)changePasswordNotificationBlock
                                               completionBlock:(PTUMiddleLayerControllerSuccessErrorCompletion)completionBlock;

- (id<PTUCoreNetworkFlowProtocol>)executeLoginFlowWithUserName:(NSString *)userName
                                                      password:(NSString *)password
                                                simplifiedFlow:(BOOL)simplifiedFlow
                                                deviceBlackBox:(NSString *)deviceBlackBox
                                   termsOfUseNotificationBlock:(PTUMiddleLayerControllerTermsOfUseBlock)termsOfUseNotificationBlock
                               changePasswordNotificationBlock:(PTUMiddleLayerControllerChangePasswordBlock)changePasswordNotificationBlock
                                               completionBlock:(PTUMiddleLayerControllerSuccessErrorCompletion)completionBlock;

- (id<PTUCoreNetworkFlowProtocol>)executeLoginFlowWithUserName:(NSString *)userName
                                           authenticationToken:(NSString *)authenticationToken
                                                 externalToken:(NSString *)externalToken
                                            lastLoginTimestamp:(NSUInteger)lastLoginTimestamp
                                   termsOfUseNotificationBlock:(PTUMiddleLayerControllerTermsOfUseBlock)termsOfUseNotificationBlock
                               changePasswordNotificationBlock:(PTUMiddleLayerControllerChangePasswordBlock)changePasswordNotificationBlock
                                               completionBlock:(PTUMiddleLayerControllerSuccessErrorCompletion)completionBlock;

- (id<PTUCoreNetworkFlowProtocol>)executeCasinoLoginFlowWithUserName:(NSString *)userName
                                                            password:(NSString *)password
                                                        sessionToken:(NSString *)sessionToken
                                                     completionBlock:(PTUMiddleLayerControllerSuccessErrorCompletion)completionBlock;

- (void)reloginWithDeviceBlackBox:(NSString *)deviceBlackBox
                       completion:(PTUMiddleLayerControllerSuccessErrorCompletion)completion;

- (BOOL)isReloginInProgress;

/// This func will load all waiting messages and notify about result to observers.
- (void)loadWaitingMessages;

@end
