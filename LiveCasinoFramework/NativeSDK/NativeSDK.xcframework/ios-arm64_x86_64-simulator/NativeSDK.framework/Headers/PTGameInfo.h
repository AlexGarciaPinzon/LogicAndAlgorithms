//
//  PTGameInfo.h
//  NativeSDK
//
//  Created by Macbook Pro on 7/16/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTSDKGameInfoProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface PTGameInfo : NSObject <PTSDKGameInfoProtocol>

@property (nonatomic, strong, nonnull, readonly) NSString *identifier;
@property (nonatomic, strong, nonnull, readonly) NSString *title;
@property (nonatomic, assign, readonly) PTGameEngineType engineType;
@property (nonatomic, assign, readonly) PTGameTechnologyType technologyType;
@property (nonatomic, assign, readonly) BOOL isFunModeDisabled;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
