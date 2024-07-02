//
//  PTUNGMAutoplayLimitsInfo.h
//  NativeClientGames
//
//  Created by hlpa on 2/12/2017.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUNGMAutoplayLimitsInfo : NSObject

- (instancetype)initWithTotalLossLimit:(uint64_t)totalLossLimit
                       stopOnSingleWin:(BOOL)stopOnSingleWin
                        singleWinLimit:(uint64_t)singleWinLimit
                      stopOnJackpotWin:(BOOL)stopOnJackpotWin;

@property (assign, nonatomic, readonly) uint64_t totalLossLimit;
@property (assign, nonatomic, readonly) BOOL stopOnSingleWin;
@property (assign, nonatomic, readonly) uint64_t singleWinLimit;
@property (assign, nonatomic, readonly) BOOL stopOnJackpotWin;

@end
