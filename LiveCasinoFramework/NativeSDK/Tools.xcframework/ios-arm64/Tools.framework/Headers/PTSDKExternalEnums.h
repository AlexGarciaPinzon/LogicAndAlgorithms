//
//  PTSDKExternalEnums.h
//  Tools
//
//  Created by Roman Novakov on 9/23/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#ifndef PTSDKExternalEnums_h
#define PTSDKExternalEnums_h

typedef NS_CLOSED_ENUM(NSInteger, PTSDKLanguage) {
    PTSDKLanguageEnglish,
    PTSDKLanguageGerman,
    PTSDKLanguageSpanish,
    PTSDKLanguageSpanishPanama,
    PTSDKLanguageSpanishGuatemala,
    PTSDKLanguageSpanishCostaRica,
    PTSDKLanguageSwedish,
    PTSDKLanguageItalian,
    PTSDKLanguageDanish,
    PTSDKLanguageNorwegian,
    PTSDKLanguageTraditionalChinese,
    PTSDKLanguageSimplifiedChinese,
    PTSDKLanguageBulgarian,
    PTSDKLanguageGreek,
    PTSDKLanguagePortuguese,
    PTSDKLanguagePolish,
    PTSDKLanguageRomanian,
    PTSDKLanguageCzech,
    PTSDKLanguageHungarian,
    PTSDKLanguageSlovakian,
    PTSDKLanguageDutch,
    PTSDKLanguageEstonian,
    PTSDKLanguageFinish,
    PTSDKLanguageJapanese,
    PTSDKLanguageKorean,
    PTSDKLanguageMalay,
    PTSDKLanguageFrench,
    PTSDKLanguageCroatian,
    PTSDKLanguageLithuanian,
    PTSDKLanguageRussian
};

typedef NS_ENUM(NSInteger, PTSDKRegulation) {
    PTSDKRegulationNR,
    PTSDKRegulationES,
    PTSDKRegulationRO,
    PTSDKRegulationDK,
    PTSDKRegulationCZ,
    PTSDKRegulationIT,
    PTSDKRegulationPT,
    PTSDKRegulationUK,
    PTSDKRegulationPL,
    PTSDKRegulationCO,
    PTSDKRegulationMX,
    PTSDKRegulationDE,
    PTSDKRegulationHR
};

/// Old name PTLobbyGameMode
typedef NS_CLOSED_ENUM(NSInteger, PTSDKGameMode) {
    PTSDKGameModeUndefined = -1,
    PTSDKGameModeDemo,
    PTSDKGameModeFun,
    PTSDKGameModeReal
};

typedef NS_ENUM(NSInteger, PTSDKGameImageType)
{
    PTSDKGameImageTypeSquare,
    PTSDKGameImageTypeBanner,
    PTSDKGameImageTypeWideBanner,
};

typedef NS_ENUM(NSInteger, PTSDKSwitchLanguage)
{
    // Language has not been updated (the error had happened during reloading SDK configs). ❌
    PTSDKSwitchLanguageError,
    // Language has been updated into the SDK settings, but launched game was not reloaded. ⚠️
    // In this case the game must be closed and relaunched by lobby side.
    PTSDKSwitchLanguageUpdatedGameRelaunchError,
    // Language has been updated but the SDK has no launched game. ✅
    PTSDKSwitchLanguageSuccess
};

typedef NS_ENUM(NSInteger, PTSDKCloseGameResult) {
    // In case game is busy (for ex. autoplay or game round is inprogress.)
    PTSDKCloseGameResultBusy,
    // In case game is already closed and SDK has no launched game.
    PTSDKCloseGameResultNoLaunched,
    // In case game is closed successfully.
    PTSDKCloseGameResultSuccessful,
    // In case game is not able to close some error was happend.
    PTSDKCloseGameResultFailed
};

#endif /* PTSDKExternalEnums_h */
