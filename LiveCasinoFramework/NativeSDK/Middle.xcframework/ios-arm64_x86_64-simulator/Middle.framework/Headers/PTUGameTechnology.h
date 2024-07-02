//
//  PTUGameTechnology.h
//  Middle
//
//  Created by dmytriis on 17.03.2021.
//  Copyright © 2021 Playtech. All rights reserved.
//

#import <Middle/PTUGameTechnologyURLPlaceholder.h>
#import <Middle/PTUGameIntegrationInterfaceConfig.h>

@import Foundation;

typedef NS_ENUM(NSUInteger, PTUGameTechnologyIntegrationType)
{
    PTUGameTechnologyIntegrationTypeSocket,
    PTUGameTechnologyIntegrationTypeRedirect,
    PTUGameTechnologyIntegrationTypeCPProtocol,
    PTUGameTechnologyIntegrationTypeBrowser,
    PTUGameTechnologyIntegrationTypeIGT,
    PTUGameTechnologyIntegrationTypeUCIP,
    PTUGameTechnologyIntegrationTypeSG
};

typedef NS_ENUM(NSUInteger, PTUGameEngineType)
{
    PTUGameEngineTypeNGM = 2,
    PTUGameEngineTypeHTML5 = 3,
    PTUGameEngineTypeLive = 4,
    PTUGameEngineTypeBrowser = 5
};

typedef NS_ENUM(NSUInteger, PTSDKGameTechnologyType)
{
    PTSDKGameTechnologyTypeUnknown,
    PTSDKGameTechnologyTypeGPAS,
    PTSDKGameTechnologyTypeNGM
};

@interface PTUGameTechnology : NSObject

@property (strong, nonatomic) NSString *technologyCode;
@property (assign, nonatomic) BOOL isGPAS;
@property (assign, nonatomic) BOOL isNativeGameLoaderNeeded;
@property (assign, nonatomic) BOOL regulationPanelEnabled;
@property (assign, nonatomic) BOOL gameHistoryInPanelEnabled;
@property (assign, nonatomic) BOOL nativeLimitsReminderEnabled;
@property (assign, nonatomic) BOOL isIFrameRequired;
@property (assign, nonatomic) BOOL useExternalIdInLocalFolder;
@property (assign, nonatomic, readonly) PTUGameEngineType gameEngineType;
@property (assign, nonatomic, readonly) PTSDKGameTechnologyType technologyType;
@property (assign, nonatomic) PTUGameTechnologyIntegrationType integrationType;
@property (strong, nonatomic) PTUGameIntegrationInterfaceConfig *integrationInterfaceConfig;
@property (strong, nonatomic) NSString *baseODRVersion;
@property (strong, nonatomic) NSString *gamesVersion;
@property (strong, nonatomic) NSString *gameAssetsFolder;
@property (strong, nonatomic) NSString *gameResourcesFolder;
@property (strong, nonatomic) NSString *demoPlayURLTemplate;
@property (strong, nonatomic) NSString *realPlayURLTemplate;
@property (strong, nonatomic) NSArray<PTUGameTechnologyURLPlaceholder *> *urlPlaceholders;
@property (strong, nonatomic) NSString *jsMessageTemplate;
//@property (nonatomic, strong) NSString *tokenName;
@property (nonatomic, strong) NSString *gamesFolderPath;
@property (nonatomic, strong) NSArray<NSString *> *baseRequiredFiles;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary technologyCode:(NSString *)technologyCode
        integrationInterfaceConfig:(PTUGameIntegrationInterfaceConfig *)integrationInterfaceConfig;

- (BOOL)isAllowedIntegrationTypeForEngineType;

@end
