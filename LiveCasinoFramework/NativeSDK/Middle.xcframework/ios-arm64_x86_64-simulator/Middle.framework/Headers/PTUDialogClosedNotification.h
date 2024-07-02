//
//  PTUDialogClosedNotification.h
//  Middle
//
//  Created by hlpa on 28.08.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTUDialogClosedNotification : PTUCommonResponse

@property (strong, nonatomic, readonly, nonnull) NSString *dialogID;

@end
