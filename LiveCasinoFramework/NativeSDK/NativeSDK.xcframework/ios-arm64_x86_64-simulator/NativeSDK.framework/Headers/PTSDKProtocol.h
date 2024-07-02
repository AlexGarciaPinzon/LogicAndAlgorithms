//
//  PTSDKProtocol.h
//  NativeSDK
//
//  Created by Macbook Pro on 7/17/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTSDKCoreProtocol.h"
#import "PTSDKGameDownloading.h"
#import "PTSDKGameOpenClosing.h"
#import "PTSDKGameStateObservable.h"

#ifndef PTSDKProtocol_h
#define PTSDKProtocol_h

/// Protocol that is used by clients to communicate with sdk.
/// combined from core, game downloading, game open/close and game state observable protocols
@protocol PTSDKProtocol <NSObject, PTSDKCoreProtocol, PTSDKGameDownloading, PTSDKGameOpenClosing, PTSDKGameStateObservable>

@end

#endif /* PTSDKProtocol_h */
