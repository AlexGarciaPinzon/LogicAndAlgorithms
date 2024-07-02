//
//  PTULanguageController.h
//  Middle
//
//  Created by Roman Novakov on 9/19/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTULicenseeRegulation.h"
#import "PTULanguageMapper.h"

@import Tools.PTSDKExternalEnums;

/// Controller is responsible for returning lcorrect language which set from regulations config file.
@interface PTULanguageController : NSObject

/// This property is set from sdk.
@property (assign, nonatomic, readonly) PTSDKLanguage preferredLanguage;

/// Property is set from licensee regulation. It's array of license supported languages.
@property (strong, nonatomic, readonly, nonnull) NSOrderedSet<NSString *> *supportedLangueges;

/// default supported language. Also is set from licensee regulation.
@property (strong, nonatomic, readonly, nonnull) NSString *defaultLanguage;

- (void)setupPreferredLanguage:(PTSDKLanguage)preferredLanguage;
- (void)setupLanguageMapper:(nonnull PTULanguageMapper *)mapper;

/**
 This func will returns you current language of app which reletas to regulation type.

 @param Type of licensee regulation.
 @return type language code. Example: "en".
 */
- (nonnull NSString *)languageWithType:(PTULicenseeRegulationLanguageType)type;

@end
