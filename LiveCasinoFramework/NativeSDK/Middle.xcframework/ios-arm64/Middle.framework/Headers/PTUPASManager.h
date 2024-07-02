//
//  PTUPASManager.h
//  Middle
//
//  Created by Oleksandr Khylyk on 10/5/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUURLSessionManager;
@class PTUDeviceInfo;
@class PTULicenseeRegulation;
@class PTEnvironmentSettings;
@class PTULanguageController;

typedef void(^PTUPASManagerLoginCompletionBlock)(BOOL success, NSError *error);
typedef void(^PTUPASManagerGetTokenCompletionBlock)(NSString *name, NSString *PASToken, NSError *error);

typedef void(^PTUPASManagerTermsCallBackBlock)(BOOL accepted);
typedef void(^PTUPASManagerTermsOfUseBlock)(NSURL *url, PTUPASManagerTermsCallBackBlock);
typedef void(^PTUPASManagerChangePasswordCallBackBlock)(NSString *oldPassword, NSString *newPassword);
typedef void(^PTUPASManagerChangePasswordBlock)(NSError *error, PTUPASManagerChangePasswordCallBackBlock);

@interface PTUPASManager : NSObject

- (instancetype)initWithURLSessionManager:(PTUURLSessionManager *)urlSessionManager
                      environmentSettings:(PTEnvironmentSettings *)environmentSettings
                       licenseeRegulation:(PTULicenseeRegulation *)licenseeRegulation
                       languageController:(PTULanguageController *)languageController
                               deviceInfo:(PTUDeviceInfo *)deviceInfo
                     sdkKitEventsAnalyzer:(id<PTUSDKKitEventsProtocol>)sdkKitEventsAnalyzer
                  sdkNetworkCommunication:(id<PTUSDKNetworkCommunicationProtocol>)sdkNetworkCommunication;

- (NSArray *)getPASCookies;

- (void)loginWithUserName:(NSString *)userName
                 password:(NSString *)password
                    token:(NSString *)token
           termOfUseBlock:(PTUPASManagerTermsOfUseBlock)termOfUseBlock
      changePasswordBlock:(PTUPASManagerChangePasswordBlock)changePasswordBlock
          completionBlock:(PTUPASManagerLoginCompletionBlock)completionBlock  __deprecated_msg("SDK has to use this func `loginWithBaseUrl:userName:password:token:`");

- (void)logoutWithUsername:(NSString *)username
                completion:(PTUPASManagerLoginCompletionBlock)completion;

- (void)forgotPasswordWithUserName:(NSString *)userName dateOfBirth:(NSDate *)dateOfBirth email:(NSString *)email completion:(void(^)(NSError *error))completionBlock;

- (void)getTokenForName:(NSString *)name completion:(PTUPASManagerGetTokenCompletionBlock)completionBlock __deprecated_msg("SDK has to use this func `getGameToken:casinoName:systemId:`");

/// It's new way to login and get game token for SDK.
/// @param pasToken should be with system id 0
- (void)loginAndGetGameToken:(NSURL *)baseURL
                    userName:(NSString *)userName
                    pasToken:(NSString *)pasToken
                  casinoName:(NSString *)casinoName
                    systemId:(NSUInteger)systemId
                  completion:(PTUPASManagerGetTokenCompletionBlock)completionBlock;

/// It's new way to login and get game token for SDK.
- (void)loginAndGetGameToken:(NSURL *)baseURL
                    userName:(NSString *)userName
               externalToken:(NSString *)externalToken
                  casinoName:(NSString *)casinoName
                    systemId:(NSUInteger)systemId
                  completion:(PTUPASManagerGetTokenCompletionBlock)completionBlock;

/// Requesting game pas token.
- (void)getGameToken:(NSURL *)baseURL
          casinoName:(NSString *)casinoName
            systemId:(NSUInteger)systemId
          completion:(PTUPASManagerGetTokenCompletionBlock)completionBlock;

/// Requesting Cashier token.
- (void)getCashierToken:(NSURL *)baseURL
             casinoName:(NSString *)casinoName
               systemId:(NSUInteger)systemId
             completion:(PTUPASManagerGetTokenCompletionBlock)completionBlock;

/// Logout from PAS service.
- (void)logoutWithBaseURL:(NSURL *)baseURL
               completion:(PTUPASManagerLoginCompletionBlock)completion;

@end
