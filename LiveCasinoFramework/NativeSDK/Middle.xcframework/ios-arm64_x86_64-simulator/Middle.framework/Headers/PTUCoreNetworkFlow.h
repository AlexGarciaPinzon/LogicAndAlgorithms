//
//  PTUCoreNetworkFlow.h
//  Middle
//
//  Created by Yurii Dukhovnyi on 6/20/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTUCoreNetworkFlowProtocol.h"

@class PTUCoreNetworkOperation, PTUNetworkManager, PTUCoreNetworkLoginFlowModel;
@protocol PTUCoreNetworkOperationDelegate;

typedef void(^PTUCoreNetworkFlowCompletionBlock)(BOOL success, NSError * error, id responseObject);

@interface PTUCoreNetworkFlow : NSObject <PTUCoreNetworkFlowProtocol>

@property (weak, nonatomic, readonly) id<PTUCoreNetworkOperationDelegate> coreNetworkDelegate;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithCoreNetworkDelegate:(id<PTUCoreNetworkOperationDelegate>)coreNetworkDelegate
                        flowCompletionBlock:(PTUCoreNetworkFlowCompletionBlock)flowCompletionBlock;
- (void)startWithQueue:(NSOperationQueue *)queue;

- (void)addOperationsToFlow:(NSArray <NSOperation *> *)operations;
- (void)addOperationToFlow:(NSOperation *)operation;
- (void)completeFlowSucceed:(BOOL)succeed error:(NSError *)error result:(PTUCoreNetworkLoginFlowModel *)result;

@end
