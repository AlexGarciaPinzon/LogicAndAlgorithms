//
//  PTULobbyRouting.h
//  Lobby
//
//  Created by Daniil Mazepin on 3/2/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^PTULobbyRoutingTransitionCompletion)(void);

@protocol PTULobbyRoutingAlertController <NSObject>

- (void)showAnimated:(BOOL)animated
   embedInNavigation:(BOOL)embedInNavigation
   hideNavigationBar:(BOOL)hideNavigationBar
          completion:(void(^)(void))completion;

- (void)hideAnimated:(BOOL)animated completion:(void(^)(void))completion;

- (void)dismissViewControllerAnimated:(BOOL)flag completion: (void(^)(void))completion;

@end

@interface PTULobbyRouting : NSObject // TODO: move to lobby

@property (weak, nonatomic) __kindof UIViewController *presentedViewController;

// TODO: don't split responsibilities between this and LobbyController
- (void)showAlertController:(UIViewController<PTULobbyRoutingAlertController> *)alertController
          embedInNavigation:(BOOL)embedInNavigation
                   animated:(BOOL)animated
                 completion:(PTULobbyRoutingTransitionCompletion)completion;

- (void)showSingleAlertController:(UIViewController<PTULobbyRoutingAlertController> *)alertController
                         animated:(BOOL)animated
                       completion:(PTULobbyRoutingTransitionCompletion)completion;

- (void)dissmissAlertController:(UIViewController<PTULobbyRoutingAlertController> *)alertController
                     completion:(PTULobbyRoutingTransitionCompletion)completion;

- (void)dissmissAlertAndClearQueue;

///**
// @abstract
// UI blocking operation is abstraction behind interface for app-global actions which should block UI until finished.
// UIBlockingOperationToken is a convenience to access particular blocking operation.
// Blocking operation has three states: idle, processing and failed. Finished blocking operation are released immidiately.
// */
//typedef NSUUID *UIBlockingOperationToken;
//
///**
// Will create UI blocking operation, put it in idle state and return its token.
// @param title specifies title common for all states. Title accompanies all messages when presented but doesn't affect whether any messages are present.
// @return Returns UIBlockingOperationToken representing started blocking operation.
// */
//- (UIBlockingOperationToken)uiBlockingOperationStartWithTitle:(NSString *)title;
//
///**
// @abstract
// Will put UI blocking operation matching given blockingOperationId in processing state.
// @param blockingOperationToken represents blocking operation to alter.
// @param processingMessage specifies message to present while operation is in processing state. No message is presented when processingMessage is nil.
// @param animationCompletion block will be called upon completion of all animations necessary to present blocking operation in processing. If no animations needed animationCompletion will be called synchronously.
// */
//- (void)uiBlockingOperationWithId:(UIBlockingOperationToken)blockingOperationToken
//       startProcessingWithMessage:(NSString *)processingMessage
//              animationCompletion:(void (^)(void))animationCompletion;
//
///**
// @abstract
// Will put UI blocking operation matching given blockingOperationId in failed state.
// @param blockingOperationToken represents blocking operation to alter.
// @param errorMessage specifies errorMessage to present to user. If errorMessage is nil no message will be presented.
// @param retryButtonTitle specifies retry button title. Retry button is not presented when retryButtonTitle is nil.
// @param retryBlock specifies block called when user presses on retry button. Retry button is not presented when retryBlock is nil.
// @param cancelButtonTitle specifies cancel button title. Cancel button is not presented when cancelButtonTitle is nil.
// @param cancelBlock specifies block called when user presses on cancel button. Cancel button is not present when cancelBlock is nil.
// @param animationCompletion block will be called upon completion of all animations necessary to present blocking operation in failed. If no animations needed animationCompletion will be called synchronously.
// */
//- (void)uiBlockingOperationWithId:(UIBlockingOperationToken)blockingOperationToken
//             failWithErrorMessage:(NSString *)errorMessage
//                 retryButtonTitle:(NSString *)retryButtonTitle
//                       retryBlock:(void (^)(UIBlockingOperationToken))retryBlock
//                cancelButtonTitle:(NSString *)cancelButtonTitle
//                      cancelBlock:(void (^)(UIBlockingOperationToken))cancelBlock
//              animationCompletion:(void (^)(void))animationCompletion;
///**
// @abstract
// Will finish UI blocking operation matching given blockingOperationId removing all of its own UI and stopping blocking the rest of UI.
// @param blockingOperationToken represents blocking operation to finish.
// @param animationCompletion block will be called upon completion of all animations necessary to end blocking operation. If no animations needed animationCompletion will be called synchronously.
// @discussion
// UI may still be blocked if other UI blocking operations are present.
// */
//- (void)uiBlockingOperationWithId:(UIBlockingOperationToken)blockingOperationToken
//    finishWithAnimationCompletion:(void (^)(void))animationCompletion;

@end
