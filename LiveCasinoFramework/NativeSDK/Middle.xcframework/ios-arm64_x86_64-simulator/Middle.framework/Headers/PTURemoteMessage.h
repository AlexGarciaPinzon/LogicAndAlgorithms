//
//  PTURemoteMessage.h
//  Middle
//
//  Created by hlpa on 10/3/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTURemoteMessage: NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@property (copy, nonatomic, readonly) NSString *message;

@end
