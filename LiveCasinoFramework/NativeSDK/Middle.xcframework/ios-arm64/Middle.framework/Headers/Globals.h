//
//  Globals.h
//  Middle
//
//  Created by hlpa on 4/1/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit.UIApplication;
@import Tools.PTSDKExternalEnums;

typedef NS_ENUM(NSInteger, PTUGameImageType)
{
    PTUGameImageType5x5,
    PTUGameImageType10x10,
    PTUGameImageType15x10,
    PTUGameImageType15x20,
    PTUGameImageType20x10,
    PTUGameImageType30x10,
    PTUGameImageType30x5,
    PTUGameImageTypeG_M,
    PTUGameImageTypeLoading,
    PTUGameImageTypeSpotlightSearch
};

typedef NS_ENUM(NSInteger, PTUGameScreenShotType)
{
    PTUGameScreenShotTypeMain,
    PTUGameScreenShotTypeBW,
    PTUGameScreenShotTypeBonus
};

typedef NS_ENUM(NSUInteger, PTUGameModeSelectorResult)
{
    PTUGameModeSelectorResultClosed,
    PTUGameModeSelectorResultRealMoney,
    PTUGameModeSelectorResultBonusRewards
};

typedef NS_ENUM(NSInteger, PTUGameSwitchMoneyItemMode)
{
    PTUGameSwitchMoneyItemModeHidden,
    PTUGameSwitchMoneyItemModeRealMoney,
    PTUGameSwitchMoneyItemModeBonusMoney
};

typedef NS_ENUM(NSInteger, PTUBringMoneyViewControllerMode)
{
    PTUBringMoneyViewControllerModeMoney,
    PTUBringMoneyViewControllerModeBonuses,
    PTUBringMoneyViewControllerModeFSB
};

typedef NS_ENUM(NSUInteger, PTUBringMoneyViewControllerButtonType)
{
    PTUBringMoneyViewControllerButtonTypeCancel,
    PTUBringMoneyViewControllerButtonTypeConfirm,
    PTUBringMoneyViewControllerButtonTypeNext,
    PTUBringMoneyViewControllerButtonTypeBack
};

typedef void (^PTUBringMoneyCompletion)(BOOL confirmed, uint64_t value, BOOL showErrorAlert, NSString * _Nullable errorMessage);

typedef NS_OPTIONS(NSUInteger, PTUGameBalanceModeSelectorMoneyMask)
{
    PTUGameBalanceModeSelectorMoney =   1 << 0,
    PTUGameBalanceModeSelectorBonuses = 1 << 1,
    PTUGameBalanceModeSelectorFSB =     1 << 2
};

typedef NS_OPTIONS(NSUInteger, PTUUIOrientationMask)
{
    PTUUIOrientationMaskUp =            1 << 0,
    PTUUIOrientationMaskLeft =          1 << 1,
    PTUUIOrientationMaskRight =         1 << 2,
    PTUUIOrientationMaskDown =          1 << 3,
    
    PTUUIOrientationMaskLandscape =     (PTUUIOrientationMaskLeft | PTUUIOrientationMaskRight),
    PTUUIOrientationMaskAll =           (PTUUIOrientationMaskUp | PTUUIOrientationMaskLeft | PTUUIOrientationMaskRight | PTUUIOrientationMaskDown),
    PTUUIOrientationMaskAllButDown =    (PTUUIOrientationMaskUp | PTUUIOrientationMaskLeft | PTUUIOrientationMaskRight)
};

static inline BOOL PTUUIOrientationMaskSupportsBothPortraitAndLandscape(PTUUIOrientationMask mask)
{
    return
    ((mask & PTUUIOrientationMaskUp) || (mask & PTUUIOrientationMaskDown)) &&
    ((mask & PTUUIOrientationMaskLeft) || (mask & PTUUIOrientationMaskRight));
}

typedef struct
{
    BOOL known;
    int64_t cents;
}
PTUGameBalance;

//typedef NS_ENUM(NSUInteger, PTUGameMode)
//{
//    PTUGameModeReal = 0,
//    PTUGameModeDemo,
//    PTUGameModeFun
//};

extern BOOL PTUGameModeNeedsLogin(PTSDKGameMode gameMode);

/// Specifies all data necessary to launch game in certain mode
@interface PTUGameModeToken: NSObject

@property(assign, nonatomic, readonly) PTSDKGameMode gameMode;
@property(strong, nonatomic, readonly, nullable) NSString *username;
@property(strong, nonatomic, readonly, nullable) NSString *password;
/// In SDK it's default gameplay token.
@property(strong, nonatomic, readonly, nullable) NSString *token;
/// Token which is used to launch GPAS games.
@property(strong, nonatomic, readonly, nullable) NSString *popToken;
/// Token which is used to launch HTML-NGM games. token and htmlToken have same system id
/// But to launch platform's and native sockets we need to have 2 different tokens.
@property(strong, nonatomic, readonly, nullable) NSString *htmlToken;
/// Token which is used to launch live games.
@property(strong, nonatomic, readonly, nullable) NSString *liveToken;

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (instancetype _Nullable)initWithGameMode:(PTSDKGameMode)gameMode
                                  username:(NSString * _Nullable)username
                                  password:(NSString * _Nullable)password
                                     token:(NSString * _Nullable)token;

- (instancetype _Nullable)initWithGameMode:(PTSDKGameMode)gameMode
                                  username:(NSString * _Nullable)username
                                  password:(NSString * _Nullable)password
                                     token:(NSString * _Nullable)token
                                  popToken:(NSString * _Nullable)popToken;

- (instancetype _Nullable)initWithGameMode:(PTSDKGameMode)gameMode
                                  username:(NSString * _Nullable)username
                                  password:(NSString * _Nullable)password
                                     token:(NSString * _Nullable)token
                                  htmlToken:(NSString * _Nullable)htmlToken;

- (instancetype _Nullable)initWithGameMode:(PTSDKGameMode)gameMode
                                  username:(NSString * _Nullable)username
                                  password:(NSString * _Nullable)password
                                     token:(NSString * _Nullable)token
                                 liveToken:(NSString * _Nullable)liveToken;

@end


static inline UIInterfaceOrientationMask PTUUIOrientationMaskConvert(PTUUIOrientationMask ptuUIOrientationMask)
{
    UIInterfaceOrientationMask result = 0;
    if (ptuUIOrientationMask & PTUUIOrientationMaskUp)
    {
        result |= UIInterfaceOrientationMaskPortrait;
    }
    if (ptuUIOrientationMask & PTUUIOrientationMaskDown)
    {
        result |= UIInterfaceOrientationMaskPortraitUpsideDown;
    }
    if (ptuUIOrientationMask & PTUUIOrientationMaskLeft)
    {
        result |= UIInterfaceOrientationMaskLandscapeLeft;
    }
    if (ptuUIOrientationMask & PTUUIOrientationMaskRight)
    {
        result |= UIInterfaceOrientationMaskLandscapeRight;
    }
    return result;
}
