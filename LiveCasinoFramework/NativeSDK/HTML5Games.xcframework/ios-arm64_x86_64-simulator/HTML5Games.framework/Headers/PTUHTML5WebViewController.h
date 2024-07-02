//
//  PTUHTML5GameViewController.h
//  HTML5Games
//
//  Created by Daniil Mazepin on 3/17/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

@import UIKit;

#import "PTUGameIntegrationInterface+ToClientPlatform.h"

@class PTUHTML5WebViewController;
@class PTUCPNativeGameIntegrationInterface;

@protocol WKNavigationDelegate;
@protocol PTULobbyController;

@protocol PTUHTML5WebViewControllerDelegate <NSObject>
@required

- (void)html5WebViewControllerViewIsReady:(PTUHTML5WebViewController *)viewController;

@end

@interface PTUHTML5WebViewController : UIViewController <PTUGameIntegrationInterfaceToClientPlatform>

+ (instancetype)controllerWithDelegate:(id<PTUHTML5WebViewControllerDelegate, WKNavigationDelegate>)delegate;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;

- (void)setClientPlatformInterfaceCPNativeOnInit:(PTUCPNativeGameIntegrationInterface *)integrationInterface;

- (void)loadRequest:(NSURLRequest *)request;
- (void)reload;

- (void)evaluateJs:(NSString *)messageString;

/// Function is needed to clean some required resources from the memory.
/// - to call function 'removeScriptMessageHandlerForName' from webView.configuration.userContentController
- (void)cleanResources;

@end
