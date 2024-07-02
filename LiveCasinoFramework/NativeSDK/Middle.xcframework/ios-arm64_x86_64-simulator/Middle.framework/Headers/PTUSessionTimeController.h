//
//  PTUSessionTimeController.h
//  Middle
//
//  Created by setk on 7/24/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PTUSessionTimeObserverProtocol<NSObject>

- (void)sessionTimeDidChangeWithSessionTimeStartDate:(NSDate *)startDate currentDate:(NSDate *)currentDate;

@end

@interface PTUSessionTimeController : NSObject

@property (nonatomic, strong, readonly) NSDate *startSessionDate;

- (void)addObserver:(id<PTUSessionTimeObserverProtocol>)observer;
- (void)removeObserver:(id<PTUSessionTimeObserverProtocol>)observer;

@end
