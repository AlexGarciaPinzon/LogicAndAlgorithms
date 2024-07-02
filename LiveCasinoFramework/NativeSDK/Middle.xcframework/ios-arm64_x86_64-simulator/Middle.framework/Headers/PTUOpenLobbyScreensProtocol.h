//
//  PTUOpenLobbyScreensProtocol.h
//  Middle
//
//  Created by vlki on 9/30/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^PTULobbyControllerTermsCallBackBlock)(BOOL accepted);

@protocol PTUOpenLobbyScreensProtocol <NSObject>

@optional

- (void)openSearch;
- (void)openSearchScreenWithInitialSearchText:(NSString * _Nonnull)keyString;
- (void)openOpenBoxWebControllerWithURL:(NSURL * _Nonnull)url embedInNavigation:(BOOL)embedInNavigation;
- (void)openChat;
- (void)showVirtualCard;
- (void)showWebViewController:(UIViewController *)webViewController embedInNavigation:(BOOL)embedInNavigation;
- (void)showTermsOfConditionsWithURL:(NSURL *)url callBackBlock:(PTULobbyControllerTermsCallBackBlock)callBackBlock;

@end

NS_ASSUME_NONNULL_END
