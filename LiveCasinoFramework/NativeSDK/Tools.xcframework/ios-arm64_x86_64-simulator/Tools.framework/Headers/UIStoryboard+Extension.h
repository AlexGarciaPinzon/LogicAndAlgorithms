//
//  UIStoryboard+Extension.h
//  Lobby
//
//  Created by Oleksandr Khylyk on 11/10/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString * const PTUStoryboardLobbyMain      = @"LobbyMain";
static NSString * const PTUStoryboardLobbyGames     = @"LobbyGames";
static NSString * const PTUStoryboardLobbyMore      = @"LobbyMore";
static NSString * const PTUStoryboardLobbyAlerts    = @"LobbyAlerts";
static NSString * const PTUStoryboardLobbyWebviews  = @"LobbyWebviews";

@interface UIStoryboard (Extension)

+ (__kindof UIViewController *)instantiateViewControllerForClass:(Class)aClass;
+ (__kindof UIViewController *)instantiateViewControllerForClass:(Class)aClass withIdentifier:(NSString *)identifier;
+ (__kindof UIViewController *)instantiateViewControllerForClass:(Class)aClass storyboardName:(NSString *)storyboardName;
+ (__kindof UIViewController *)instantiateViewControllerForClass:(Class)aClass storyboardName:(NSString *)storyboardName identifier:(NSString *)identifier;

@end
