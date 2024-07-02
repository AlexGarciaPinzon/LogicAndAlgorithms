//
//  PTSDKGameDownloading.h
//  NativeSDK
//
//  Created by Macbook Pro on 7/24/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTSDKEnums.h"
#import "PTSDKGameInfoProtocol.h"

#ifndef PTSDKGameDownloading_h
#define PTSDKGameDownloading_h

/// sdk game downloading methods: download game, cancel game download, remove game, fetch game download state
@protocol PTSDKGameDownloading <NSObject>

/// returns current game download state
- (PTDownloadState)fetchDownloadStateForGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo
                                      outSuccess:(nonnull BOOL *)outSuccess;

/// Downloads and stores game resources
- (BOOL)downloadGameResourcesForGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo;

/// Cancel game downloading.
- (BOOL)cancelDownloadGameResourcesForGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo;

/// removes stored game resources
- (BOOL)removeGameForGameInfo:(nonnull id<PTSDKGameInfoProtocol>)gameInfo;

@end

#endif /* PTSDKGameDownloading_h */
