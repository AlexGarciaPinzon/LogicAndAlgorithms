//
//  PTUConfigController.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/21/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PTULobbyController;
@class PTUDownloadManager;
@class PTUGameContents;
@class PTULicenseeRegulation;
@class PTULicenseeSDK;
@class PTUConfigsController;
@class PTUPromotionInfo;
@class PTURemoteConfigInfo;
@class PTUConfigInfo;
@class PTUCurrencyInfo;
@class PTUContentFilter;
@class PTUMiddleLayerController;
@class PTUGamesAutoRemovalConfig;
@class PTUPromotionBannerInfo;
@class PTEnvironmentSettings;
@class PTULanguageController;
@class PTUGameTechnology;

typedef void(^PTUConfigsControllerLoadConfigsCompletionBlock)(NSArray<PTUConfigInfo *> *configInfos, NSError *error);
typedef void(^PTUConfigsControllerLoadConfigCompletionBlock)(id parsedObject, NSError *error);

static const struct
{
    __unsafe_unretained NSString *maintenance;
}
PTUDefaultURLs =
{
    @"holding_page"
};

@interface PTUConfigsController : NSObject

@property (strong, nonatomic, readonly) PTEnvironmentSettings *environmentSettings;
@property (strong, nonatomic, readonly) PTUGameContents *gameContents;
@property (strong, nonatomic, readonly) NSDictionary<NSString *, PTUGameTechnology *> *gameTechnologies;
@property (strong, nonatomic, readonly) PTULicenseeRegulation *licenseeRegulation;
@property (strong, nonatomic, readonly) PTULicenseeRegulation *licenseeRegulationNR;
@property (strong, nonatomic, readonly) NSArray<PTULicenseeSDK *> *licenseeSDKs;
@property (strong, nonatomic, readonly) NSArray<PTUPromotionBannerInfo *> *promotionBanners;
@property (copy, nonatomic, readonly) NSArray<PTUPromotionInfo *> *promotions;
@property (strong, nonatomic, readonly) PTUCurrencyInfo *currencyInfo;
@property (strong, nonatomic, readonly) NSDictionary *translation;
@property (strong, nonatomic, readonly) NSDictionary *gameTitles;
@property (strong, nonatomic, readonly) NSDictionary *gameDescriptions;
@property (copy, nonatomic, readonly) NSDictionary *gameUILayoutConfig;
@property (copy, nonatomic, readonly) NSDictionary *sdkConfigDictionary;
@property (copy, nonatomic, readonly) NSDictionary *featuresDictionary;
@property (copy, nonatomic, readonly) NSDictionary *urlsDictionary;
@property (copy, nonatomic, readonly) NSArray *callbackUrlActions;
@property (copy, nonatomic, readonly) NSDictionary *localNotifications;
@property (copy, nonatomic, readonly) NSArray *quickActions;
@property (copy, nonatomic, readonly) NSArray *layouts;
@property (copy, nonatomic, readonly) NSDictionary *defaultURLs;
@property (copy, nonatomic, readonly) NSString *chatJSTemplateString;
@property (strong, nonatomic, readonly) NSDictionary<NSString *, NSString *> *clientPlatformInterfaceHTML5PageTypes;
@property (strong, nonatomic, readonly) PTUGamesAutoRemovalConfig *gamesAutoRemovalConfig;

- (instancetype)initWithDownloadManager:(PTUDownloadManager *)downloadManager
                      cacheDirectoryURL:(NSURL *)configCacheDirectoryURL
                                  lobby:(id<PTULobbyController>)lobby
                    environmentSettings:(PTEnvironmentSettings *)environmentSettings NS_DESIGNATED_INITIALIZER;

- (void)downloadBaseLoadConfigsFileOffline:(BOOL)offline
                           completionBlock:(PTUConfigsControllerLoadConfigCompletionBlock)completionBlock;

- (void)loadInitialConfigsOffline:(BOOL)offline
                       withMiddle:(PTUMiddleLayerController *)middle
              withCompletionBlock:(PTUConfigsControllerLoadConfigsCompletionBlock)completionBlock;
/**
 To load any Configs in JSON format
*/
- (void)loadConfigFromURLs:(NSArray<NSURL *> *)urls offline:(BOOL)offline completionBlock:(PTUConfigsControllerLoadConfigsCompletionBlock)completionBlock;

- (PTUContentFilter *)filterFromInfo:(NSDictionary *)filterInfo;

- (void)updatePromotinos:(NSArray<PTUPromotionInfo *> *)promotions;
- (void)updateBanners:(NSArray<PTUPromotionBannerInfo *> *)banners;

- (void)setupLanguageController:(PTULanguageController *)controller;

@end
