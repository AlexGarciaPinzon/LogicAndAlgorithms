//
//  PTUCooldownController.h
//  Middle
//
//  Created by Dmitriy Gorevoy on 9/17/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUCoreNetworkController;

@protocol PTUCooldownObserverProtocol<NSObject>

/// @param limit in minutes
/// @param currentValue in seconds
/// @param timeToReset in seconds
- (void)cooldownDidChangeLimit:(double)limit
                  currentValue:(double)currentValue
                   timeToReset:(double)timeToReset;

@end

@interface PTUCooldownController : NSObject

+ (instancetype)controllerWithCoreNetworkController:(PTUCoreNetworkController *)coreNetworkController;

- (void)addObserver:(id<PTUCooldownObserverProtocol>)observer;
- (void)removeObserver:(id<PTUCooldownObserverProtocol>)observer;

@end
