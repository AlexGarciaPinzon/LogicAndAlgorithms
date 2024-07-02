//
//  NSError+PTUErrorExtension.h
//  Middle
//
//  Created by yudu on 9/26/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PTUErrorDomainType)
{
    PTUErrorDomainTypePleaseRestartYourApplication = 100,
    PTUErrorDomainTypeLicenseeRegulationLocationAuthorizationStatusIsDenied,
    PTUErrorDomainTypeLicenseeRegulationISOCountryIsNotSupport,
    PTUErrorDomainTypeLicenseeRegulationISOCountryInBlackList,
    PTUErrorDomainTypeLicenseeRegulationIOSCountryTimeout,
    PTUErrorDomainTypeLicenseeRegulationIOSCountryUnknown,
    PTUErrorDomainTypeLicenseeRegulationIsUnsupported,
    PTUErrorDomainTypeDownloadFile,
    PTUErrorDomainTypeUnzipFileError,
    PTUErrorDomainTypeLogin,
    PTUErrorDomainTypeForgotPassword,
    PTUErrorDomainTypeInitialDataLoad,
    PTUErrorDomainTypeGetURLByPriority,
    PTUErrorDomainTypeGetFavoriteGames,
    PTUErrorDomainTypeChangeFavoriteGames,
    PTUErrorDomainTypeGetAdvisorGames,
    PTUErrorDomainTypeErrorResponse,
    PTUErrorDomainTypeCoreNetworkOperationTimeout,
    PTUErrorDomainTypeGameDoesNotSupportMultigameBecauseOrientations,
    PTUErrorDomainTypeGameUnavailable,
    PTUErrorDomainTypeConfigFileCacheNotFound,
    PTUErrorDomainTypeTermsAndConditionsDeclined,
    PTUErrorDomainTypeNoAssetsInfoFile,
    PTUErrorDomainTypeNetNotreachable,
    PTUErrorDomainTypeLoginAlert,
    PTUErrorDomainTypeNotEnoughSpace
};

@class PTUCommonErrorResponse;
@class PTUGameInfo;

static NSString *PTUErrorDomainName = @"PTUErrorDomain";

@interface NSError (PTUExtension)

+ (NSError *)errorPleaseRestartYourApplication;

//Regulations
+ (NSError *)errorLicenseeRegulationIOSCountryUnknown;
+ (NSError *)errorLicenseeRegulationIOSCountryTimeout;
+ (NSError *)errorLicenseeRegulationISOCountryIsNotSupport;
+ (NSError *)errorLicenseeRegulationISOCountryInBlackList;
+ (NSError *)errorLicenseeRegulationLocationAuthorizationStatusIsDenied;

//download
+ (NSError *)errorDownloadFile;
+ (NSError *)gameAlreadyDownloaded;

//cache
+ (NSError *)errorConfigFileCacheNotFound;

//unzip
+ (NSError *)errorUnzipFile;

//login
+ (NSError *)errorLoginWithMessage:(NSString *)message;
+ (NSError *)errorStartWindowSession;
+ (NSError *)errorForgotPassword;
+ (NSError *)errorGamStopWithMessage:(NSString *)message;

//external urls
+ (NSError *)ptuErrorGetURLByPriority;

+ (NSError *)errorInitialDataLoad;

//favorites
+ (NSError *)ptuErrorGetFavoriteGames;
+ (NSError *)ptuErrorChangeFavoriteGames;

//advisor
+ (NSError *)ptuErrorGetAdvisorGames;

+ (NSError *)ptuErrorWithCoreNetworkErrorResponse:(PTUCommonErrorResponse *)errorReponse;

+ (NSError *)ptuCoreNetworkOperationTimeoutError;
+ (NSError *)ptuGameDoesNotSupportMultigameBecauseOrientations;

//game availability due to filter
+ (NSError *)ptuGameIsUnavailableDueToFilter:(PTUGameInfo *)gameInfo;

// Terms and Conditions
+ (NSError *)ptuErrorTermsAndConditionsMustBeAccepted;

// Game install
+ (NSError *)ptuErrorNoAssetsInfoFile;

// Networking
+ (NSError *)ptuErrorNetNotReachable;

// Not enough space for download/install game
+ (NSError *)errorNotEnoughSpace;

// Licensee regulation code is empty
+ (NSError *)errorLicenseeRegulationIsUnsupported;

// Game help url template.
+ (NSError *)gameHelpUrlDoesNotExist;

// htm5_version template
+ (NSError *)gameHTML5VersionDoesNotExist;

@end
