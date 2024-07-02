//
//  PTSDKGameInfoProtocol.h
//  NativeSDK
//
//  Created by Macbook Pro on 7/24/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#ifndef PTSDKGameInfoProtocol_h
#define PTSDKGameInfoProtocol_h

typedef NS_ENUM(NSUInteger, PTGameEngineType)
{
    PTGameEngineTypeNGM = 2,
    PTGameEngineTypeHTML5 = 3,
    PTGameEngineTypeLive = 4,
    PTGameEngineTypeBrowser = 5
};

typedef NS_ENUM(NSUInteger, PTGameTechnologyType)
{
    PTGameTechnologyTypeUnknown,
    PTGameTechnologyTypeGPAS,
    PTGameTechnologyTypeNGM
};

/// specifies min structure for game info objects
@protocol PTSDKGameInfoProtocol <NSObject>

/// Unique game identifier in pt system (ex: 'ro_g')
@property (nonatomic, strong, nonnull, readonly) NSString *identifier;

/// User friendly game name (ex: 'Premium Roulette')
@property (nonatomic, strong, nonnull, readonly) NSString *title;

/// Returns engine type of a game
@property (nonatomic, assign, readonly) PTGameEngineType engineType;

/// Game technology type.
@property (nonatomic, assign, readonly) PTGameTechnologyType technologyType;

/// Indicates does game support fun mode
@property (nonatomic, assign, readonly) BOOL isFunModeDisabled;

@end

#endif /* PTSDKGameInfoProtocol_h */
