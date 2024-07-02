//
//  PTUGameEngineCanLaunchResult.h
//  Middle
//
//  Created by hlpa on 28/12/2017.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUGameController;

typedef NS_ENUM(NSUInteger, PTUGameEngineCanLaunchResultType)
{
    PTUGameEngineCanLaunchResultTypeWrongEngine,
    PTUGameEngineCanLaunchResultTypeNotInstalled,
    PTUGameEngineCanLaunchResultTypeBlockedByRunningGames,
    PTUGameEngineCanLaunchResultTypeCanLaunch
};

@interface PTUGameEngineCanLaunchResult : NSObject

+ (instancetype)resultWithType:(PTUGameEngineCanLaunchResultType)type blockingGameControllers:(NSArray<PTUGameController *> *)blockingGameControllers;
- (instancetype)init NS_UNAVAILABLE;

@property (assign, nonatomic, readonly) PTUGameEngineCanLaunchResultType result;
@property (copy, nonatomic, readonly) NSArray<PTUGameController *> *blockingGameControllers; // gp: do not remember

@end
