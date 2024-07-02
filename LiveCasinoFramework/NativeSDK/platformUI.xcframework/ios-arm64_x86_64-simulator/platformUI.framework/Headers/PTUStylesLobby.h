//
//  PTUStylesLobby.h
//  Lobby
//
//  Created by hlpa on 4/18/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, PTUStylePropertyType_Lobby)
{
    PTUStylePropertyType_Lobby_AlertSessionLimits = PTUStylePropertyType__End,
    PTUStylePropertyType_Lobby_AlertSessionLimitsEnd,
    PTUStylePropertyType_Lobby_PopupTouchID,
    PTUStylePropertyType_Lobby_Toast,
    PTUStylePropertyType_Lobby_TileGame,
    PTUStylePropertyType_Lobby_TileCategory,
    PTUStylePropertyType_Lobby_TileMoreMenu,
    PTUStylePropertyType_Lobby_TileGameSearchSuggestion,
    PTUStylePropertyType_Lobby_CategoryElement,
    PTUStylePropertyType_Lobby_GridGame,
    PTUStylePropertyType_Lobby_SearchBar,
    PTUStylePropertyType_Lobby_ActivityIndicator,
    PTUStylePropertyType_Lobby_GamesRemoval,
    PTUStylePropertyType_Lobby_TabBar,
    PTUStylePropertyType_Lobby_TabBarContent,
    PTUStylePropertyType_Lobby_TabBarElement,
    PTUStylePropertyType_Lobby_NavigationHeaderContent,
    PTUStylePropertyType_Lobby_NavigationHeaderElement,
    PTUStylePropertyType_Lobby_NavigationHeaderLogin,
    PTUStylePropertyType_Lobby_NavigationHeaderSearch,
    PTUStylePropertyType_Lobby_NavigationHeaderMenuCategories,
    PTUStylePropertyType_Lobby_OtherApps,
    PTUStylePropertyType_Lobby_PopupBalance,
    PTUStylePropertyType_Lobby_NavigationBarContent,
    PTUStylePropertyType_Lobby_NavigationBarElement,
    PTUStylePropertyType_Lobby_ScreenVirtualCard,
    PTUStylePropertyType_Lobby_ScreenWebView,
    PTUStylePropertyType_Lobby_ScreenPromotions,
    PTUStylePropertyType_Lobby_PromotionCellStyles,
    PTUStylePropertyType_Lobby_PromotionCell,
    PTUStylePropertyType_Lobby_ScreenSearch,
    PTUStylePropertyType_Lobby_ScreenMore,
    PTUStylePropertyType_Lobby_PromotionBanners,
    PTUStylePropertyType_Lobby_ScreenCategory,
    PTUStylePropertyType_Lobby_DiskUsage,
    PTUStylePropertyType_Lobby_ScreenAbout,
    PTUStylePropertyType_Lobby_Shared,
    PTUStylePropertyType_Lobby_ScreenGameInfo,
    PTUStylePropertyType_Lobby_HomeSections,
    PTUStylePropertyType_Lobby_HomeSectionElement,
    PTUStylePropertyType_Lobby_HomeSectionElement_Tweak,
    PTUStylePropertyType_Lobby_HomeSectionElement_Category,
    PTUStylePropertyType_Lobby_HomeSectionElement_Menu,
    PTUStylePropertyType_Lobby_HomeSectionElement_Promotion,
    PTUStylePropertyType_Lobby_HomeSectionElement_Search,
    PTUStylePropertyType_Lobby_HomeSectionElement_Separator,
    PTUStylePropertyType_Lobby_HomeSectionElement_MoreApps,
    PTUStylePropertyType_Lobby_HomeSectionElement_OtherApps,
    PTUStylePropertyType_Lobby_ScreenHome,
    PTUStylePropertyType_Lobby_ScreenGameManagementManual,
    PTUStylePropertyType_Lobby_ScreenGameManagementAuto,
    PTUStylePropertyType_Lobby_ScreenFavorites,
    PTUStylePropertyType_Lobby_ScreenAdvisor,
    PTUStylePropertyType_Lobby_ScreenUpdate,
    PTUStylePropertyType_Lobby_PopupAutoplayLimits,
    PTUStylePropertyType_Lobby_ScreenBlockedGames,
    PTUStylePropertyType_Lobby_ScreenLogin,
    PTUStylePropertyType_Lobby_ScreenExternalRegistration,
    PTUStylePropertyType_Lobby_LoadingBar,
    PTUStylePropertyType_Lobby_MemoryBar,
    PTUStylePropertyType_Lobby_PlaceholderNoGames,
    PTUStylePropertyType_Lobby_ScreenMaintenance,
    PTUStylePropertyType_Lobby_ScreenForgotPassword,
    PTUStylePropertyType_Lobby_Screenshots,
    PTUStylePropertyType_Lobby_ScreenshotsContent,
    PTUStylePropertyType_Lobby_ScreenLaunch,
    PTUStylePropertyType_Lobby_ScreenGameTour,
    PTUStylePropertyType_Lobby_ScreenGameTourFinish,
    PTUStylePropertyType_Lobby_ScreenIceConfig,
    PTUStylePropertyType_Lobby_ScreenChat,
    PTUStylePropertyType_Lobby_ScreenChangePassword,
    PTUStylePropertyType_Lobby_ScreenSplash, // TODO: android only
    PTUStylePropertyType_Lobby_ScreenAccount,
    PTUStylePropertyType_Lobby_ScreenSettings, // TODO: android only ?
    PTUStylePropertyType_Lobby_SettingsContent, // TODO: android only ?
    PTUStylePropertyType_Lobby_SettingsElement,
    PTUStylePropertyType_Lobby_WebPromotions,
    PTUStylePropertyType_Lobby_ScreenCashier,
    PTUStylePropertyType_Lobby_PopupShared,  // TODO: android ?
    PTUStylePropertyType_Lobby_GradientColorsContent,
    PTUStylePropertyType_Lobby_MainElement,
    PTUStylePropertyType_Lobby_NavigationBar,
    PTUStylePropertyType_Lobby_NavigationHeader,
    PTUStylePropertyType_Lobby_ScreenLanguage,
    PTUStylePropertyType_Lobby_LanguageItem,
    PTUStylePropertyType_Lobby_TileMoreFrom,

    PTUStylePropertyType_Lobby__End
};

extern PTUStyleTypesDescription const * _Nonnull const PTUStylesLobbyDescriptions(void);
