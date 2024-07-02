//
//  PTUWaitingMessagesResponse.h
//  Middle
//
//  Created by Daniil Mazepin on 2/28/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@class PTURemoteMessageLogin;
@class PTURemoteMessageAlert;
@class PTURemoteMessageDialog;
@class PTURemoteMessageDialogMessage;
@class PTUEnhancedMessage;

@interface PTUWaitingMessagesResponse : PTUCommonResponse

@property (copy, nonatomic, readonly) NSArray <PTURemoteMessageLogin *> *waitingLogins;
@property (copy, nonatomic, readonly) NSArray <PTURemoteMessageAlert *> *waitingAlerts;
@property (copy, nonatomic, readonly) NSArray <PTURemoteMessageDialog *> *waitingDialogs;
@property (copy, nonatomic, readonly) NSArray <PTURemoteMessageDialogMessage *> *waitingDialogMessages;
@property (copy, nonatomic, readonly) NSArray <PTUEnhancedMessage *> *waitingToasterMessages;

@end
