//
//  PTUGameEngineGameAndView.h
//  Middle
//
//  Created by hlpa on 1/18/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PTUGameController;

@interface PTUGameEngineGameAndView : NSObject

@property (strong, nonatomic, readonly, nullable) PTUGameController *game;
@property (strong, nonatomic, readonly, nullable) UIViewController *view;

- (instancetype _Nullable)initWithGame:(PTUGameController * _Nullable)gameController view:(UIViewController * _Nullable)gameViewController NS_DESIGNATED_INITIALIZER;

@end
