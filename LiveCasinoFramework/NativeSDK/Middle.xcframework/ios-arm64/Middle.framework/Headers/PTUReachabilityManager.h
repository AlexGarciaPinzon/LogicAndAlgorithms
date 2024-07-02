//
//  PTUReachabilityManager.h
//  Middle
//
//  Created by Yurii Dukhovnyi on 5/31/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, PTUNetworkReachabilityState) {
    PTUNetworkReachabilityStateNotReachable,
    PTUNetworkReachabilityStateWiFi,
    PTUNetworkReachabilityStateWAN
};

@class PTUReachabilityManager;

@protocol PTUReachabilityObserver <NSObject>

- (void)reachabilityDidChanged:(PTUReachabilityManager *)reachabilityManager
                     fromState:(PTUNetworkReachabilityState)oldState
                       toState:(PTUNetworkReachabilityState)currentState;
@end

@interface PTUReachabilityManager : NSObject

@property (assign, nonatomic, readonly) PTUNetworkReachabilityState reachabilityState;
@property (assign, nonatomic, readonly, getter=isReachable) BOOL reachable;

- (void)addReachabilityChangingObserver:(id<PTUReachabilityObserver>)observer;
- (void)removeReachabilityChangingObserver:(id<PTUReachabilityObserver>)observer;

@end
