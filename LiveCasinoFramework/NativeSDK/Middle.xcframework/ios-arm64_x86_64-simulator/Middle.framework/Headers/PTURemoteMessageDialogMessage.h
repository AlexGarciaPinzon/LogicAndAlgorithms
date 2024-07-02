//
//  PTURemoteMessageDialogMessage.h
//  Middle
//
//  Created by hlpa on 10/3/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTURemoteMessageWithID.h"

@interface PTURemoteMessageDialogMessage : PTURemoteMessageWithID

@property (strong, nonatomic, readonly) NSString *messageID;
@property (strong, nonatomic, readonly) NSString *displayType;

+ (instancetype)messageWithMessage:(NSString *)message
                          dialogID:(NSString *)dialogID
                         messageID:(NSString *)messageID
                       displayType:(NSString *)displayType;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end
