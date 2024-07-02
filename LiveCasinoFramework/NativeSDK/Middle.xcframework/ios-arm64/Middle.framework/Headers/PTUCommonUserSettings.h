//
//  PTUCommonUserSettings.h
//  Lobby
//
//  Created by Anna Bunchuzhna on 11/17/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const PTUSettingsPlistSoundKey;
extern NSString * const PTUSettingsPlistServerTimeKey;
extern NSString * const PTUSettingsPlistLoginUserNameKey;
extern NSString * const PTUSettingsPlistGamesLimitKey;
extern NSString * const PTUSettingsPlistDownloadOnCellConnectionKey;
extern NSString * const PTUSettingsPlistQuichSwithGameTutorialShownKey;
extern NSString * const PTUSettingsPlistAppVersionKey;
extern NSString * const PTUSettingsPlistBuildNumberKey;
extern NSString * const PTUSettingsPlistTouchIDDecidedKey;
extern NSString * const PTUSettingsPlistTouchIDEnabledKey;
extern NSString * const PTUSettingsPlistTouchIDUserNameKey;
extern NSString * const PTUSettingsPlistFirstLogin;
extern NSString * const PTUSettingsPlistAssetsVersionNumberPathKey;
extern NSString * const PTUSettingsPlistBuildDatePathKey;
extern NSString * const PTUSettingsPlistRateUsKey;
extern NSString * const PTUSettingsPlistAlertViewControllerDoNotShowAgainCloseConfirmationKey;
extern NSString * const PTUSettingsPlistAlertViewControllerDoNotShowAgainGamesWillCloseKey;
extern NSString * const PTUSettingsPlistClearCacheDateKey;
extern NSString * const PTUSettingsPlistOpenedGameWindowSessionsKey;
extern NSString * const PTUSettingsPlistRemoveGamesAutomaticallyKey;
extern NSString * const PTUSettingsPlistRemoveGamesStaleTimeKey;
extern NSString * const PTUSettingsPlistRecentLaunchOrInstallTimePerGameKey;

extern NSString * const PTUSettingsPlistInstallTimePerGameKey;
extern NSString * const PTUSettingsPlistLaunchScreenConfigPathKey;

extern NSString * const PTUSettingsPlistInitialLoadConfigsCDNPathKey; // load.php file
extern NSString * const PTUSettingsPlistGamesCDNPathKey;
extern NSString * const PTUSettingsPlistLobbyAssetsCDNPathKey;
extern NSString * const PTUSettingsPlistGamesSupplementAssetsCDNPathKey;

extern NSString * const PTUSettingsPlistSharedCDNPathKey;
extern NSString * const PTUSettingsPlistJackpotTickersCDNPathKey;

extern NSString * const PTUSettingsPlistTouchIDDontShowKey;

extern NSString * const PTUSettingsAgeVerificationPassedKey;
extern NSString * const PTUSettingsGDPRPassedKey;
extern NSString * const PTUGameUserInterfaceUserPreferencePlaySideKey;

@interface PTUCommonUserSettings : NSObject

+ (BOOL)hasValueInSettingsPlistForKey:(NSString *)key;

+ (void)writeBoolToSettingsPlist:(BOOL)boolValue forKey:(NSString *)key;
+ (BOOL)getBoolFromSettingsPlistForKey:(NSString *)key;
+ (void)writeDoubleToSettingsPlist:(double)doubleValue forKey:(NSString *)key;
+ (double)getDoubleFromSettingsPlistForKey:(NSString *)key;
+ (void)writeStringToSettingsPlist:(NSString *)string forKey:(NSString *)key;
+ (NSString *)getStringFromSettingsPlistForKey:(NSString *)key;
+ (void)writeIntegerToSettingsPlist:(NSInteger)integer forKey:(NSString *)key;
+ (NSInteger)getIntegerFromSettingsPlistForKey:(NSString *)key;
+ (void)writeUnsignedIntegerToSettingsPlist:(NSUInteger)unsignedInteger forKey:(NSString *)key;
+ (NSUInteger)getUnsignedIntegerFromSettingsPlistForKey:(NSString *)key;
+ (void)writeDictionaryToSettingsPlist:(NSDictionary *)data forKey:(NSString *)key;
+ (NSDictionary *)getDictionaryFromSettingsPlistForKey:(NSString *)key;
+ (void)writeArrayToSettingsPlist:(NSArray *)data forKey:(NSString *)key;
+ (NSArray *)getArrayFromSettingsPlistForKey:(NSString *)key;

@end
