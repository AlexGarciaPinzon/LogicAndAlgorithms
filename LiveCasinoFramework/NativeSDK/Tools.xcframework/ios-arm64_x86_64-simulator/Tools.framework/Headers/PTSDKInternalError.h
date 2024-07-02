//
//  PTUSDKError.h
//  Tools
//
//  Created by olbu on 8/7/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTSDKInternalEnums.h"

NS_ASSUME_NONNULL_BEGIN

@interface PTSDKInternalError : NSObject

@property (nonatomic, assign, readonly) PTSDKInternalErrorType code;
@property (nonatomic, strong, nonnull, readonly) NSString *message;
@property (nonatomic, assign, readonly) BOOL isHtml;

+ (nonnull instancetype)noConnectionError;
+ (nonnull instancetype)notEnoughSpaceError;
+ (nonnull instancetype)cantCreateSDKProvider;
+ (nonnull instancetype)cantInitGamesProvider;
+ (nonnull instancetype)cantInitMiddleLayer;
+ (nonnull instancetype)cantCreateAppController;
+ (nonnull instancetype)cantLoadInitialConfigs;

- (nonnull instancetype)initWithInternalCode:(PTSDKInternalErrorType)code
                                     message:(NSString *)message
                                      isHtml:(BOOL)isHtml;
- (nonnull instancetype)initWithDefaultError:(NSError *)error;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
