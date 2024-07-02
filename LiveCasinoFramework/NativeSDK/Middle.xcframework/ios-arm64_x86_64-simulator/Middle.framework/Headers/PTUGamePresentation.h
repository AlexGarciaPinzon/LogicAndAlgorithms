//
//  PTUGamePresentation.h
//  Middle
//
//  Created by hlpa on 10.07.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <Foundation/Foundation.h>

@protocol PTUGameViewControllerProtocol;

@class PTUGameController;
@class PTUGamesController;

@interface PTUGamePresentation : NSObject

@property (strong, nonatomic, readonly) PTUGameController *game;
@property (strong, nonatomic, readonly) UIViewController<PTUGameViewControllerProtocol> *view;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)presentationWithGame:(PTUGameController *)game view:(UIViewController<PTUGameViewControllerProtocol> *)view owner:(PTUGamesController *)owner;

- (void)uiFocus;

@end
