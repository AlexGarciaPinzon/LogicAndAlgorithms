//
//  PTURemoteMessageBonusDetails.h
//  Middle
//
//  Created by hlpa on 10/3/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTURemoteMessage.h"
#import "PTUResourceGame.h"
#import "PTUResourceGames.h"

@class PTUBonusDetailsResponse;
@class PTUGamesController;

@interface PTURemoteMessageBonusDetails : PTURemoteMessage

+ (instancetype)fromBonusDetailsResponse:(PTUBonusDetailsResponse *)bonusDetailsResponse
                        allGamesResource:(PTUResourceGames * const)allGamesResource;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@property (strong, nonatomic) PTUResourceGames * gameResources;

@end
