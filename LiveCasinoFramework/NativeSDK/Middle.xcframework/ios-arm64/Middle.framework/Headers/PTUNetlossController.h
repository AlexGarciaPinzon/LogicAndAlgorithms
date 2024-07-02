//
//  PTUNetlossController.h
//  Middle
//
//  Created by Dmitriy Gorevoy on 9/17/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUCoreNetworkController;

@protocol PTUNetlossObserverProtocol<NSObject>

- (void)netlossDidChange:(double)value;

@end

@interface PTUNetlossController : NSObject

+ (instancetype)controllerWithCoreNetworkController:(PTUCoreNetworkController *)coreNetworkController;

- (void)spinFinished;

- (void)addObserver:(id<PTUNetlossObserverProtocol>)observer;
- (void)removeObserver:(id<PTUNetlossObserverProtocol>)observer;

@end
