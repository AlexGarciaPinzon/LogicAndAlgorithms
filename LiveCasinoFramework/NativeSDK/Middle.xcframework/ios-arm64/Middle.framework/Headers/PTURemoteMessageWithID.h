//
//  PTURemoteMessageWithID.h
//  Middle
//
//  Created by hlpa on 03.09.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTURemoteMessage.h"

@interface PTURemoteMessageWithID : PTURemoteMessage

@property (strong, nonatomic, readonly) NSString *dialogID;

@end
