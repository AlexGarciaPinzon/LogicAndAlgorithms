//
//  PTUURLBuilder.h
//  Middle
//
//  Created by hlpa on 10/1/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Globals.h"

@class PTUMiddleLayerController;
@class PTUFeaturesManager;
@class PTUURLManager;
@class PTEnvironmentSettings;

typedef void(^PTUURLBuilderURLCompletion)(NSURL *, NSError *);

@interface PTUURLBuilder : NSObject

+ (PTUGameScreenShotType)screenshootTypeBySuffixName:(NSString *)suffixName;

- (instancetype)initWithMiddle:(PTUMiddleLayerController *)middle
                      features:(PTUFeaturesManager *)featuresManager
                    urlManager:(PTUURLManager *)urlManager
           environmentSettings:(PTEnvironmentSettings *)environmentSettings;

// TODO: must have completion
- (NSURL *)urlForRelativeLobbyImageWithPath:(NSString *)imagePath;
- (void)urlForRelativePromotionImageWithPath:(NSString *)imagePath completion:(PTUURLBuilderURLCompletion)completion;
- (void)urlForGameIconWithId:(NSString *)gameId type:(PTUGameImageType)type completion:(PTUURLBuilderURLCompletion)completion;
- (void)urlForGameScreenshotWithId:(NSString *)gameId type:(PTUGameScreenShotType)type completion:(PTUURLBuilderURLCompletion)completion;

@end
