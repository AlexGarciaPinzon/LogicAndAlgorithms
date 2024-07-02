//
//  PTLogger.h
//  Tools
//
//  Created by Daniil Mazepin on 9/5/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <os/log.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, PTLoggerFilterRule) {
    PTLoggerFilterRuleIgnore = 1,
    PTLoggerFilterRuleContains
};

typedef NS_ENUM(NSUInteger, PTLoggerTags) {
    PTLoggerTagSDK                      = 0, // SDK configs.
    PTLoggerTagAPIClientToSDK           = 1, // Lobby to SDK.
    PTLoggerTagAPISDKToClient           = 2, // SDK to Lobby.
    PTLoggerTagNetworkSocket            = 3, // Socket state.
    PTLoggerTagNetworkSocketSent        = 4, // Socket sent data.
    PTLoggerTagNetworkSocketReceived    = 5, // Socket resceived data.
    PTLoggerTagGameDownload             = 6, // Download platform / game resources.
    PTLoggerTagGameCommandSent          = 7, // SDK to Game.
    PTLoggerTagGameCommandReceived      = 8, // Game to SDK.
    PTLoggerTagNetworkRestAPIRequest    = 9, // Rest API request.
    PTLoggerTagNetworkRestAPIResponse   = 10 // Rsest API response.
};

@interface PTLogger : NSObject

+ (BOOL)isDebugEnabled;
+ (void)setDebugEnabled:(BOOL)enabled;

+ (void)setFilterByTags:(PTLoggerTags)tags rule:(PTLoggerFilterRule)rule;
+ (void)clearFilterByTags;

+ (void)logSelector:(SEL)selector withParams:(NSArray * _Nullable)params type:(PTLoggerTags)type level:(os_log_type_t)level;
+ (void)logMessage:(NSString * _Nonnull)message type:(PTLoggerTags)type level:(os_log_type_t)level;

+ (NSString *)todaysLogFileFullPath;
+ (void)deletePastWeekLogFiles;
+ (void)startTrackingCrashLogs;

@end

NS_ASSUME_NONNULL_END
