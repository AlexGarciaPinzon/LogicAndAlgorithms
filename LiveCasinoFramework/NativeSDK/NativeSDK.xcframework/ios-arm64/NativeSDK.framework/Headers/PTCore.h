//
//  PTCore.h
//  NativeSDK
//
//  Created by Macbook Pro on 7/16/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Middle/Middle.h>
#import "PTSDKProtocol.h"
#import "PTSDKErrorProtocol.h"
#import "PTSDKEnvironmentSettings.h"
#import "PTSDKBrandSettings.h"
#import "PTSDKLiveCasinoSettings.h"

NS_ASSUME_NONNULL_BEGIN

/// Entry point for using sdk
@interface PTSDK : NSObject

/// Initializes sdk shared instance. this method should be called before using sdk
/// @param sdkKey Licensee unique sdk key. This key has to be provided with sdk
/// @param environmentSettings Settings of enviroments. To read more info navigate to class description.
/// @param brandSettings Brand settings. To read more info navigate to class description.
/// @param liveCasinoSettings Live casino settings.
/// @param delegate Delegate for game-client communication
/// @param completion Completion for initialization
+ (void)setupWithSDKKey:(nonnull NSString *)sdkKey
    environmentSettings:(nonnull PTSDKEnvironmentSettings *)environmentSettings
          brandSettings:(nonnull PTSDKBrandSettings *)brandSettings
     liveCasinoSettings:(nonnull PTSDKLiveCasinoSettings *)liveCasinoSettings
               delegate:(nullable id<PTSDKDelegate>)delegate
             completion:(void(^_Nullable)(id<PTSDKErrorProtocol> _Nullable error))completion;

/// Initializes sdk shared instance. this method should be called before using sdk
/// @param sdkKey Licensee unique sdk key. This key has to be provided with sdk
/// @param environmentSettings Settings of enviroments. To read more info navigate to class description.
/// @param brandSettings Brand settings. To read more info navigate to class description.
/// @param liveCasinoSettings Live casino settings.
/// @param delegate Delegate for game-client communication
/// @param completion Completion for initialization
+ (void)relaunchWithSDKKey:(nonnull NSString *)sdkKey
       environmentSettings:(nonnull PTSDKEnvironmentSettings *)environmentSettings
             brandSettings:(nonnull PTSDKBrandSettings *)brandSettings
        liveCasinoSettings:(nonnull PTSDKLiveCasinoSettings *)liveCasinoSettings
                  delegate:(nullable id<PTSDKDelegate>)delegate
                completion:(nonnull void (^)(id<PTSDKErrorProtocol> _Nullable))completion;

+ (nonnull id<PTSDKProtocol>)shared;

- (instancetype) init __attribute__((unavailable("init not available")));
- (instancetype) new __attribute__((unavailable("new not available")));

/// Enable SDK logs for non Production configurations.
+ (void)enableDebug:(BOOL)enable;

@end

NS_ASSUME_NONNULL_END
