//
//  PTUSocket.h
//  Middle
//
//  Created by dmgo on 2/13/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GCDAsyncSocket.h"

@class PTUSocket;

@protocol PTUSocketDelegate <NSObject>

- (void)socketDidConnected:(PTUSocket *)socket;
- (void)socketDidDisconnected:(PTUSocket *)socket;
- (void)socket:(PTUSocket *)socket didReceiveDictionary:(NSDictionary *)dictionary;
- (void)socket:(PTUSocket *)socket didReceiveJSON:(NSString *)string;

@end

@interface PTUSocket : NSObject

- (instancetype) initWithHost:(NSString *)host
                         port:(uint16_t)port
                          ssl:(BOOL)ssl
                     delegate:(id <PTUSocketDelegate>)delegate;

- (GCDAsyncSocket *)socket;
- (void) connect;
- (void) disconnect;
- (BOOL) isConnected;
- (void) write:(NSString *)string;
- (void) sendMessageWithIdentifier:(NSUInteger)identifier message:(NSDictionary *)message;

@end
