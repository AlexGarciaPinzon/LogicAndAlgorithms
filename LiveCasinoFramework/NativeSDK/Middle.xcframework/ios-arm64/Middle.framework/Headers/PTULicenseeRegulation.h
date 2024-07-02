//
//  PTULicenseeRegulation.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/22/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUExpandedBalanceEntries.h"

@class PTULanguageMapper;
@class PTULicenseeGameLockScreenInfo;
@class PTULicenseeBrokenGamesInfo;

typedef NS_ENUM(NSInteger, PTULicenseeRegulationLanguageType)
{
    PTULicenseeRegulationLanguageTypeDefault,
    PTULicenseeRegulationLanguageTypeURLRequest,
    PTULicenseeRegulationLanguageTypeURLTemplate,
    PTULicenseeRegulationLanguageTypeExternalConfig
};

typedef NS_ENUM(NSUInteger, PTULicenseeRegulationType) {
    PTULicenseeRegulationTypeNR = 0,
    PTULicenseeRegulationTypeUK,
    PTULicenseeRegulationTypeIT,
    PTULicenseeRegulationTypeES,
    PTULicenseeRegulationTypeDK,
    PTULicenseeRegulationTypeRO,
    PTULicenseeRegulationTypePL,
    PTULicenseeRegulationTypePT,
    PTULicenseeRegulationTypeCZ,
    PTULicenseeRegulationTypeCO,
    PTULicenseeRegulationTypeMX,
    PTULicenseeRegulationTypeDE
};

typedef NS_ENUM(NSUInteger, PTULicenseeRegulationLocationCheckType) {
    PTULicenseeRegulationLocationCheckTypeOff,
    PTULicenseeRegulationLocationCheckTypeOn,
    PTULicenseeRegulationLocationCheckTypeAfterLogin
};

@interface PTULicenseeRegulation : NSObject

@property (assign, nonatomic) PTULicenseeRegulationType type;
@property (assign, nonatomic) PTULicenseeRegulationLocationCheckType locationCheckType;
@property (copy, nonatomic) NSSet<NSString *> *countryCodesBlackList;
@property (copy, nonatomic) NSSet<NSString *> *countryCodesWhiteList;
@property (copy, nonatomic) NSOrderedSet<NSString *> *supportedLangueges;
@property (copy, nonatomic) NSString *defaultLanguage;
@property (copy, nonatomic) NSString *ISOCountryCode;
@property (copy, nonatomic) NSString *lastLoginResponseTimeFormat;
@property (copy, nonatomic) NSString *lastLoginResponseTimeZone;
@property (copy, nonatomic) NSString *typeString;
@property (assign, nonatomic) NSUInteger maxTotalBringAmount;
@property (assign, nonatomic) NSInteger minSpinDurationMiliseconds;
@property (assign, nonatomic) uint64_t preselectedBringAmountCents;
@property (strong, nonatomic) PTULicenseeGameLockScreenInfo *gameLockScreenInfo;
@property (strong, nonatomic) PTULicenseeBrokenGamesInfo *brokenGamesInfo;
@property (assign, nonatomic) BOOL locationCheckEnabled;
@property (assign, nonatomic) BOOL clockVisible;
@property (assign, nonatomic) BOOL skipTermsAndConditionsDialog;
@property (assign, nonatomic) BOOL multipleGamesEnabled;
@property (assign, nonatomic) BOOL timebasedJackpotEnabled;
@property (assign, nonatomic) BOOL closeFSBButtonEnabled;
@property (assign, nonatomic) BOOL serverTimeEnabled;
@property (assign, nonatomic) BOOL loginTimerEnabled;
@property (assign, nonatomic) BOOL sessionTimerEnabled;
@property (assign, nonatomic) BOOL nicknameSupport;
@property (assign, nonatomic) BOOL netlossCooldownEnabled;
@property (assign, nonatomic, getter=isAutoplayConfirmationEnabled) BOOL isAutoplayConfirmationEnabled;
@property (assign, nonatomic, getter=isAutoplayLimitsEnabled) BOOL autoplayLimitsEnabled;
@property (assign, nonatomic, getter=isAutoplayEnabled) BOOL autoplayEnabled;
@property (assign, nonatomic, getter=isUntilFeatureEnabled) BOOL untilFeatureEnabled;
@property (assign, nonatomic, getter=isTurboModeEnabled) BOOL turboModeEnabled;
@property (assign, nonatomic, getter=isStopButtonEnabled) BOOL stopButtonEnabled;
@property (assign, nonatomic, getter=isMarvelJackpotEnabled) BOOL marvelJackpotEnabled;

@property (strong, nonatomic) PTULanguageMapper *languageMapper;
@property (strong, nonatomic) PTUExpandedBalanceEntries *expandedBalanceEntries;
@property (copy, nonatomic) NSSet<NSString *> *gamstopTemplates;

//- (NSString *)languageWithType:(PTULicenseeRegulationLanguageType)type __deprecated_msg("Use PTULanguageController -'languageWithType'");

@end
