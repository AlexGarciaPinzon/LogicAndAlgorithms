//
//  PTSDKEnvironmentSettings.h
//  NativeSDK
//
//  Created by rono on 12.02.2020.
//  Copyright © 2020 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTSDKEnums.h"
#import "PTSDKODRInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface PTSDKEnvironmentSettings : NSObject

@property (nonatomic, strong, nullable, readonly) NSString *clientName;
@property (nonatomic, strong, nonnull, readonly) NSString *casinoName;
@property (nonatomic, strong, nonnull, readonly) NSString *host;
@property (nonatomic, assign, readonly) NSUInteger port;
@property (nonatomic, assign, readonly) BOOL sslEnabled;
@property (nonatomic, strong, nullable, readonly) NSString *clientVersion;
@property (nonatomic, strong, nullable, readonly) NSString *clientType;
@property (nonatomic, strong, nonnull, readonly) NSString *initialCDNPath;
@property (nonatomic, strong, nonnull, readonly) NSURL    *pasURL;
@property (nonatomic, assign, readonly) NSUInteger gamePlaySystemID;
@property (nonatomic, assign, readonly) NSUInteger popSystemID;
@property (nonatomic, assign, readonly) NSUInteger live2SystemID;
@property (nonatomic, assign, readonly) NSUInteger localWebServerPort;

@property (nonatomic, nonnull, readonly) PTSDKODRInfo *odrInfo;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// @param clientName Client name
/// @param casinoName Licensee casino name
/// @param host OpenAPI host name of casino server
/// @param port TCP port for provided host
/// @param sslEnabled should SDK use SSL/TLS while establishing connection
/// @param initialCDNPath Path to remote configuration folder
/// @param clientVersion Casino server version
/// @param clientType Value should be used to login to PAS. Default value: casino. Possible values: casino,  poker, sportsbook.
/// @param pasURL
/// @param gamePlaySystemID
/// @param popSystemID
/// @param live2SystemID
/// @param localWebServerPort If you are using HTML games and you need to change local webserver port set it into this param.
/// @param odrInfo The object that describes ODR tags.
- (nonnull instancetype)initWithClientName:(nullable NSString *)clientName
                                casinoName:(nonnull NSString *)casinoName
                                      host:(nonnull NSString *)host
                                      port:(NSUInteger)port
                                sslEnabled:(BOOL)sslEnabled
                             clientVersion:(nullable NSString *)clientVersion
                                clientType:(enum PTSDKClientType)clientType
                            initialCDNPath:(nonnull NSString *)initialCDNPath
                                    pasURL:(nonnull NSURL *)pasURL
                          gamePlaySystemID:(NSUInteger)gamePlaySystemID
                               popSystemID:(NSUInteger)popSystemID
                             live2SystemID:(NSUInteger)live2SystemID
                        localWebServerPort:(NSUInteger)localWebServerPort
                                   odrInfo:(nonnull PTSDKODRInfo *)odrInfo;

@end

NS_ASSUME_NONNULL_END
