//
//  PTUNetworkAuthentication.h
//  Middle
//
//  Created by dmgo on 2/16/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUNetworkManager, PTUDeviceInfo;

@interface PTUNetworkAuthentication : NSObject

- (instancetype)initWithNetworkManager:(PTUNetworkManager *)networkManager;

- (void)endWindowSession:(NSString *)windowSessionId;

- (void)logout:(int)type;
- (void)logoutUms;

@end
