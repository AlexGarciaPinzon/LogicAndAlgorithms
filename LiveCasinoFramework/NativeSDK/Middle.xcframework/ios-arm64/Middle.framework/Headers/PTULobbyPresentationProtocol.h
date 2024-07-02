//
//  PTULobbyPresentationProtocol.h
//  Middle
//
//  Created by vlki on 10/1/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class PTUViewControllerPresentation;

typedef void(^PTULobbyControllerCompletion)(void);

@protocol PTULobbyPresentationProtocol <NSObject>

@optional

- (BOOL)pushOrPresent:(__kindof UIViewController * _Nonnull)viewController; // returns YES when controller was pushed
- (void)present:(__kindof UIViewController * _Nonnull)viewController animated:(BOOL)animated completion:(PTULobbyControllerCompletion _Nonnull)completion;
- (void)dismiss:(__kindof UIViewController * _Nonnull)viewController animated:(BOOL)animated completion:(PTULobbyControllerCompletion _Nonnull)completion;

@required

- (void)showPresentation:(PTUViewControllerPresentation * _Nonnull)presentation
                animated:(BOOL)animated
              completion:(PTULobbyControllerCompletion _Nonnull)shownCompletion;

- (void)closePresentation:(PTUViewControllerPresentation * _Nonnull)presentation
                 animated:(BOOL)animated
               completion:(PTULobbyControllerCompletion _Nonnull)completion;

@end

NS_ASSUME_NONNULL_END
