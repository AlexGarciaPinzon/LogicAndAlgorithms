//
//  PTSDKLiveCasinoSettings.h
//  NativeSDK
//
//  Created by rono on 12.02.2020.
//  Copyright © 2020 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PTSDKLiveCasinoSettings : NSObject

@property (assign, nonatomic, readonly) BOOL delegateLiveGamesLaunching;
@property (nonatomic, strong, nullable, readonly) NSURL *liveLoaderUrl;
@property (nonatomic, strong, nonnull, readonly) NSArray <NSString *>*liveEndpoints;
@property (nonatomic, strong, nonnull, readonly) NSString *liveConfigurationKey;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// @param liveLoaderUrl Live host url
/// @param liveEndpoints Live endpoints
/// @param liveConfigurationKey Live casino configurations type. In case property is nil the default value will be applied.
- (nonnull instancetype)initWithDelegateLiveGamesLaunching:(BOOL)delegateLiveGamesLaunching
                                             liveLoaderUrl:(nullable NSURL *)liveLoaderUrl
                                             liveEndpoints:(nonnull NSArray <NSString *>*)liveEndpoints
                                      liveConfigurationKey:(nullable NSString *)liveConfigurationKey;

@end

NS_ASSUME_NONNULL_END
