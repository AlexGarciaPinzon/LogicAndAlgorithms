//
//  PTUHTML5GameEngine.h
//  HTML5Games
//
//  Created by Daniil Mazepin on 3/16/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

@import Foundation;

@import Middle.PTUGameEngine;
#import <platformUI/platformUI-Swift.h>

#pragma mark - PTUHTML5GameEngine

@interface PTUHTML5GameEngine : NSObject <PTUGameEngine>

/// Platfrom is responsiable for showing UI over game and handle user/game actions.
@property (strong, nonatomic, readonly, nullable) Platform *platfrom;

- (nonnull UIViewController *)kriseWebViewControllerWithURL:(nonnull NSURL *)url;
- (void)notifyBaseDownloadedForDownloadedGames:(NSArray<NSString *> *_Nullable)gameIdentifiers;
- (void)sendFeatureBoughtNotification;

@end
