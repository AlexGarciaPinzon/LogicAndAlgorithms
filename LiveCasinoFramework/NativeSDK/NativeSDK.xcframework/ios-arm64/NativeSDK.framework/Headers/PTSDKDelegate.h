//
//  PTSDKDelegate.h
//  NativeSDK
//
//  Created by Macbook Pro on 7/17/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTSDKErrorProtocol.h"
#import "PTSDKEventConstants.h"
#import "PTSDKEnums.h"

#ifndef PTSDKDelegate_h
#define PTSDKDelegate_h

@class PTError;

/// sdk delegate methods
@protocol PTSDKDelegate <NSObject>
@required

/// Native SDK will utilize delegate that provides game-client communication and can be set during the initialization call.
/// PTSDKDelegate will use next calls in order to provide feedback to client about the current game state.
- (void)gameClosed:(nonnull id<PTSDKGameInfoProtocol>)closedGame
        withReason:(PTSDKClosedGameReason)reason
             error:(nullable id<PTSDKErrorProtocol>)error
       anotherGame:(nullable id<PTSDKGameInfoProtocol>)anotherGame
              mode:(PTSDKGameMode)gameMode;

/// Url is selected
- (void)didSelectUrl:(nonnull NSString *)url
       inGameWithGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo;

/// external page is selected
- (void)didSelectExternalPage:(nonnull NSString *)page
                inGameWithGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo;

/// Error received while SDK processing.
- (void)didReceiveError:(nullable id<PTSDKErrorProtocol>)error;

/// This func has to handle url from sdk which is going to be opened in sdk side.
- (nullable NSURL *)openRequestedURL:(nonnull NSString *)requestedUrl;

/// analyze events
- (void)analyzeEvent:(PTSDKEventType)eventType
            withInfo:(nullable NSDictionary *)eventInfo;

/// New sound state received
- (void)didChangeSoundState:(BOOL)newSoundState;

/// Set orientationMask to the root controller of your application. SDK games has to work only in specific orientation and lobby side may
/// affects on SDK if lobby root controller will have different orientation type. Also shouldAutoRotate func has to return true.
- (void)setSupportedOrientations:(UIInterfaceOrientationMask)orientationMask;

@optional

/// Return here an instance of WKWebView class if you want SDK to show your web view
/// otherwise SDK will use default own web view.
- (nullable WKWebView *)webViewOfNativeSDK;

/// In case SDK makes PAS requests it asks additional parameters that will be added to Qwery request.
- (nullable NSArray<NSURLQueryItem *>*)pasRequstAdditionalParametersForURL:(nonnull NSString *)urlString;

@end

#endif /* PTSDKDelegate_h */
