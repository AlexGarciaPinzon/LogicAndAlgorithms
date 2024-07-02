//
//  NSTimer+Extension.h
//  Lobby
//
//  Created by Oleksandr Khylyk on 11/23/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Extension)

+ (instancetype)ptuScheduledTimerWithTimeInterval:(NSTimeInterval)timeInterval owner:(id)owner repeats:(BOOL)repeats block:(void(^)(id owner))block;

- (void)resumeTimer;
- (void)resumeTimerImmediately:(BOOL)immediately;
- (void)suspendTimer;

@end
