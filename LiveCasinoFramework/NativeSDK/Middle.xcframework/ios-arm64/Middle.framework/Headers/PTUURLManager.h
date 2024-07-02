//
//  PTUURLManager.h
//  Middle
//
//  Created by Oleksandr Khylyk on 10/6/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const PTUNativeCashierURLKey;
extern NSString * const PTUNativeRegistrationURLKey;
extern NSString * const PTUNativeLoginURLKey;
extern NSString * const PTUNativeTransactionsURLKey;
extern NSString * const PTUNativeGameHistoryURLKey;
extern NSString * const PTUNativeHistoryHistoryURLKey;
extern NSString * const PTUNativeWithdrawHistoryURLKey;
extern NSString * const PTUNativePromotionsURLKey;
extern NSString * const PTUNativeForgotPasswordURLKey;
extern NSString * const PTUNativeFaqURLKey;
extern NSString * const PTUNativeUkRegulationsURLKey;
extern NSString * const PTUNativeUpdateURLKey;
extern NSString * const PTUNativeForceUpdateURLKey;
extern NSString * const PTUNativeTimeoutURLKey;
extern NSString * const PTUNativeSelfexclusionURLKey;
extern NSString * const PTUNativeRealitycheckURLKey;
extern NSString * const PTUNativeBonusURLKey;
extern NSString * const PTUNativeInboxURLKey;
extern NSString * const PTUNativeMyAccountURLKey;
extern NSString * const PTUNativeHTML5GamesURLKey;
extern NSString * const PTUNativeHTM5VersionURLKey;
extern NSString * const PTUNativeHTM5HelpApproachURLKey;
extern NSString * const PTUNativeLiveGamesURLKey;
extern NSString * const PTUNativeFacebookScriptURLKey;
extern NSString * const PTUNativeMaintenanceKey;
extern NSString * const PTUNativeChatConfigKey;
extern NSString * const PTUNativeChatWidgetKey;
extern NSString * const PTUNativeChatBaseURLKey;
extern NSString * const PTUNativeGameHelpURLKey;
extern NSString * const PTUNativeClearCacheDateKey;
extern NSString * const PTUNativePromotionsAssetsLibraryKey;

extern NSString * const PTUNativeExternalLobbyAssetsLibraryKey;
extern NSString * const PTUNativeExternalGamesAssetsLibraryKey;

extern NSString * const PTUEnvironmentJackpotURLKey;
extern NSString * const PTUEnvironmentGamesAssetsCDN;

extern NSString * const PTUNativeKriseURLKey;

@class PTUCoreNetworkController;
@class PTUMiddleLayerController;
@class PTUExtraURLPlaceholder;
@class PTULicenseeRegulation;

typedef NS_ENUM(NSUInteger, PTUURLManagerFetchMode)
{
    PTUURLManagerFetchModeNone      = 0,
    PTUURLManagerFetchModeCached    = 1 << 0,
    PTUURLManagerFetchModeRemote    = 1 << 1
};

typedef void(^PTUURLManagerLoadTemplatesForKeysCallbackBlock)(NSDictionary<NSString *, NSArray<NSString *> *> *templatesPerMappedKey, NSError *error);
typedef void(^PTUURLManagerLoadURLCallbackBlock)(NSPointerArray *urls, PTUURLManagerFetchMode fetchMode, NSError *error);
typedef void(^PTUURLManagerPreloadURLsCompletionBlock)(NSError *error);

@interface PTUURLManager : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithCoreNetworkController:(PTUCoreNetworkController *)coreNetworkController
                        middleLayerController:(PTUMiddleLayerController *)middleLayerController
      urlKeysToInvalidateUponLoginStateChange:(NSArray *)urlKeysToInvalidateUponLoginStateChange NS_DESIGNATED_INITIALIZER;

- (void)loadInitialURLs:(NSDictionary<NSString *, NSString *> *)urls
                offline:(BOOL)offline
         withCompletion:(PTUURLManagerPreloadURLsCompletionBlock)completionBlock;

- (void)formURLTemplateString:(NSMutableString *)templateString
    extraPlaceholderTemplates:(NSArray <PTUExtraURLPlaceholder *> *)extraPlaceholdersTemplate;

// TODO: calls might stack whilte waiting for templates but rest of operations will be performed for each call, optimize this
- (void)getURLForKeys:(NSArray<NSString *> *)keys
         placeholders:(NSArray<PTUExtraURLPlaceholder *> *)placeholders
                modes:(PTUURLManagerFetchMode)modes
           completion:(PTUURLManagerLoadURLCallbackBlock)completion;
- (BOOL)unURLPresentInCacheForKey:(NSString *)key;

- (BOOL)shouldShowURLInBrowser:(NSURL *)url;

- (NSString *)expectedApplicationVersion;
- (BOOL)shouldShowMaintenanceMessage;

@end
