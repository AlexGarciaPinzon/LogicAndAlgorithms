//
//  PTUNetworkManager.h
//  Middle
//
//  Created by dmgo on 2/13/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUSocket.h"
#import "PTUOpenApiCommands.h"
#import "PTUNetworkRequests.h"
#import "PTUNetworkAuthentication.h"

@class PTUCommonResponse;
@class PTUNetworkManager;
@class PTUReachabilityManager;
@protocol PTUSDKKitEventsProtocol;

@protocol PTUNetworkManagerDelegate <NSObject>
@optional
- (void)ptuNetworkManagerDidConnect:(PTUNetworkManager *)nm;
- (void)ptuNetworkManagerDidDisonnect:(PTUNetworkManager *)nm;
- (void)ptuNetworkManager:(PTUNetworkManager *)nm didReceiveResponse:(PTUCommonResponse *)response;
- (void)ptuNetworkManager:(PTUNetworkManager *)nm didReceiveJSON:(NSString *)string;
@end


@interface PTUNetworkManager : NSObject

- (instancetype)initWithHost:(NSString *)host
                        port:(uint16_t)port
                         ssl:(BOOL)ssl
                    delegate:(id <PTUNetworkManagerDelegate>)delegate
         reachabilityManager:(PTUReachabilityManager *)reachabilityManager
        sdkKitEventsAnalyzer:(id<PTUSDKKitEventsProtocol>) sdkKitEventsAnalyzer;

- (PTUSocket *)mainSocket;
- (PTUNetworkRequests *)requests;
- (PTUNetworkAuthentication *)authentication;

- (BOOL) isConnected;
- (void) connect;
- (void) disconnect;
- (void) write:(NSString *)string;
- (void) sendMessageWithIdentifier:(NSUInteger)identifier message:(NSDictionary *)message;

@end
