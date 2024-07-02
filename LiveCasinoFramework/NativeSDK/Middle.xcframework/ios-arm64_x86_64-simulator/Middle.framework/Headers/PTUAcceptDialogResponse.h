//
//  PTUAcceptDialogResponse.h
//  Middle
//
//  Created by dmgo on 2/22/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

typedef NS_ENUM(NSInteger, PTUAcceptDialogType)
{
    PTUAcceptDialogTypeSingleButton = 0,
    PTUAcceptDialogTypeAcceptDecline
};

@interface PTUAcceptDialogResponse : PTUCommonResponse

@property (copy, nonatomic, readonly) NSString *message;
@property (copy, nonatomic, readonly) NSString *dialogId;
@property (assign, nonatomic, readonly) PTUAcceptDialogType dialogType;
@property (assign, nonatomic, readonly) BOOL shouldShowGameSelectionDialog;

@end
