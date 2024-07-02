//
//  PTUTimeController.h
//  Middle
//
//  Created by hlpa on 21.06.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

@class PTUCoreNetworkController;
@class PTUMiddleLayerController;

#import <Foundation/Foundation.h>

@protocol PTUTimeObserverProtocol<NSObject>

@optional

- (void)clockDateDidChange:(NSDate *)clockDate; // date to show as current time, may be local or server
- (void)loginTimeDidChangeToValue:(NSTimeInterval)loginTimeOffset valid:(BOOL)valid; // login time offset relative to 'clockDate', don't show when not 'valid'
- (void)serverTimeStampDidChange:(NSTimeInterval)value;
- (void)loginTimeStampDidChange:(NSTimeInterval)value;

@end

@interface PTUTimeController : NSObject

@property (assign, nonatomic, readonly) NSTimeInterval serverTimeStamp;
@property (assign, nonatomic, readonly) NSTimeInterval loginTimeStamp;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (void)addObserver:(id<PTUTimeObserverProtocol>)observer;
- (void)removeObserver:(id<PTUTimeObserverProtocol>)observer;

- (void)requestServerTime;

- (NSDate *)clockDate; // date to show as current time, may be local or server
- (void)getLoginTimeOffsetToClockDate:(NSTimeInterval * const)outOffset valid:(BOOL * const)outValid; // login time offset relative to 'clockDate', don't show when not 'valid'

@end
