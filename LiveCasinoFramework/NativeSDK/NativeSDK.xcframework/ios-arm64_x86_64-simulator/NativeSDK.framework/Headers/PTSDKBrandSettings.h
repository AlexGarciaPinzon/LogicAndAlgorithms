//
//  PTSDKBrandSettings.h
//  NativeSDK
//
//  Created by rono on 12.02.2020.
//  Copyright © 2020 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PTSDKBrandSettings : NSObject

@property (nonatomic, assign, readonly) PTSDKLanguage language;
@property (nonatomic, assign, readonly) PTSDKRegulation regulation;
@property (nonatomic, strong, nonnull, readonly) NSString *demoCurrency;
@property (nonatomic, strong, nullable, readonly) NSString *brandName;
@property (nonatomic, assign, readonly) UIInterfaceOrientationMask supportedOrientations;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// @param language Language with witch games will be launched
/// @param regulation Regulation witch game will be using
/// @param demoCurrency Currency witch games will be using in demo mode, string ISO 4217 format
/// @param brandName Name of branding for games
/// @param supportedOrientations List of orientations supported by client app
- (nonnull instancetype)initWithLanguage:(PTSDKLanguage)language
                              regulation:(PTSDKRegulation)regulation
                            demoCurrency:(nonnull NSString *)demoCurrency
                               brandName:(nullable NSString *)brandName
                   supportedOrientations:(UIInterfaceOrientationMask)supportedOrientations;

@end

NS_ASSUME_NONNULL_END
