//
//  PTUGameLaunchRecipe.h
//  Middle
//
//  Created by hlpa on 9/1/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTUResourceGame.h"

@protocol PTUGameEngine;

@class PTUGameEngineCanLaunchResult;

typedef NS_ENUM(NSUInteger, PTUGameLaunchRecipeType)
{
    PTUGameLaunchRecipeTypeSuccess,
    PTUGameLaunchRecipeTypeNoEngine,
    PTUGameLaunchRecipeTypeMultipleGamesPolicy,
    PTUGameLaunchRecipeTypeNoEngineForGivenMultipleGamesPolicy,
    PTUGameLaunchRecipeTypeNoInternetConnection
};

@interface PTUGameLaunchRecipe : NSObject

+ (instancetype)recipeWithType:(PTUGameLaunchRecipeType)type;
+ (instancetype)recipeWithType:(PTUGameLaunchRecipeType)type
                  gameResource:(PTUResourceGame *)gameResource
                   engineToUse:(id<PTUGameEngine>)engineToUse
               canLaunchResult:(PTUGameEngineCanLaunchResult *)canLaunchResult
             replaceOtherGames:(BOOL)replaceOtherGames
     replaceSameOnOtherEngines:(BOOL)replaceSameGamesOnOtherEngines
       replaceSameOnSameEngine:(BOOL)replaceSameGameOnSameEngine;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@property (assign, nonatomic, readonly) PTUGameLaunchRecipeType type;
@property (strong, nonatomic, readonly) PTUResourceGame *gameResource;
@property (strong, nonatomic, readonly) id<PTUGameEngine> gameEngine;
@property (strong, nonatomic, readonly) PTUGameEngineCanLaunchResult *canLaunchResult;
@property (assign, nonatomic, readonly) BOOL replaceOtherGames;
@property (assign, nonatomic, readonly) BOOL replaceSameGamesOnSameEngine;
@property (assign, nonatomic, readonly) BOOL replaceSameGamesOnOtherEngines;

@end
