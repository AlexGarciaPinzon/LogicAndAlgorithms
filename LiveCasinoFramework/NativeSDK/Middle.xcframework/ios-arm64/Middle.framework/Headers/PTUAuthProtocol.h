//
//  PTUAuthProtocol.h
//  Middle
//
//  Created by vlki on 9/30/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, PTULoginPrefillSource)
{
    PTULoginPrefillSourceNone,
    PTULoginPrefillSourceLocalAuthentication,
    PTULoginPrefillSourceWeb
};

typedef void(^PTULoginFlowCompletion)(PTUUserInfo * _Nullable userInfo, NSError * _Nullable error, BOOL didCheckBrokenGames, BOOL interrupted);

@protocol PTUAuthProtocol <NSObject>

@optional

// Authentication methods
- (void)openLogin;
- (void)openLoginWithPrefillSource:(PTULoginPrefillSource)prefillSource
                          username:(NSString * _Nullable)username
                             token:(NSString * _Nullable)token
                        completion:(PTULoginFlowCompletion _Nullable)completion;
- (void)cancelLoginCallbacks;
- (void)openRegistration;
- (void)logout;

@end

NS_ASSUME_NONNULL_END
