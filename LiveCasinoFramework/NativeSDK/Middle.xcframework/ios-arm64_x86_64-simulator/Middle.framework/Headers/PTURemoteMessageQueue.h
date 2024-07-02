//
//  PTURemoteMessageQueue.h
//  Middle
//
//  Created by hlpa on 10/3/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTURemoteMessageRealityCheck;
@class PTURemoteMessageQueue;
@class PTURemoteMessage;
@class PTUMiddleLayerController;

@protocol PTURemoteMessageQueueDelegate <NSObject>
@required

- (void)remoteMessageQueueGotMessagesQueued:(PTURemoteMessageQueue *)queue;
- (void)remoteMessageQueue:(PTURemoteMessageQueue *)queue gotImmidiateRealityCheck:(PTURemoteMessageRealityCheck *)realityCheckMessage;
- (void)remoteMessageQueue:(PTURemoteMessageQueue *)queue didDismissMessasgeWithID:(NSString *)messagesID;
- (void)remoteMessageQueueDidDismissAllMessasges:(PTURemoteMessageQueue *)queue;

@end

@interface PTURemoteMessageQueue : NSObject

+ (instancetype)remoteMessageQueueWithMiddle:(PTUMiddleLayerController *)middle;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (void)addObserver:(NSObject<PTURemoteMessageQueueDelegate> *)observer;
- (void)removeObserver:(NSObject<PTURemoteMessageQueueDelegate> *)observer;

- (BOOL)hasRealityCheckMessages;
- (PTURemoteMessage *)popMessage;
- (NSUInteger)messagesCount;

@end
