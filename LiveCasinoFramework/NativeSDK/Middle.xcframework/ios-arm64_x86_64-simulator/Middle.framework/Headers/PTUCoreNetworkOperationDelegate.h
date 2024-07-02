//
//  PTUCoreNetworkOperationDelegate.h
//  Middle
//
//  Created by Yurii Dukhovnyi on 6/22/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUCoreNetworkOperation, PTUCoreNetworkOperationServerMessage;

@protocol PTUCoreNetworkOperationDelegate <NSObject>

- (void)coreNetworkOperation:(PTUCoreNetworkOperation *)operation sendServerMessage:(PTUCoreNetworkOperationServerMessage *)serverMessage;

- (void)coreNetworkOperation:(PTUCoreNetworkOperation *)operation observeServerMessage:(NSInteger)serverMessageIdentifier;
- (void)coreNetworkOperation:(PTUCoreNetworkOperation *)operation removeObserverServerMessage:(NSInteger)serverMessageIdentifier;

@end
