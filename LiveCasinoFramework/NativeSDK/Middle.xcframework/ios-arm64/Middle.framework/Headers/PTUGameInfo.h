//
//  PTUGameInfo.h
//  Middle
//
//  Created by yudu on 9/20/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

// ⚠️ Game technology must be imported any more!
#import "PTUGameTechnology.h"

@class PTUFreeSpinBonusResponse;
@class PTUGameInfoLive;
@class PTUContentFilter;

typedef NS_ENUM(NSUInteger, PTUGameState)
{
    PTUGameStateNotInstalled = 0,
    PTUGameStateInDownloadQueue,
    PTUGameStateSizeCheck,
    PTUGameStateDownloadInProgress,
    PTUGameStateDownloadPaused,
    PTUGameStateDownloadCanceled,
    PTUGameStateInstall,
    PTUGameStateRemove,
    PTUGameStateReadyToPlay,
    PTUGameStateNeedsUpdate,
    PTUGameStateUpdateInProgress,
    PTUGameStateError
};

typedef NS_ENUM(NSUInteger, PTUGameSupportedDeviceType)
{
    PTUGameSupportedDeviceTypeUniversal = 0,
    PTUGameSupportedDeviceTypePad,
    PTUGameSupportedDeviceTypePhone
};

typedef NS_ENUM(NSUInteger, PTUGameType)
{
    PTUGameTypeUnknown = 0,
    PTUGameTypeSlot,
    PTUGameTypeTable,
    PTUGameTypeLive,
    PTUGameTypeCard,
    PTUGameTypeRoulette
};

typedef NS_ENUM(NSUInteger, PTUGameBalanceMode)
{
    PTUGameBalanceModeRealMoney,
    PTUGameBalanceModeBonusesAndFreeSpins
};

typedef NS_ENUM(NSUInteger, PTUSpinMode)
{
    PTUSpinModeMoney,
    PTUSpinModeBonuses,
    PTUSpinModeFSB
};

typedef NS_ENUM(NSUInteger, PTUGameInfoGameMoneyMode)
{
    PTUGameInfoGameMoneyModeRealAndBonus  = 0,
    PTUGameInfoGameMoneyModeBonus,
    PTUGameInfoGameMoneyModeReal
};

@interface PTUGameInfo : NSObject<NSCoding>

@property (nonatomic, strong) NSString * _Nonnull gameIdentifier;
@property (nonatomic, strong, readonly) NSString * _Nullable externalGameIdentifier;
@property (nonatomic, assign) PTUGameType gameType;
@property (nonatomic, strong) NSString * _Nonnull gameTitle;
@property (nonatomic, strong) NSString * _Nullable gameDescription;

/*
 gameIdentifierForLocalGameFolder property is used to know which identifier we should use to store game in local documents folder
 At this moment we have only two variants - gameIdentifier/externalGameIdentifier. The choice of what to use depends on gameTechnology special property
*/
@property (nonatomic, strong, readonly) NSString * _Nonnull gameIdentifierForLocalGameFolder;

@property (nonatomic, strong) PTUGameTechnology * _Nonnull gameTechnology;
@property (assign, nonatomic) BOOL funModeDisabled;
@property (nonatomic, assign, readonly) BOOL isJackpotEnabled;
@property (strong, nonatomic) PTUContentFilter * _Nullable filter;

@property (assign, nonatomic) NSInteger linesCount;
@property (assign, nonatomic) unsigned long long downloadSize;
@property (assign, nonatomic) PTUGameInfoGameMoneyMode gameMoneyMode;

@property (nonatomic, strong) NSDate * _Nullable lastPlayedDate;

//bets per line, bet365 sends preformatted 'bet per line' string
@property (nonatomic, strong) NSString *_Nullable preformattedBetPerLine;
@property (strong, nonatomic, readonly) PTUGameInfoLive * _Nullable liveGameInfo;

+ (instancetype _Nonnull)initWithID:(NSString *_Nonnull)identifier
                 externalIdentifier:(NSString *_Nullable)externalIdentifier
                           gameType:(PTUGameType)gameType
                     gameTechnology:(PTUGameTechnology *_Nonnull)gameTechnology
                    funModeDisabled:(BOOL)funModeDisabled
                       liveGameInfo:(PTUGameInfoLive * _Nullable)liveGameInfo
                             filter:(PTUContentFilter *_Nullable)filter;

// Game Info objects must exist only in single instance each
+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (BOOL)isEqualToGameInfo:(PTUGameInfo * _Nonnull)gameInfo;

// Update.
- (void)setFormattedBetPerLineString:(NSString * _Nonnull)formatedBetPerLine;
- (NSString * _Nullable)betPerLineStringWithFormatter:(NSNumberFormatter * _Nonnull)formatter;
- (void)setBetPerLineMinimum:(float)minimumBetPerLine maximum:(float)maximumBetPerLine;

@end
