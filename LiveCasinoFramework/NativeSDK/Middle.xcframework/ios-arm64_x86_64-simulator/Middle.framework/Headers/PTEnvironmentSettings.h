//
//  PTEnvironmentSettings.h
//  NativeSDK
//
//  Created by hlpa on 8/14/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Tools;

@class PTCDNSettings;
@class PTODRInfo;

typedef NSString DomainString;
typedef NSURL EnvironmentURL; /// absolute URL or URL relative to base configs path (which is set up NOT in PTEnvironmentSettings structure)
typedef NSString EnvironmentURLTemplate; /// like EnvironmentURL but may include IMS templates

typedef NS_ENUM(NSUInteger, PTEnvironmentSettingsUsernameCaseSensitivityPolicy)
{
    PTEnvironmentSettingsUsernameCaseSensitivityPolicyNone = 0,
    PTEnvironmentSettingsUsernameCaseSensitivityPolicyLower,
    PTEnvironmentSettingsUsernameCaseSensitivityPolicyUpper
};

typedef NS_ENUM(NSUInteger, PTEnvironmentSettingsPasswordEncryptionPolicy)
{
    PTEnvironmentSettingsPasswordEncryptionPolicyPlain = 0,
    PTEnvironmentSettingsPasswordEncryptionPolicyMD5UsernameAndPassword,
    PTEnvironmentSettingsPasswordEncryptionPolicyMD5PasswordOnly
};

extern NSString * const _Nonnull PTEnvironmentSettingsPasTokenParameterDefault;

@interface PTPasTokenInfo: NSObject

@property (strong, nonatomic, readonly, nonnull) NSString *name;
@property (strong, nonatomic, readonly, nonnull) NSString *serviceType;
@property (assign, nonatomic, readonly) NSUInteger systemID;

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (instancetype _Nullable)initWithName:(NSString * _Nonnull)name
                           serviceType:(NSString * _Nonnull)serviceType
                              systemID:(NSUInteger)systemID;

@end

@interface PTEnvironmentSettings: NSObject

@property (strong, nonatomic, readonly, nonnull) NSString *casinoName;
@property (strong, nonatomic, readonly, nonnull) DomainString *address;
@property (assign, nonatomic, readonly) NSUInteger port;
@property (strong, nonatomic, readonly, nullable) NSURL *pasAddress;
@property (assign, nonatomic, readonly) BOOL pasEnabled;
@property (assign, nonatomic, readonly) NSUInteger systemID;
@property (assign, nonatomic, readonly) NSUInteger systemPASID;
@property (assign, nonatomic, readonly) NSUInteger systemIDCashier;
@property (assign, nonatomic, readonly) BOOL delegateLiveGamesLaunching;
@property (strong, nonatomic, readonly, nullable) NSURL *liveLoaderUrl;
@property (strong, nonatomic, readonly, nonnull) NSString *liveConfigurationKey;
@property (strong, nonatomic, readonly, nonnull) NSArray <NSString *>*liveEndpoints;
@property (strong, nonatomic, readonly, nonnull) NSArray<PTPasTokenInfo *> *pasTokensInfo;
@property (strong, nonatomic, readonly, nullable) EnvironmentURL *baseURL;
@property (strong, nonatomic, readonly, nullable) EnvironmentURL *pasURL;
@property (strong, nonatomic, readonly, nullable) EnvironmentURL *configsCDN;
@property (strong, nonatomic, readonly, nullable) EnvironmentURL *androidGamesCDN;
@property (strong, nonatomic, readonly, nullable) EnvironmentURL *iosGamesCDN;
@property (strong, nonatomic, readonly, nullable) EnvironmentURLTemplate *gamesAssetsCDNForLoggedOutUser;
@property (strong, nonatomic, readonly, nullable) EnvironmentURLTemplate *gamesAssetsCDNForLoggedInUser;
@property (strong, nonatomic, readonly, nullable) EnvironmentURL *sharedConfigsCDN;
@property (strong, nonatomic, readonly, nullable) EnvironmentURL *lobbyAssetsCDN;
@property (strong, nonatomic, readonly, nonnull) NSString *resourceVersion;
@property (assign, nonatomic, readonly) BOOL sslEnabled;
@property (strong, nonatomic, readonly, nonnull) NSString *clientPlatform;
@property (strong, nonatomic, readonly, nonnull) NSString *brandName;
@property (strong, nonatomic, readonly, nonnull) NSString *clientName;
@property (strong, nonatomic, readonly, nonnull) NSString *clientType;
@property (strong, nonatomic, readonly, nonnull) NSString *clientVersion;
@property (strong, nonatomic, readonly, nonnull) NSString *demoCurrencyIdentifier;
@property (assign, nonatomic, readonly) PTEnvironmentSettingsUsernameCaseSensitivityPolicy usernameCaseSensitivityPolicy;
@property (assign, nonatomic, readonly) PTEnvironmentSettingsPasswordEncryptionPolicy passwordEncryptionPolicy;
@property (copy,   nonatomic, nonnull) NSString *pasTokenParameter;
@property (copy,   nonatomic, nonnull) NSArray<NSString *> *storingCookies;
@property (assign, nonatomic) BOOL updateCashierTokenBeforeEachOpen;
@property (assign, nonatomic) BOOL biometricsActivationOnRemoteEnabled;
@property (assign, nonatomic) NSInteger systemPASId;
@property (assign, nonatomic, readonly) NSUInteger localWebServerPort;

@property (copy, nonatomic, readonly, nonnull) PTODRInfo * odrInfo;

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (nullable instancetype)initWithBaseURL:(nonnull NSURL *)baseURL
                                  pasURL:(nonnull NSURL *)pasURL
                              casinoName:(nonnull NSString *)casinoName
                              clientName:(nullable NSString *)clientName
                                 address:(nonnull DomainString *)address
                                    port:(NSUInteger)port
                              sslEnabled:(BOOL)sslEnabled
              delegateLiveGamesLaunching:(BOOL)delegateLiveGamesLaunching
                           liveLoaderUrl:(nullable NSURL *)liveLoaderUrl
                           liveEndpoints:(nonnull NSArray <NSString *>*)liveEndpoints
                    liveConfigurationKey:(nonnull NSString *)liveConfigurationKey
                           clientVersion:(nonnull NSString *)clientVersion
                              clientType:(nonnull NSString *)clientType
                               brandName:(nullable NSString *)brandName
                  demoCurrencyIdentifier:(nonnull NSString *)demoCurrencyIdentifier
                      localWebServerPort:(NSUInteger)localWebServerPort
                                 odrInfo:(nonnull PTODRInfo *)odrInfo;

- (PTPasTokenInfo * _Nullable)tokenWithName:(NSString * _Nonnull)name;

- (void)updateWithCDNSettings:(nonnull PTCDNSettings *)cdnSettings;

@end
