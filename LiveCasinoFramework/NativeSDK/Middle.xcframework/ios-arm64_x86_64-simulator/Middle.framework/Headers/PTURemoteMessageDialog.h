//
//  PTURemoteMessageDialog.h
//  Middle
//
//  Created by hlpa on 10/3/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTURemoteMessageWithID.h"

@class PTUDialogResponse;
@class PTUAcceptDialogResponse;

typedef NS_ENUM(NSInteger, PTURemoteMessageDialogType)
{
    PTURemoteMessageDialogTypeSingleButton = 0,
    PTURemoteMessageDialogTypeAcceptDecline,
    PTURemoteMessageDialogTypeContinueLeave
};

@interface PTURemoteMessageDialog : PTURemoteMessageWithID

@property (assign, nonatomic, readonly) PTURemoteMessageDialogType dialogType;
@property (assign, nonatomic, readonly) BOOL shouldShowGameSelectionDialog;

+ (instancetype)fromDialogResponse:(PTUDialogResponse *)dialogResponse;
+ (instancetype)fromAcceptDialogResponse:(PTUAcceptDialogResponse *)acceptDialogResponse;
+ (instancetype)messageWithMessage:(NSString *)message
                          dialogID:(NSString *)dialogID
                        dialogType:(PTURemoteMessageDialogType)dialogType
     shouldShowGameSelectionDialog:(BOOL)shouldShowGameSelectionDialog;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end
