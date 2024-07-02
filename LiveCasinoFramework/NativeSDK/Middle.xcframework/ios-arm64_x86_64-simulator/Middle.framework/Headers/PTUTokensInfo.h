//
//  PTUTokensInfo.h
//  Middle
//
//  Created by Daniil Mazepin on 3/22/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const PTUTokensInfoTokenNameUMS;
extern NSString * const PTUTokensInfoTokenNameCasino;
extern NSString * const PTUTokensInfoTokenNameLive;
extern NSString * const PTUTokensInfoTokenNameLive2;
extern NSString * const PTUTokensInfoTokenNameHTML5;
extern NSString * const PTUTokensInfoTokenNameCashier;
extern NSString * const PTUTokensInfoTokenNameSecret;
extern NSString * const PTUTokensInfoTokenNameAPNS;
extern NSString * const PTUTokensInfoTokenNamePOP;
extern NSString * const PTUTokensInfoTokenNameExternalWebPages;
extern NSString * const PTUTokensInfoTokenNameNonSystemId;
extern NSString * const PTUTokensInfoTokenNameExternalAuthentication;
extern NSString * const PTUTokensInfoTokenNameExternalWebPages;

@interface PTUTokensInfo : NSObject

- (NSString *)tokenForType:(NSString *)tokenType;
- (void)updateWithToken:(NSString *)token forType:(NSString *)tokenType;
- (void)removeAllTokens;

@end
