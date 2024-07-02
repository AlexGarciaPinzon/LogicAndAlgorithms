//
//  PTURemoteMessageRealityCheck.h
//  Middle
//
//  Created by hlpa on 10/3/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTURemoteMessageWithID.h"

@class PTUMiddleLayerController;
@class PTURealityCheckResponse;

@interface PTURemoteMessageRealityCheck : PTURemoteMessageWithID

@property (assign, nonatomic, readonly) BOOL ingameCheck;

+ (instancetype)fromRealityCheckResponse:(PTURealityCheckResponse *)realityCheckResponse
                             ingameCheck:(BOOL)ingameCheck
                   middleLayerController:(PTUMiddleLayerController *)middleLayerController;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (void)accept:(BOOL)accept;

@end
