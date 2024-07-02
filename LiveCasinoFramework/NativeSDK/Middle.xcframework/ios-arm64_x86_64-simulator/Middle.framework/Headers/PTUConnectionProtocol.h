//
//  PTUConnectionProtocol.h
//  Middle
//
//  Created by vlki on 9/30/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^PTUConnectionCompletion)(void);

@protocol PTUConnectionProtocol <NSObject>

@optional

// Connection methods
- (BOOL)checkIfInternetConnectionOn;
- (void)handleSocketDidConnect;
- (void)handleSocketDidDisconnectSomeGamesShouldStayThroughReconnection:(BOOL)someLaunchedGamesShouldStayThroughReconnection;

- (void)showNoConnectionAlert;
- (void)showErrorMessage:(NSString * _Nonnull)errorMessage completion:(PTUConnectionCompletion _Nullable)completion;
- (void)showGameError:(NSError * _Nonnull)gameError completion:(PTUConnectionCompletion _Nullable)completion;

@end

NS_ASSUME_NONNULL_END
