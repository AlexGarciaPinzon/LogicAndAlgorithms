//
//  PTUStyleDictionaryLike.h
//  Lobby
//
//  Created by hlpa on 3/14/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
@import Middle.Globals;
@import CommonUI.PTUStylesExtended;

#import "PTUStylesLobby.h"

@class PTUStyleActivityIndicator;
@class PTUStyleWebViewNavBar;
@class PTUStyleScreenFavorites;
@class PTUStyleScreenWebView;
@class PTUStyleScreenBlockedGames;
@class PTUStyleScreenLogin;
@class PTUStyleScreenSplash;
@class PTUStyleScreenChangePassword;
@class PTUStyleScreenUpdate;
@class PTUStyleScreenSearch;
@class PTUStyleScreenGameTourFinish;
@class PTUStyleScreenAccount;
@class PTUStyleScreenSettings;
@class PTUStyleScreenGameTour;
@class PTUStyleLoadingPercent;
@class PTUStyleScreenHome;
@class PTUStyleScreenPromotions;
@class PTUStylePopupAutoplayLimits;
@class PTUStyleGamesRemoval;
@class PTUStyleScreenAdvisor;
@class PTUStyleScreenGameManagementManual;
@class PTUStyleScreenChat;
@class PTUStyleScreenGameInfo;
@class PTUStyleScreenCategory;
@class PTUStyleScreenMaintenance;
@class PTUStyleScreenForgotPassword;
@class PTUStyleAlert;
@class PTUStyleWebPromotions;
@class PTUStyleShared;
@class PTUStyleScreenMore;
@class PTUStyleScreenGameManagementAuto;
@class PTUStyleTabBar;
@class PTUStyleScreenVirtualCard;
@class PTUStyleFooter;
@class PTUStyleScreenAbout;
@class PTUStylePopupShared;
@class PTUStyleScreenExternalRegistration;
@class PTUStyleScreenCashier;
@class PTUStyleSettingsContent;
@class PTUStyleSearchBar;
@class PTUStyleTileGameSearchSuggestion;
@class PTUStylePromotionCellStyles;
@class PTUStyleNavigationBarContent;
@class PTUStyleTileMoreMenu;
@class PTUStyleScreenshots;
@class PTUStyleNavigationHeaderLogin;
@class PTUStyleNavigationHeaderSearch;
@class PTUStyleHomeSectionElementCategory;
@class PTUStyleHomeSectionElementMenu;
@class PTUStyleHomeSectionElementSearch;
@class PTUStyleHomeSectionElementSeparator;
@class PTUStyleHomeSectionElementMoreApps;
@class PTUStyleHomeSectionElementOtherApps;
@class PTUStyleGradientColorsContent;
@class PTUStyleTabBarContent;
@class PTUStyleScreenshotsContent;
@class PTUStyleNavigationHeaderContent;
@class PTUStyleToast;
@class PTUStyleAlertSessionLimits;
@class PTUStyleAlertSessionLimitsEnd;
@class PTUStylePopupTouchID;

#define PTUStyle_Definition_LanguageItem(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   title,              PTUStylePropertyType_Label,     title,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  selectedIconButton, PTUStylePropertyType_Button,    selected_icon,  ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleLanguageItem, PTUStyle_Definition_LanguageItem)

#define PTUStyle_Definition_ScreenLanguage(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 backgroundColor,    PTUStylePropertyType_Color,                 background,     ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLanguageItem *,    languageItem,       PTUStylePropertyType_Lobby_LanguageItem,    language_item,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,           titleLabel,         PTUStylePropertyType_Label,                 title,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,          okButton,           PTUStylePropertyType_Button,                ok_button,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,       separator,          PTUStylePropertyType_Separator,             separator_,     ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenLanguage, PTUStyle_Definition_ScreenLanguage)

#define PTUStyle_Definition_TabBarElement(step) \
PTUStylePropertyDefinition_ ## step (NSString *, text,              PTUStylePropertyType_String,    text,           ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *, actionName,        PTUStylePropertyType_String,    action,         ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *, activeImagePath,   PTUStylePropertyType_String,    image_active,   ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *, inactiveImagePath, PTUStylePropertyType_String,    image_inactive, ARC,    Required,   Inline)

PTUStyleDefineInterface(PTUStyleTabBarElement, PTUStyle_Definition_TabBarElement)

#define PTUStyle_Definition_ScreenIceConfig(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,        PTUStylePropertyType_Color,             background,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       valueLabel,             PTUStylePropertyType_Label,       value,                  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,             PTUStylePropertyType_Label,       title,                  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       labelLabel,             PTUStylePropertyType_Label,       label_,                 ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      applyDisabledButton,    PTUStylePropertyType_Button,      apply_button_disabled,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      applyEnabledButton,     PTUStylePropertyType_Button,      apply_button,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   checkIconImageView,     PTUStylePropertyType_ImageView,   check_icon,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        itemView,               PTUStylePropertyType_View,        item,                   ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenIceConfig, PTUStyle_Definition_ScreenIceConfig)

#define PTUStyle_Definition_PlaceholderNoGames(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   noGamesPlaceholderPhoneImageView,   PTUStylePropertyType_ImageView, no_games_holder,                    ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   noGamesPlaceholderTabImageView,     PTUStylePropertyType_ImageView, no_games_holder_tab,                ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       emptyPageExplanationTextTitle,      PTUStylePropertyType_Label,     empty_page_explanation_text_title,  ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       emptyPageExplanationTextContent,    PTUStylePropertyType_Label,     empty_page_explanation_text,        ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStylePlaceholderNoGames, PTUStyle_Definition_PlaceholderNoGames)

#define PTUStyle_Definition_ScreenLaunch(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                          loadingImageVisible,    PTUStylePropertyType_Boolean,                   loading_image_visible,  NSNumber_BOOL,  Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,               blockedCountryLabel,    PTUStylePropertyType_Label,               blocked_country,        ARC,            Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              blockedCountryButton,   PTUStylePropertyType_Button,              blocked_country_button, ARC,            Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextView *,            blockedCountryTextView, PTUStylePropertyType_TextView,            blocked_country_text,   ARC,            Required,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleActivityIndicator *,   activityIndicatorStyle, PTUStylePropertyType_Lobby_ActivityIndicator,   activityindicator,      ARC,            Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenLaunch, PTUStyle_Definition_ScreenLaunch)

#define PTUStyle_Definition_LobbyCommon(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleWebViewNavBar *,               webViewNavBar,          PTUStylePropertyType_Lobby_WebViewNavBar,               external_page,                  ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenFavorites *,             favorites,              PTUStylePropertyType_Lobby_ScreenFavorites,             favorites,                      ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenWebView *,               externalLogin,          PTUStylePropertyType_Lobby_ScreenWebView,               external_login,                 ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleToaster *,                     toasterMessage,         PTUStylePropertyType_Lobby_Toaster,                     toaster_message,                ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenBlockedGames *,          blockedGames,           PTUStylePropertyType_Lobby_ScreenBlockedGames,          block_game_dialog,              ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenLogin *,                 login,                  PTUStylePropertyType_Lobby_ScreenLogin,                 login,                          ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenSplash *,                splash,                 PTUStylePropertyType_Lobby_ScreenSplash,                game_splash_screen,             ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenChangePassword *,        changePassword,         PTUStylePropertyType_Lobby_ScreenChangePassword,        change_password,                ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenUpdate *,                update,                 PTUStylePropertyType_Lobby_ScreenUpdate,                update_screen,                  ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenSearch *,                search,                 PTUStylePropertyType_Lobby_ScreenSearch,                search,                         ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenGameTourFinish *,        gameTourFinish,         PTUStylePropertyType_Lobby_ScreenGameTourFinish,        game_tour_finish_screen,        ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenAccount *,               account,                PTUStylePropertyType_Lobby_ScreenAccount,               my_account,                     ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenWebView *,               webView,                PTUStylePropertyType_Lobby_ScreenWebView,               web_view,                       ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenSettings *,              settings,               PTUStylePropertyType_Lobby_ScreenSettings,              settings,                       ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleToast *,                       toast,                  PTUStylePropertyType_Lobby_Toast,                       recently_downloaded_toast,      ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenGameTour *,              gameTour,               PTUStylePropertyType_Lobby_ScreenGameTour,              game_tour,                      ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleLoadingPercent *,              gameLoading,            PTUStylePropertyType_Lobby_LoadingPercent,              game_loading,                   ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenLaunch *,                launch,                 PTUStylePropertyType_Lobby_ScreenLaunch,                launch,                         ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenHome *,                  home,                   PTUStylePropertyType_Lobby_ScreenHome,                  home,                           ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenIceConfig *,             iceConfig,              PTUStylePropertyType_Lobby_ScreenIceConfig,             ice2017_configure,              ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenPromotions *,            promotions,             PTUStylePropertyType_Lobby_ScreenPromotions,            promotions,                     ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStylePopupAutoplayLimits *,         autoplayLimits,         PTUStylePropertyType_Lobby_PopupAutoplayLimits,         autoplay_dialog,                ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGamesRemoval *,                gamesRemoval,           PTUStylePropertyType_Lobby_GamesRemoval,                games_auto_removal_popup,       ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenAdvisor *,               advisor,                PTUStylePropertyType_Lobby_ScreenAdvisor,               game_advisor,                   ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenGameManagementManual *,  gameManagementManual,   PTUStylePropertyType_Lobby_ScreenGameManagementManual,  game_management,                ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenChat *,                  chat,                   PTUStylePropertyType_Lobby_ScreenChat,                  chat,                           ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenGameInfo *,              gameInfo,               PTUStylePropertyType_Lobby_ScreenGameInfo,              game_info,                      ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenCategory *,              category,               PTUStylePropertyType_Lobby_ScreenCategory,              category,                       ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenMaintenance *,           maintenance,            PTUStylePropertyType_Lobby_ScreenMaintenance,           maintenance,                    ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenForgotPassword *,        forgotPassword,         PTUStylePropertyType_Lobby_ScreenForgotPassword,        forgot_password,                ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleAlertSessionLimitsEnd *,       sessionLimitsEnd,       PTUStylePropertyType_Lobby_AlertSessionLimitsEnd,       time_limit_error_dialog,        ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleShared *,                      shared,                 PTUStylePropertyType_Lobby_Shared,                      shared_,                        ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleWebPromotions *,               webPromotions,          PTUStylePropertyType_Lobby_WebPromotions,               webpromotions,                  ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleAlertSessionLimits *,          sessionLimits,          PTUStylePropertyType_Lobby_AlertSessionLimits,          game_limits_dialog,             ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenMore *,                  more,                   PTUStylePropertyType_Lobby_ScreenMore,                  more,                           ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenGameManagementAuto *,    gameManagementAuto,     PTUStylePropertyType_Lobby_ScreenGameManagementAuto,    game_management_automatically,  ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleTabBar *,                      tabBar,                 PTUStylePropertyType_Lobby_TabBar,                      tab_bar,                        ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenVirtualCard *,           virtualCard,            PTUStylePropertyType_Lobby_ScreenVirtualCard,           virtual_card,                   ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleFooter *,                      footer,                 PTUStylePropertyType_Footer,                            footer_,                        ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenAbout *,                 about,                  PTUStylePropertyType_Lobby_ScreenAbout,                 about,                          ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStylePopupTouchID *,                touchID,                PTUStylePropertyType_Lobby_PopupTouchID,                touch_id_dialog,                ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStylePopupShared *,                 popupShared,            PTUStylePropertyType_Lobby_PopupShared,                 share_dialog,                   ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenExternalRegistration *,  externalRegistration,   PTUStylePropertyType_Lobby_ScreenExternalRegistration,  external_registration,          ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenCashier *,               cashier,                PTUStylePropertyType_Lobby_ScreenCashier,               cashier,                        ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenLanguage *,              language,               PTUStylePropertyType_Lobby_ScreenLanguage,              language_selector,              ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleLanguageItem *,                languageItem,           PTUStylePropertyType_Lobby_LanguageItem,                language_item,                  ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleSessionPanel *,                sessionPanel,           PTUStylePropertyType_SessionPanel,                      lobby_session_panel,            ARC,    Required,   Inline)

#define PTUStyle_Definition_LobbyCommon_WithInfo(step) \
PTUStyle_Definition_LobbyCommon(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleInfo *,    info,   PTUStylePropertyType_Style, _,  ARC,    Required,   _)

PTUStyleDefineInterface(PTUStyleLobbyCommon, PTUStyle_Definition_LobbyCommon_WithInfo)

@interface PTUStyleLobbyCommon ()

@property (strong, nonatomic, nullable, readonly) NSDictionary<NSString *, PTUStyleNavigationBarContent *> *navigationBarStyles;
@property (strong, nonatomic, nullable, readonly) NSDictionary<NSString *, PTUStyleNavigationHeaderContent *> *navigationHeaderStyles;

- (PTUStylesProperty * _Nullable)propertyForKey:(NSString * _Nonnull)key;

@end

#define PTUStyle_Definition_ScreenUpdate(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,        PTUStylePropertyType_Color,     background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      continueButton,         PTUStylePropertyType_Button,    download_button,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      cancelButton,           PTUStylePropertyType_Button,    cancel_button,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      downloadOrErrorButton,  PTUStylePropertyType_Button,    download_button,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   logoImageView,          PTUStylePropertyType_ImageView, update_logo,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextView *,    errorTextView,          PTUStylePropertyType_TextView,  update_text,        ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenUpdate, PTUStyle_Definition_ScreenUpdate)

#define PTUStyle_Definition_ActivityIndicator(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 backgroundColor,        PTUStylePropertyType_Color,             background,     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 outerCircleColor,       PTUStylePropertyType_Color,             outer_circle,   ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 innerCircleColor,       PTUStylePropertyType_Color,             inner_circle,   ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 activeColor,            PTUStylePropertyType_Color,             active,         ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 inactiveColor,          PTUStylePropertyType_Color,             inactive,       ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 textColor,              PTUStylePropertyType_Color,             text,           ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                playImagePath,          PTUStylePropertyType_String,            play_image_URL, ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                loadingViewLogoAddress, PTUStylePropertyType_String,            logo_url,       ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,            gradientView,           PTUStylePropertyType_View,              gradient_style, ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleActivityIndicator, PTUStyle_Definition_ActivityIndicator)

#define PTUStyle_Definition_ScreenCategory(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,    PTUStylePropertyType_Color,         background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,        tileStyleName,      PTUStylePropertyType_String,        game_tile_style,    ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,        gridStyleName,      PTUStylePropertyType_String,        games_grid_style,   ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,        categoryStyle,      PTUStylePropertyType_String,        category_style,     ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   noGamesText,        PTUStylePropertyType_Label,   no_games_text,      ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenCategory, PTUStyle_Definition_ScreenCategory)

#define PTUStyle_Definition_LoadingBar(step) \
PTUStylePropertyDefinition_ ## step (NSString *,    progressAnimationImageAddress,  PTUStylePropertyType_String,    progress_animation_image,   ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     progressColor,                  PTUStylePropertyType_Color,     progress_,                   ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleLoadingBar, PTUStyle_Definition_LoadingBar)

#define PTUStyle_Definition_ScreenAdvisor(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,        PTUStylePropertyType_Color,             background,                     ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,            gameTileStyleID,        PTUStylePropertyType_String,            game_tile_style,                ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,             PTUStylePropertyType_Label,       game_advisor_title,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       hideLabel,              PTUStylePropertyType_Label,       game_advisor_hide_label,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      hideButton,             PTUStylePropertyType_Button,      game_advisor_hide,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      tabButton,              PTUStylePropertyType_Button,      game_advisor_tab,               ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      subTabButton,           PTUStylePropertyType_Button,      game_advisor_sub_tab,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      tabArrowButton,         PTUStylePropertyType_Button,      game_advisor_tab_arrow,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      subTabArrowButton,      PTUStylePropertyType_Button,      game_advisor_sub_tab_arrow,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      tabActiveArrowButton,   PTUStylePropertyType_Button,      game_advisor_tab_active_arrow,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      closeButton,            PTUStylePropertyType_Button,      game_advisor_close,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSwitch *,      dontShowAgainSwitch,    PTUStylePropertyType_Switch,      dont_show_again_switch,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,   separator,              PTUStylePropertyType_Separator,   game_advisor_separator,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        androidWrongKey,        PTUStylePropertyType_View,        game_advisor_separator,                      ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        containerView,          PTUStylePropertyType_View,        container,                      ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenAdvisor, PTUStyle_Definition_ScreenAdvisor)

#define PTUStyle_Definition_NavigationBarElement(step) \
PTUStylePropertyDefinition_ ## step (NSString *,                        positionString,             PTUStylePropertyType_String,                        navigation_position,    ARC,    Required,   Inline)     \
PTUStylePropertyDefinition_ ## step (NSString *,                        availableForLoggedInState,  PTUStylePropertyType_String,                        visibility,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                        elementIdentifier,          PTUStylePropertyType_String,                        element_id,             ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                  button,                     PTUStylePropertyType_Button,                  button_,                ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,               imageView,                  PTUStylePropertyType_ImageView,               image_,                 ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,               androidWrongKey,                  PTUStylePropertyType_ImageView,               select_icon,                 ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationHeaderContent *, navigationHeader,           PTUStylePropertyType_Lobby_NavigationHeaderContent, navigation_header,      ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,               androidWrongKey2,    PTUStylePropertyType_Label,               select_label,        ARC,            Optional,   Content)    \

PTUStyleDefineInterface(PTUStyleNavigationBarElement, PTUStyle_Definition_NavigationBarElement)

@interface PTUStyleNavigationBarElement ()

- (PTUStyleVisibility)visibility;
- (PTUStyleNavigationPosition)position;

@end

#define PTUStyle_Definition_CategoryElement(step) \
PTUStylePropertyDefinition_ ## step (CGFloat,   marginTop,          PTUStylePropertyType_Size,  margin_top,     NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,   marginLeft,         PTUStylePropertyType_Size,  margin_left,    NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,   marginBottom,       PTUStylePropertyType_Size,  margin_right,   NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,   marginRight,        PTUStylePropertyType_Size,  margin_bottom,  NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *, backgroundColor,    PTUStylePropertyType_Color, background,     ARC,                Optional,   Property)

PTUStyleDefineInterface(PTUStyleCategoryElement, PTUStyle_Definition_CategoryElement)

#define PTUStyle_Definition_HomeSectionElementPromotion(step) \
PTUStylePropertyDefinition_ ## step (NSString *,    promotionID,    PTUStylePropertyType_String,    promotion_id,   ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    styleID,        PTUStylePropertyType_String,    style_id,       ARC,    Required,   Inline)

PTUStyleDefineInterface(PTUStyleHomeSectionElementPromotion, PTUStyle_Definition_HomeSectionElementPromotion)

#define PTUStyle_Definition_MemoryBar(step) \
PTUStylePropertyDefinition_ ## step (CGFloat,   cornerRadius,   PTUStylePropertyType_Size,  corner_radius,  NSNumber_CGFloat,   Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (UIColor *, color1,         PTUStylePropertyType_Color, memory_bar_1,   ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *, color2,         PTUStylePropertyType_Color, memory_bar_2,   ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *, color3,         PTUStylePropertyType_Color, memory_bar_3,   ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *, color4,         PTUStylePropertyType_Color, memory_bar_4,   ARC,                Optional,   Property)

PTUStyleDefineInterface(PTUStyleMemoryBar, PTUStyle_Definition_MemoryBar)

#define PTUStyle_Definition_PopupShared(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   dialogImageView,    PTUStylePropertyType_ImageView, dialog_image,   ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStylePopupShared, PTUStyle_Definition_PopupShared)

#define PTUStyle_Definition_PromotionBanners(step) \
PTUStylePropertyDefinition_ ## step (CGFloat,               cornerRadius,       PTUStylePropertyType_Size,      corner_radius,  NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,               scrollTime,         PTUStylePropertyType_Size,      scroll_time,    NSNumber_CGFloat,   Required,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,               elevation,          PTUStylePropertyType_Size,      elevation,      NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,     background,     ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,            elementIdentifier,  PTUStylePropertyType_String,    element_id,     ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,            gridStyle,          PTUStylePropertyType_String,    grid_style,     ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       promotionNameLabel, PTUStylePropertyType_Label,     promotion_name, ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       moreInfoLabel,      PTUStylePropertyType_Label,     more_info,      ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      joinNowButton,      PTUStylePropertyType_Button,    join_now,       ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,   separator,          PTUStylePropertyType_Separator, separator_,     ARC,                Optional,   Content)

PTUStyleDefineInterface(PTUStylePromotionBanners, PTUStyle_Definition_PromotionBanners)

#define PTUStyle_Definition_ScreenSettings(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 backgroundColor,        PTUStylePropertyType_Color,             background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                 backgroundPressedColor, PTUStylePropertyType_Color,             background_pressed, ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleSettingsContent *, content,                PTUStylePropertyType_Lobby_SettingsContent,   content,            ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenSettings, PTUStyle_Definition_ScreenSettings)

#define PTUStyle_Definition_ScreenSearch(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                             backgroundColor,    PTUStylePropertyType_Color,                             background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                            gameTileStyle,      PTUStylePropertyType_String,                            game_tile_style,    ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                            gridStyle,          PTUStylePropertyType_String,                            grid_style,         ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                       headerTitle,        PTUStylePropertyType_Label,                       header_title,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                      clearButton,        PTUStylePropertyType_Button,                      button_clear,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                      backButton,         PTUStylePropertyType_Button,                      button_back,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSearchBar *,                   searchBar,          PTUStylePropertyType_Lobby_SearchBar,                   games_search_bar,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTileGameSearchSuggestion *,    suggestionGameCell, PTUStylePropertyType_Lobby_TileGameSearchSuggestion,    suggestion_cell,    ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenSearch, PTUStyle_Definition_ScreenSearch)

#define PTUStyle_Definition_NavigationHeaderMenuCategories(step) \
PTUStylePropertyDefinition_ ## step (BOOL,              androidWrongKey,           PTUStylePropertyType_Boolean,   sticky,     NSNumber_BOOL,  Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,              Property,           PTUStylePropertyType_Boolean,   inline,     NSNumber_BOOL,  Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,        elementIdentifier,  PTUStylePropertyType_String,    element_id, ARC,            Required,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,        androidWrongKey2,   PTUStylePropertyType_String,    type, ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, categoryIDs,        PTUStylePropertyType_Strings,   ids,        ARC,            Required,   Inline)

PTUStyleDefineInterface(PTUStyleNavigationHeaderMenuCategories, PTUStyle_Definition_NavigationHeaderMenuCategories)

#define PTUStyle_Definition_ScreenPromotions(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundColor,    PTUStylePropertyType_Color,                     background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                    promotionStyle,     PTUStylePropertyType_String,                    promotions_style,   ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStylePromotionCellStyles *, cellStyles,         PTUStylePropertyType_Lobby_PromotionCellStyles, styles,             ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenPromotions, PTUStyle_Definition_ScreenPromotions)

#define PTUStyle_Definition_More(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 backgroundColor,    PTUStylePropertyType_Color,                 background,     ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleTileMoreMenu *,    cell,               PTUStylePropertyType_Lobby_TileMoreMenu,    more_from_tile, ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenMore, PTUStyle_Definition_More)

#define PTUStyle_Definition_TileGame(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                          anotationViewHiddenDirectlyByStyle,     PTUStylePropertyType_Boolean,                   hide_game_title,        NSNumber_BOOL,      Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (BOOL,                          noElevation,                            PTUStylePropertyType_Boolean,                   no_elevation,           NSNumber_BOOL,      Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (BOOL,                          rippleEffectDisabled,                   PTUStylePropertyType_Boolean,                   ripple_effect_disabled, NSNumber_BOOL,      Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (BOOL,                          imageBorders,                           PTUStylePropertyType_Boolean,                   image_borders,          NSNumber_BOOL,      Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                       cornerRadius,                           PTUStylePropertyType_Size,                      corner_radius,          NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                       borderWidthInternal,                    PTUStylePropertyType_Size,                      border_width,           NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                    elementIdentifier,                      PTUStylePropertyType_String,                    element_id,             ARC,                Required,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                    downloadedStyleString,                  PTUStylePropertyType_String,                    downloaded_style,       ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundColor,                        PTUStylePropertyType_Color,                     background,             ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                     borderColorInternal,                    PTUStylePropertyType_Color,                     border_color,           ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,               gameTitle,                              PTUStylePropertyType_Label,               game_title,             ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,               jackpotLabel,                           PTUStylePropertyType_Label,               jackpot_label,          ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              dotImage,                               PTUStylePropertyType_Button,              dot,                    ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              favoriteButton,                         PTUStylePropertyType_Button,              favorites,              ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              suggestedLabelButton,                   PTUStylePropertyType_Button,              suggested_label,        ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              androidWrongKey3,                   PTUStylePropertyType_Button,              downloaded,        ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              selectButton,                           PTUStylePropertyType_Button,              button_game_checker_id, ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,           downloadedImageView,                    PTUStylePropertyType_ImageView,           downloaded,             ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,           updatingImageView,                      PTUStylePropertyType_ImageView,           updating,               ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,           gameImage,                              PTUStylePropertyType_ImageView,           game_image,             ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,           androidWrongKey2,                              PTUStylePropertyType_ImageView,           gameImage,             ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,           downloadContinueImageView,              PTUStylePropertyType_ImageView,           download_continue,      ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              androidWrongKey,              PTUStylePropertyType_Button,              download_cancel,        ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleActivityIndicator *,   progressActivityIndicator,              PTUStylePropertyType_Lobby_ActivityIndicator,   progress,               ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,                jackpotView,                            PTUStylePropertyType_View,                jackpot_background,     ARC,                Optional,   Content)

PTUStyleDefineInterface(PTUStyleTileGame, PTUStyle_Definition_TileGame)

typedef NS_ENUM(NSUInteger, PTUStyleTileGameDownloadedStyle)
{
    PTUStyleTileGameDownloadedStyleTopLeft,
    PTUStyleTileGameDownloadedStyleBottomRight
};

typedef NS_ENUM(NSUInteger, PTUStyleTileGameTitleAlignment)
{
    PTUStyleTileGameTitleAlignmentProportional,
    PTUStyleTileGameTitleAlignmentCenter
};

@interface PTUStyleTileGame ()

@property (assign, nonatomic, readonly) PTUStyleTileGameDownloadedStyle downloadedStyle;
@property (assign, nonatomic, readonly) BOOL gameTitleHidden;
@property (assign, nonatomic, readonly) BOOL annotationViewHidden;
@property (assign, nonatomic, readonly) CGFloat annotationViewHeight;
@property (assign, nonatomic, readonly) CGFloat cellAspectRatio;
@property (assign, nonatomic, readonly) PTUGameImageType gameImageType;
@property (assign, nonatomic) PTUStyleTileGameTitleAlignment gameTitleAlignment;
@property (assign, nonatomic) CGFloat contentCornerRadius;
@property (assign, nonatomic) CGFloat imageCornerRadius;
@property (assign, nonatomic) CGFloat iconAndJackpotContainerCornerRadius;
@property (assign, nonatomic) CGFloat downloadControlCornerRadius;
@property (strong, nonatomic, nullable) UIColor *borderColor;
@property (assign, nonatomic) CGFloat borderWidth;

- (CGFloat)cellHeightForWidth:(CGFloat)width;
- (CGFloat)favoritesCellHeightForWidth:(CGFloat)width;

@end

#define PTUStyle_Definition_OtherApps(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,    PTUStylePropertyType_Color, background, ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   title,              PTUStylePropertyType_Label, title,      ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleOtherApps, PTUStyle_Definition_OtherApps)

#define PTUStyle_Definition_ScreenExternalRegistration(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                              shouldHideNavigationPanel,  PTUStylePropertyType_Boolean,                       hide_web_navigation,    NSNumber_BOOL,  Optional,   Property) \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationBarContent *,    navigationBar,              PTUStylePropertyType_Lobby_NavigationBarContent,    navbar,                 ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleScreenExternalRegistration, PTUStyle_Definition_ScreenExternalRegistration)

#define PTUStyle_Definition_TileMoreMenu(step) \
PTUStylePropertyDefinition_ ## step (NSString *,        typeID,                 PTUStylePropertyType_String,        more_from_style,    ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,        tileStyleID,            PTUStylePropertyType_String,        game_tile_style,    ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,        PTUStylePropertyType_Color,         background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   gameTitle,              PTUStylePropertyType_Label,   game_title,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   gameDescriptionTitle,   PTUStylePropertyType_Label,   game_description,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  downloadButton,         PTUStylePropertyType_Button,  download,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLoadingBar *, progressBarStyle,       PTUStylePropertyType_Lobby_LoadingBar,          progress_game_item_download,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  playButton,             PTUStylePropertyType_Button,  play,               ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleTileMoreMenu, PTUStyle_Definition_TileMoreMenu)

#define PTUStyle_Definition_TileCategory(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,    PTUStylePropertyType_Color,         background,     ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   categoryTitleLabel, PTUStylePropertyType_Label,   category_title,  ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleTileCategory, PTUStyle_Definition_TileCategory)

#define PTUStyle_Definition_LoginScreen(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                         backgroundColor,        PTUStylePropertyType_Color,                 background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                         errorColor,             PTUStylePropertyType_Color,                 error,              ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationBarContent *,    navigationBar,          PTUStylePropertyType_Lobby_NavigationBarContent,  navbar,             ARC,    Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                  loginButton,            PTUStylePropertyType_Button,                login_button,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                  joinNowButton,          PTUStylePropertyType_Button,                join_now,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                  forgotPasswordButton,   PTUStylePropertyType_Button,                forgot_password,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                  facebookLoginButton,    PTUStylePropertyType_Button,                login_via_fb,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                  rememberMeButton,       PTUStylePropertyType_Button,                remember_me,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   rememberMeLabel,        PTUStylePropertyType_Label,                 remember_me,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,               passwordTextField,      PTUStylePropertyType_TextField,             password,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,               usernameTextField,      PTUStylePropertyType_TextField,             username,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   infoLabel,              PTUStylePropertyType_Label,                 info,               ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,               logoImageView,          PTUStylePropertyType_ImageView,             logo,               ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenLogin, PTUStyle_Definition_LoginScreen)

#define PTUStyle_Definition_ScreenGameInfo(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,            PTUStylePropertyType_Color,             background,                 ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,            gameInfoTypeIDInternal,     PTUStylePropertyType_String,            games_info_style,           ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       gameTitleLabel,             PTUStylePropertyType_Label,       game_title,                 ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       gameTypeLabel,              PTUStylePropertyType_Label,       game_detailed_title,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       notAvailableLabel,          PTUStylePropertyType_Label,       game_not_available_title,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       keyLabel,                   PTUStylePropertyType_Label,       game_info_key,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       valueLabel,                 PTUStylePropertyType_Label,       game_info_value,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       gameDescriptionLabel,       PTUStylePropertyType_Label,       game_description,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   largeGameIconImageView,     PTUStylePropertyType_ImageView,   header_image,               ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   smallGameIcon1ImageView,    PTUStylePropertyType_ImageView,   icon_image,                 ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   smallGameIcon2ImageView,    PTUStylePropertyType_ImageView,   icon_background,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,   separator,                  PTUStylePropertyType_Separator,   separator_view,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        container,                  PTUStylePropertyType_View,        container,                  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenshots *, screenshots,                PTUStylePropertyType_Lobby_Screenshots, screenshots_view,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      playButton,                 PTUStylePropertyType_Button,      game_button,                ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      downloadButton,             PTUStylePropertyType_Button,      download_button,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      androidWrongKey,             PTUStylePropertyType_Button,      download_cancel,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      androidWrongKey2,             PTUStylePropertyType_Button,      download_cancel_image,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      demoButton,                 PTUStylePropertyType_Button,      game_demo_button,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   downloadContinueImageView,  PTUStylePropertyType_ImageView,   download_continue_image,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   screenshot1ImageView,       PTUStylePropertyType_ImageView,   screenshot_image_1,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   screenshot2ImageView,       PTUStylePropertyType_ImageView,   screenshot_image_2,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   screenshot3ImageView,       PTUStylePropertyType_ImageView,   screenshot_image_3,         ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenGameInfo, PTUStyle_Definition_ScreenGameInfo)

typedef NS_ENUM(NSUInteger, PTUStyleScreenGameInfoTypeID)
{
    PTUStyleScreenGameInfoTypeID1,
    PTUStyleScreenGameInfoTypeID2
};

@interface PTUStyleScreenGameInfo ()

- (PTUStyleScreenGameInfoTypeID)gameInfoTypeID;

@end

#define PTUStyle_Definition_NavigationHeaderElement(step) \
PTUStylePropertyDefinition_ ## step (NSString *,                                availableForLoggedInState,  PTUStylePropertyType_String,                                visibility, ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationHeaderLogin *,           login,                      PTUStylePropertyType_Lobby_NavigationHeaderLogin,           login_,     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationHeaderSearch *,          search,                     PTUStylePropertyType_Lobby_NavigationHeaderSearch,          search_,    ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationHeaderMenuCategories *,  menuCategories,             PTUStylePropertyType_Lobby_NavigationHeaderMenuCategories,  menu_,      ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleNavigationHeaderElement, PTUStyle_Definition_NavigationHeaderElement)

@interface PTUStyleNavigationHeaderElement ()

- (PTUStyleVisibility)visibility;

@end

#define PTUStyle_Definition_ScreenGameTour(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,            PTUStylePropertyType_Color,     background,          ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,        gameTileStyle,              PTUStylePropertyType_String,    game_tile_style,    ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,        grdiStyle,                  PTUStylePropertyType_String,    grid_style,         ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  startGameTourButton,        PTUStylePropertyType_Button,    start_game_tour,    ARC,    Required,   Content)

PTUStyleDefineInterface(PTUStyleScreenGameTour, PTUStyle_Definition_ScreenGameTour)

#define PTUStyle_Definition_ScreenBlockedGames(step) \
PTUStylePropertyDefinition_ ## step (CGFloat,               cornerRadius,       PTUStylePropertyType_Size,      corner_radius,                          NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,     background,                             ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             errorColor,         PTUStylePropertyType_Color,     error,                                  ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       messageLabel,       PTUStylePropertyType_Label,     block_game_dialog_text,                 ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       passwordHintLabel,  PTUStylePropertyType_Label,     block_game_dialog_text_password_hint,   ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       wrongPasswordLabel, PTUStylePropertyType_Label,     blocked_game_wrong_password_label,      ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      okButton,           PTUStylePropertyType_Button,    block_game_dialog_positive_button,      ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      closeButton,        PTUStylePropertyType_Button,    block_game_dialog_negative_button,      ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   passwordTextField,  PTUStylePropertyType_TextField, block_game_dialog_password_field,       ARC,                Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenBlockedGames, PTUStyle_Definition_ScreenBlockedGames)

#define PTUStyle_Definition_MainElement(step) \
PTUStylePropertyDefinition_ ## step (NSString *,        elementIdentifier,          PTUStylePropertyType_String,    element_id,                 ARC,                Optional,   Property) \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,            PTUStylePropertyType_Color,     background,                 ARC,                Optional,   Property) \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,    mainScreenContentListView,  PTUStylePropertyType_View,      main_screen_content_list,   ARC,                Optional,   Content)

PTUStyleDefineInterface(PTUStyleMainElement, PTUStyle_Definition_MainElement)

#define PTUStyle_Definition_ScreenGameTourFinish(step) \
PTUStylePropertyDefinition_ ## step (NSString *,        gameTileStyle,      PTUStylePropertyType_String,    game_tile_style,    ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,        gridStyle,          PTUStylePropertyType_String,    grid_style,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,    PTUStylePropertyType_Color,     background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  okButton,           PTUStylePropertyType_Button,    ok_button,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,    backgroundView,     PTUStylePropertyType_View,      background,         ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenGameTourFinish, PTUStyle_Definition_ScreenGameTourFinish)

#define PTUStyle_Definition_WebPromotions(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                              shouldHideNavigationPanel,  PTUStylePropertyType_Boolean,               hide_web_navigation,    NSNumber_BOOL,  Optional,   Property) \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationBarContent *,    navigationBar,              PTUStylePropertyType_Lobby_NavigationBarContent,  navbar,                 ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleWebPromotions, PTUStyle_Definition_WebPromotions)

#define PTUStyle_Definition_TileGameSearchSuggestion(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,                PTUStylePropertyType_Color,     background,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,                     PTUStylePropertyType_Label,     game_title,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   rightPlayIconImageView,         PTUStylePropertyType_ImageView, play_icon,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   leftRecentlySearchedImageView,  PTUStylePropertyType_ImageView, recently_search_icon,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   leftSearchImageView,            PTUStylePropertyType_ImageView, search_icon,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   dividerImageView,               PTUStylePropertyType_ImageView, divider,                ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,   separator,                      PTUStylePropertyType_Separator, separator_,             ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleTileGameSearchSuggestion, PTUStyle_Definition_TileGameSearchSuggestion)

#define PTUStyle_Definition_HomeSectionElement_(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                                  sticky,     PTUStylePropertyType_Boolean,                               sticky,     NSNumber_BOOL,  Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleHomeSectionElementCategory *,  category,   PTUStylePropertyType_Lobby_HomeSectionElement_Category,     category,   ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleHomeSectionElementMenu *,      menu,       PTUStylePropertyType_Lobby_HomeSectionElement_Menu,         menu,       ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleHomeSectionElementPromotion *, promotion,  PTUStylePropertyType_Lobby_HomeSectionElement_Promotion,    promotion,  ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleHomeSectionElementSearch *,    search,     PTUStylePropertyType_Lobby_HomeSectionElement_Search,       search,     ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleHomeSectionElementSeparator *, separator,  PTUStylePropertyType_Lobby_HomeSectionElement_Separator,    separator,  ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleHomeSectionElementMoreApps *,  moreApps,   PTUStylePropertyType_Lobby_HomeSectionElement_MoreApps,     moreApps,   ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleHomeSectionElementOtherApps *, otherApps,  PTUStylePropertyType_Lobby_HomeSectionElement_OtherApps,    otherApps,  ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleHomeSectionElement_, PTUStyle_Definition_HomeSectionElement_)

typedef NS_ENUM(NSUInteger, PTUStyleHomeSectionElementTweakType)
{
    PTUStyleHomeSectionElementTweakType_Unknown,
    PTUStyleHomeSectionElementTweakType_Category,
    PTUStyleHomeSectionElementTweakType_Promotion,
    PTUStyleHomeSectionElementTweakType_Menu,
    PTUStyleHomeSectionElementTweakType_OtherApps,
    PTUStyleHomeSectionElementTweakType_MoreApps,
    PTUStyleHomeSectionElementTweakType_Separator,
    PTUStyleHomeSectionElementTweakType_Search
};

#define PTUStyle_Definition_HomeSectionElement_Tweak(step) \
\
PTUStylePropertyDefinition_ ## step (NSString *,        typeString,     PTUStylePropertyType_String,    type,           ARC,            Required,   Inline) \
\
PTUStylePropertyDefinition_ ## step (BOOL,              sticky,         PTUStylePropertyType_Boolean,   sticky,         NSNumber_BOOL,  Optional,   Inline) \
\
PTUStylePropertyDefinition_ ## step (NSString *,        categoryID,     PTUStylePropertyType_String,    category_id,    ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,        gridStyleID,    PTUStylePropertyType_String,    grid_id,        ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,        tileStyleID,    PTUStylePropertyType_String,    tile_id,        ARC,            Optional,   Inline) \
\
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, categoryIDs,    PTUStylePropertyType_Strings,   ids,            ARC,            Optional,   Inline) \
\
PTUStylePropertyDefinition_ ## step (NSString *,        styleID,        PTUStylePropertyType_String,    style_id,       ARC,            Optional,   Inline) \
\
PTUStylePropertyDefinition_ ## step (NSString *,        promotionID,    PTUStylePropertyType_String,    promotion_id,   ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleHomeSectionElementTweak, PTUStyle_Definition_HomeSectionElement_Tweak)

@interface PTUStyleHomeSectionElementTweak ()

@property (assign, nonatomic, readonly) PTUStyleHomeSectionElementTweakType type;

@end

#define PTUStyle_Definition_ScreenWebView(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                              shouldHideNavigationPanel,  PTUStylePropertyType_Boolean,               hide_web_navigation,    NSNumber_BOOL,  Optional,   Property) \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationBarContent *,    navigationBar,              PTUStylePropertyType_Lobby_NavigationBarContent,  navbar,                 ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleScreenWebView, PTUStyle_Definition_ScreenWebView)

#define PTUStyle_Definition_PromotionCell(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,                PTUStylePropertyType_Color,     background,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       promotionNameLabel,             PTUStylePropertyType_Label,     promotion_name,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       promotionDescriptionLabel,      PTUStylePropertyType_Label,     promotion_description,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       moreInfoLabel,                  PTUStylePropertyType_Label,     more_info,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   promotionMoreInfoArrowImage,    PTUStylePropertyType_ImageView, next_arrow,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,   divider,                        PTUStylePropertyType_Separator, separator_,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        container,                      PTUStylePropertyType_View,      promotion_container,    ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStylePromotionCell, PTUStyle_Definition_PromotionCell)

#define PTUStyle_Definition_ScreenAbout(step) \
PTUStylePropertyDefinition_ ## step (UIColor *, backgroundColor, PTUStylePropertyType_Color, background, ARC, Optional, Property) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *, aboutLabel, PTUStylePropertyType_Label, about_text, ARC, Optional, Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *, aboutButton, PTUStylePropertyType_Button, about_button, ARC, Optional, Content)

PTUStyleDefineInterface(PTUStyleScreenAbout, PTUStyle_Definition_ScreenAbout)

#define PTUStyle_Definition_NavigationBar(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,     background, ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,         PTUStylePropertyType_Label,     title,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,   separator,          PTUStylePropertyType_Separator, separator_, ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleNavigationBar, PTUStyle_Definition_NavigationBar)

#define PTUStyle_Definition_PopupAutoplayLimits(step) \
PTUStylePropertyDefinition_ ## step (CGFloat,               cornerRadius,       PTUStylePropertyType_Size,      corner_radius,                          NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,     background,                             ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             errorColor,         PTUStylePropertyType_Color,     error,                                  ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,         PTUStylePropertyType_Label,     autoplay_dialog_title,                  ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       lossLabel,          PTUStylePropertyType_Label,     autoplay_dialog_stop_loss_label,        ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       winLabel,           PTUStylePropertyType_Label,     autoplay_dialog_stop_win_label,         ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       jackpotLabel,       PTUStylePropertyType_Label,     autoplay_dialog_stop_jackpot,           ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       lossWarningLabel,   PTUStylePropertyType_Label,     autoplay_dialog_stop_loss_label_error,  ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       winWarningLabel,    PTUStylePropertyType_Label,     autoplay_dialog_stop_win_label_error,   ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   lossTextField,      PTUStylePropertyType_TextField, autoplay_dialog_stop_loss_textfield,    ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   winTextField,       PTUStylePropertyType_TextField, autoplay_dialog_stop_win_textfield,     ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSwitch *,      winSwitch,          PTUStylePropertyType_Switch,    autoplay_dialog_single_win_switch,      ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSwitch *,      jackpotSwitch,      PTUStylePropertyType_Switch,    autoplay_dialog_win_jackpot_switch,     ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      confirmButton,      PTUStylePropertyType_Button,    autoplay_dialog_confirm_button,         ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      exitButton,         PTUStylePropertyType_Button,    autoplay_dialog_exit_button,            ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        contentView,        PTUStylePropertyType_View,      autoplay_dialog_content,                ARC,                Optional,   Content)

PTUStyleDefineInterface(PTUStylePopupAutoplayLimits, PTUStyle_Definition_PopupAutoplayLimits)

#define PTUStyle_Definition_GridGame(step) \
PTUStylePropertyDefinition_ ## step (CGFloat,                           cornerRadius,                   PTUStylePropertyType_Size,                          corner_radius,                  NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                           borderWidth,                    PTUStylePropertyType_Size,                          border,                         NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                           elevation,                      PTUStylePropertyType_Size,                          phone_height,                   NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                           androidWrongKey,                      PTUStylePropertyType_Size,                          tablet_height,                   NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                           phoneHeight,                    PTUStylePropertyType_Size,                          elevation,                      NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleColors *,                  buttonBorderColors,             PTUStylePropertyType_Colors,                        button_border,                  ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                         borderColor,                    PTUStylePropertyType_Color,                         border,                         ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                         backgroundColor,                PTUStylePropertyType_Color,                         background,                     ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                         selectedTabColor,               PTUStylePropertyType_Color,                         selected_tab_indicator,         ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                         unselectedTabColor,             PTUStylePropertyType_Color,                         unselected_tab_indicator,       ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                        elementIdentifier,              PTUStylePropertyType_String,                        element_id,                     ARC,                Required,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                        backgroundImagePortraitName,    PTUStylePropertyType_String,                        background_image_portrait,      ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                        backgroundImageLandscapeName,   PTUStylePropertyType_String,                        background_image_landscape,     ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleGradientColorsContent *,   buttonGradientColors,           PTUStylePropertyType_Lobby_GradientColorsContent,   gradient_button_styles,         ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleColors *,                  buttonColors,                   PTUStylePropertyType_Colors,                        button_color,                   ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *,                 foregroundImages,               PTUStylePropertyType_Strings,                       category_image,                 ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *,                 backgroundImages,               PTUStylePropertyType_Strings,                       category_background_image,      ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                           selectedUnderlineHeight,        PTUStylePropertyType_Size,                          selected_underline_height,      NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   androidWrongKey2,                  PTUStylePropertyType_Label,                         username,                 ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   categoryTitle,                  PTUStylePropertyType_Label,                         category_title,                 ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   androidWrongKey3,                  PTUStylePropertyType_Label,                         section_title,                 ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                  moreButton,                     PTUStylePropertyType_Button,                        more,                           ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                  categoryButton,                 PTUStylePropertyType_Button,                        category,                       ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTileCategory *,            categoryTile,                   PTUStylePropertyType_Lobby_TileCategory,            category_tile,                  ARC,                Optional,   Content)

PTUStyleDefineInterface(PTUStyleGridGame, PTUStyle_Definition_GridGame);

@interface PTUStyleGridGame ()

@property (assign, nonatomic, readonly) NSUInteger columnNumber;
@property (assign, nonatomic, readonly) CGFloat cellPadding;
@property (assign, nonatomic, readonly) CGFloat sectionInset;
@property (strong, nonatomic, nonnull, readonly) NSArray *templatePortrait;
@property (strong, nonatomic, nonnull, readonly) NSArray *templateLandscape;

@end

#define PTUStyle_Definition_DiskUsage(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       memoryText,     PTUStylePropertyType_Label,     memory_text,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       memoryValue,    PTUStylePropertyType_Label,     memory_value,   ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleDiskUsage, PTUStyle_Definition_DiskUsage)

#define PTUStyle_Definition_PopupBalance(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,     background,     ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,               cornerRadius,       PTUStylePropertyType_Size,      corner_radius,  NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       keyLabel,           PTUStylePropertyType_Label,     key,            ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       valueLabel,         PTUStylePropertyType_Label,     value,          ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      depositButton,      PTUStylePropertyType_Button,    deposit,        ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,   separatorView,      PTUStylePropertyType_Separator, separator_,     ARC,                Optional,   Content)

PTUStyleDefineInterface(PTUStylePopupBalance, PTUStyle_Definition_PopupBalance)

#define PTUStyle_Definition_GameManagementManualStyle(step) \
PTUStylePropertyDefinition_ ## step (NSString *,                    gameManagementStyle,    PTUStylePropertyType_String,                    game_management_style,  ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundColor,        PTUStylePropertyType_Color,                     background,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleDiskUsage *,           diskUsage,              PTUStylePropertyType_Lobby_DiskUsage,           diskusage,              ARC,    Required,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleMemoryBar *,           memoryBar,              PTUStylePropertyType_Lobby_MemoryBar,           memorybar,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStylePlaceholderNoGames *,  noGamesPlaceholder,     PTUStylePropertyType_Lobby_PlaceholderNoGames,  no_games_placeholder,   ARC,    Required,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTileGame *,            gameTile,               PTUStylePropertyType_Lobby_TileGame,            game_tile,              ARC,    Required,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,               titleLabel,             PTUStylePropertyType_Label,               game_management_text,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              clearSelectionButton,   PTUStylePropertyType_Button,              clear_selection_id,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              selectionButton,        PTUStylePropertyType_Button,              selection_id,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              buttonSelectionButton,  PTUStylePropertyType_Button,              button_selection_id,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              deleteButton,           PTUStylePropertyType_Button,              button_delete_id,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              selectAllButton,        PTUStylePropertyType_Button,              button_select_all_id,   ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenGameManagementManual, PTUStyle_Definition_GameManagementManualStyle)

#define PTUStyle_Definition_HomeSectionElementCategory(step) \
PTUStylePropertyDefinition_ ## step (NSString *,    categoryID,     PTUStylePropertyType_String,    category_id,    ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    gridStyleID,    PTUStylePropertyType_String,    grid_id,        ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    tileStyleID,    PTUStylePropertyType_String,    tile_id,        ARC,    Required,   Inline)

PTUStyleDefineInterface(PTUStyleHomeSectionElementCategory, PTUStyle_Definition_HomeSectionElementCategory)

#define PTUStyle_Definition_SettingsElement(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       label,      PTUStylePropertyType_Label,     label_,       ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   imageView,  PTUStylePropertyType_ImageView, imageview_,   ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleSwitch *,      theSwitch,  PTUStylePropertyType_Switch,    switch_,      ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleSettingsElement, PTUStyle_Definition_SettingsElement)

#define PTUStyle_Definition_ScreenGameManagementAuto(step) \
PTUStylePropertyDefinition_ ## step (NSString *,                        gameManagementStyle,        PTUStylePropertyType_String,                        game_management_style,  ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                         backgroundColor,            PTUStylePropertyType_Color,                         background,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationBarContent *,    navigationBar,              PTUStylePropertyType_Lobby_NavigationBarContent,    navbar,                 ARC,    Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   memoryTextLabel,            PTUStylePropertyType_Label,                         memory_text,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   memoryValueLabel,           PTUStylePropertyType_Label,                         memory_value,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   seekLabel,                  PTUStylePropertyType_Label,                         item_seek_label,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   switchLabel,                PTUStylePropertyType_Label,                         item_switch_label,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   switchInfoLabel,            PTUStylePropertyType_Label,                         item_top_label,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   detailedDescriptionLabel,   PTUStylePropertyType_Label,                         item_bottom_label,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                   seekValueLabel,             PTUStylePropertyType_Label,                         seek_value,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,               iconSwitchImageView,        PTUStylePropertyType_ImageView,                     icon_switch,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSlider *,                  slider,                     PTUStylePropertyType_Slider,                        game_limit_seekbar,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSwitch *,                  useAutoRemovingSwitch,      PTUStylePropertyType_Switch,                        use_auto_removing,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleMemoryBar *,               memoryBarView,              PTUStylePropertyType_Lobby_MemoryBar,               memorybar,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,               separatorView,              PTUStylePropertyType_Separator,                     separator_,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,                    backgroundView,             PTUStylePropertyType_View,                          container,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleDiskUsage *,               diskUsage,                  PTUStylePropertyType_Lobby_DiskUsage,               diskusage,              ARC,    Required,   Content)

PTUStyleDefineInterface(PTUStyleScreenGameManagementAuto, PTUStyle_Definition_ScreenGameManagementAuto)

#define PTUStyle_Definition_TabBar(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 backgroundColor,        PTUStylePropertyType_Color,                 background,                 ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                 tabBarBackgroundColor,  PTUStylePropertyType_Color,                 tab_bar_background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                 selectedTintColor,      PTUStylePropertyType_Color,                 selected_tab_bar_element,   ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                 unselectedTintColor,    PTUStylePropertyType_Color,                 unselected_tab_bar_element, ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleTabBarContent *,   content,                PTUStylePropertyType_Lobby_TabBarContent,   content,                    ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleTabBar, PTUStyle_Definition_TabBar)

#define PTUStyle_Definition_HomeSectionElementSeparator(step) \
PTUStylePropertyDefinition_ ## step (NSString *,    styleID,    PTUStylePropertyType_String,    styleID,    ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleHomeSectionElementSeparator, PTUStyle_Definition_HomeSectionElementSeparator)

#define PTUStyle_Definition_ScreenChat(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                              hideWebNavigation,  PTUStylePropertyType_Boolean,               hide_web_navigation,    NSNumber_BOOL,  Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationBarContent *,    navigationBar,      PTUStylePropertyType_Lobby_NavigationBarContent,  navbar,                 ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleScreenChat, PTUStyle_Definition_ScreenChat)

#define PTUStyle_Definition_NavigationHeaderSearch(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,        PTUStylePropertyType_Color,     background,     ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,            elementIdentifier,      PTUStylePropertyType_String,    element_id,     ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,            styleIdentifier,        PTUStylePropertyType_String,    style_id,       ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   textField,              PTUStylePropertyType_TextField, field,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   searchImageView,        PTUStylePropertyType_ImageView, search_icon,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   searchButtonImageView,  PTUStylePropertyType_ImageView, search_button,  ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleNavigationHeaderSearch, PTUStyle_Definition_NavigationHeaderSearch)

#define PTUStyle_Definition_HomeSectionElementMenu(step) \
PTUStylePropertyDefinition_ ## step (NSString *,        styleID,        PTUStylePropertyType_String,    style_id,   ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, categoryIDs,    PTUStylePropertyType_Strings,   ids,        ARC,    Required,   Inline)

PTUStyleDefineInterface(PTUStyleHomeSectionElementMenu, PTUStyle_Definition_HomeSectionElementMenu)

#define PTUStyle_Definition_ScreenFavorites(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundColor,    PTUStylePropertyType_Color,                     background,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                    gameTileStyle,      PTUStylePropertyType_String,                    game_tile_style,        ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStylePlaceholderNoGames *,  noGamesPlaceholder, PTUStylePropertyType_Lobby_PlaceholderNoGames,  no_games_placeholder,   ARC,    Required,   Content)

PTUStyleDefineInterface(PTUStyleScreenFavorites, PTUStyle_Definition_ScreenFavorites)

#define PTUStyle_Definition_ScreenVirtualCard(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,    PTUStylePropertyType_Color,         background,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   nameLabel,          PTUStylePropertyType_Label,   alert_name,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   messageLabel,       PTUStylePropertyType_Label,   alert_message,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   titleLabel,         PTUStylePropertyType_Label,   alert_title,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  positiveButton,     PTUStylePropertyType_Button,  alert_positive_button,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,    contentView,        PTUStylePropertyType_View,    alert_content,          ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenVirtualCard, PTUStyle_Definition_ScreenVirtualCard)

#define PTUStyle_Definition_Maintenance(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                              hideWebNavigation,  PTUStylePropertyType_Boolean,                       hide_web_navigation,    NSNumber_BOOL,  Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationBarContent *,    navigationBar,      PTUStylePropertyType_Lobby_NavigationBarContent,    navbar,                 ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleScreenMaintenance, PTUStyle_Definition_Maintenance)

#define PTUStyle_Definition_Shared(step) \
PTUStylePropertyDefinition_ ## step (NSString *,                    statusBarStyleInternal, PTUStylePropertyType_String,                    status_bar_style,               ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundColor,        PTUStylePropertyType_Color,                     background,                     ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,               brightLabel,            PTUStylePropertyType_Label,               label_bright,                   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,               darkLabel,              PTUStylePropertyType_Label,               label_dark,                     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,               timeLabel,              PTUStylePropertyType_Label,               label_time,                     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,               sessionTimeLabel,       PTUStylePropertyType_Label,               session_timer,                  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              favoritesButton,        PTUStylePropertyType_Button,              favorites_button,               ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              gameDemoButton,         PTUStylePropertyType_Button,              game_demo_button,               ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              gameButton,             PTUStylePropertyType_Button,              game_button,                    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,           backgroundImageView,    PTUStylePropertyType_ImageView,           background_image,               ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLoadingBar *,          progressBarStyle,       PTUStylePropertyType_Lobby_LoadingBar,          progress_game_item_download,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleActivityIndicator *,   activityIndicator,      PTUStylePropertyType_Lobby_ActivityIndicator,   activityindicator,              ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleShared, PTUStyle_Definition_Shared)

@interface PTUStyleShared ()

- (UIStatusBarStyle)statusBarStyle;

@end

#define PTUStyle_Definition_GamesRemoval(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       popupTitleLabel,        PTUStylePropertyType_Label,   popup_title,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       popupTextLabel,         PTUStylePropertyType_Label,   popup_text,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       popupGamesListLabel,    PTUStylePropertyType_Label,   popup_games_list,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        popupView,              PTUStylePropertyType_View,    popup_view,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      removeButton,           PTUStylePropertyType_Button,  remove_button,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      cancelButton,           PTUStylePropertyType_Button,  cancel_button,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      dontAskButton,          PTUStylePropertyType_Button,  dont_ask_button,    ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleGamesRemoval, PTUStyle_Definition_GamesRemoval)

#define PTUStyle_Definition_ScreenForgotPassword(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,        PTUStylePropertyType_Color,             background,     ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             errorColor,             PTUStylePropertyType_Color,             error,          ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      nextButton,             PTUStylePropertyType_Button,      next_button,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   usernameTextField,      PTUStylePropertyType_TextField,   username,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   dateOfBirthTextField,   PTUStylePropertyType_TextField,   date_of_birth,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   emailTextField,         PTUStylePropertyType_TextField,   email,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   logoImageView,          PTUStylePropertyType_ImageView,   logo,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       infoLabel,              PTUStylePropertyType_Label,       info_label,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        separator,              PTUStylePropertyType_View,        separator,      ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenForgotPassword, PTUStyle_Definition_ScreenForgotPassword)

#define PTUStyle_Definition_Screenshots(step) \
PTUStylePropertyDefinition_ ## step (NSString *,                    viewStyleID,    PTUStylePropertyType_String,                    screenshots_view_style, ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleScreenshotsContent *,  content,        PTUStylePropertyType_Lobby_ScreenshotsContent,  content,                ARC,    Required,   Inline)

PTUStyleDefineInterface(PTUStyleScreenshots, PTUStyle_Definition_Screenshots)

#define PTUStyle_Definition_ScreenCashier(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                              shouldHideNavigationPanel,  PTUStylePropertyType_Boolean,                       hide_web_navigation,    NSNumber_BOOL,  Optional,   Property) \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationBarContent *,    navigationBar,              PTUStylePropertyType_Lobby_NavigationBarContent,    navbar,                 ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleScreenCashier, PTUStyle_Definition_ScreenCashier)

#define PTUStyle_Definition_ScreenSplash(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        backgroundView, PTUStylePropertyType_View,        background, ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   logoImageView,  PTUStylePropertyType_ImageView,   logo,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleProgress *,    progress,       PTUStylePropertyType_Progress,    progress_,  ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenSplash, PTUStyle_Definition_ScreenSplash)

#define PTUStyle_Definition_HomeSectionElementSearch(step) \
PTUStylePropertyDefinition_ ## step (NSString *,    styleID,    PTUStylePropertyType_String,    styleID,    ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleHomeSectionElementSearch, PTUStyle_Definition_HomeSectionElementSearch)

#define PTUStyle_Definition_HomeSectionElementMoreApps(step) \
PTUStylePropertyDefinition_ ## step (NSString *,    styleID,    PTUStylePropertyType_String,    styleID,    ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleHomeSectionElementMoreApps, PTUStyle_Definition_HomeSectionElementMoreApps)

#define PTUStyle_Definition_NavigationHeader(step) \
PTUStylePropertyDefinition_ ## step (BOOL,          sticky,             PTUStylePropertyType_Boolean,   sticky,     NSNumber_BOOL,  Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,    elementIdentifier,  PTUStylePropertyType_String,    element_id, ARC,            Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,     backgroundColor,    PTUStylePropertyType_Color,     background, ARC,            Optional,   Property)

PTUStyleDefineInterface(PTUStyleNavigationHeader, PTUStyle_Definition_NavigationHeader)

#define PTUStyle_Definition_ScreenChangePassword(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,             background,     ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             errorColor,         PTUStylePropertyType_Color,             error,          ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   passwordTextField,  PTUStylePropertyType_TextField,   password_field, ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      submitButton,       PTUStylePropertyType_Button,      submit_button,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   logoImageView,      PTUStylePropertyType_ImageView,   logo,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       infoLabel,          PTUStylePropertyType_Label,       info_label,     ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleScreenChangePassword, PTUStyle_Definition_ScreenChangePassword)

#define PTUStyle_Definition_SearchBar(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,     backgroundColor,            PTUStylePropertyType_Color,     background,             ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     cursorColor,                PTUStylePropertyType_Color,     cursor,                 ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     cancelColor,                PTUStylePropertyType_Color,     cancel,                 ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     searchBarTintColor,         PTUStylePropertyType_Color,     text_hint,              ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     textViewBackgroundColor,    PTUStylePropertyType_Color,     text_background,        ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     searchBarBackgroundColor,   PTUStylePropertyType_Color,     bar_background,         ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     textColor,                  PTUStylePropertyType_Color,     text,                   ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIFont *,      textFont,                   PTUStylePropertyType_Font,      text,                   ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    searchBarIconActiveName,    PTUStylePropertyType_String,    icon_active,            ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    searchBarIconInactiveName,  PTUStylePropertyType_String,    icon_inactive,          ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleSearchBar, PTUStyle_Definition_SearchBar)

#define PTUStyle_Definition_ScreenHome(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                         backgroundColor,            PTUStylePropertyType_Color,                         background,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,                    mainScreenContentListView,  PTUStylePropertyType_View,                    container,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                  customSearchButton,         PTUStylePropertyType_Button,                  custom_search_button,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationBarContent *,    navigationBar,              PTUStylePropertyType_Lobby_NavigationBarContent,    navbar,                 ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleScreenHome, PTUStyle_Definition_ScreenHome)

#define PTUStyle_Definition_ScreenAccount(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                              shouldHideNavigationPanel,  PTUStylePropertyType_Boolean,                       hide_web_navigation,    NSNumber_BOOL,  Optional,   Property) \
PTUStylePropertyDefinition_ ## step (PTUStyleNavigationBarContent *,    navigationBar,              PTUStylePropertyType_Lobby_NavigationBarContent,    navbar,                 ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleScreenAccount, PTUStyle_Definition_ScreenAccount)

#define PTUStyle_Definition_NavigationHeaderLogin(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                              androidWrongKey2,  PTUStylePropertyType_Boolean,                       sticky,    NSNumber_BOOL,  Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                              androidWrongKey5,  PTUStylePropertyType_Boolean,                       inline,    NSNumber_BOOL,  Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                            typeString,                     PTUStylePropertyType_String,        buttons_type,               ARC,            Optional,  Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                            androidWrongKey4,                     PTUStylePropertyType_String,        type,               ARC,            Optional,  Inline)   \
PTUStylePropertyDefinition_ ## step (NSString *,                            androidWrongKey3,                     PTUStylePropertyType_String,        element_id,               ARC,            Optional,   Inline)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                             backgroundColor,                PTUStylePropertyType_Color,         background,                 ARC,            Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                       usernameLabel,                  PTUStylePropertyType_Label,   username,                   ARC,            Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,                       androidWrongKey,                  PTUStylePropertyType_Label,   balance,                   ARC,            Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                      loginButtonInternal,            PTUStylePropertyType_Button,  login_button,               ARC,            Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                      loginRegisterButtonInternal,    PTUStylePropertyType_Button,  login_registration_button,  ARC,            Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                      registerButton,                 PTUStylePropertyType_Button,  register_button,            ARC,            Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                      depositButton,                  PTUStylePropertyType_Button,  deposit_button,             ARC,            Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,                      balanceButton,                  PTUStylePropertyType_Button,  balance,                    ARC,            Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,                        separatorView,                  PTUStylePropertyType_View,    separator,                  ARC,            Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,                        containerView,                  PTUStylePropertyType_View,    container,                  ARC,            Optional,   Content)

PTUStyleDefineInterface(PTUStyleNavigationHeaderLogin, PTUStyle_Definition_NavigationHeaderLogin)

typedef NS_ENUM(NSUInteger, PTUStyleNavigationHeaderLoginAuthButtonsStyle)
{
    PTUStyleNavigationHeaderLoginAuthButtonsStyleEmpty,
    PTUStyleNavigationHeaderLoginAuthButtonsStyleLogin,
    PTUStyleNavigationHeaderLoginAuthButtonsStyleJoin,
    PTUStyleNavigationHeaderLoginAuthButtonsStyleLoginThenJoin,
    PTUStyleNavigationHeaderLoginAuthButtonsStyleJoinThenLogin
};

@interface PTUStyleNavigationHeaderLogin ()

@property (assign, nonatomic, readonly) PTUStyleNavigationHeaderLoginAuthButtonsStyle authButtonStyle;
@property (strong, nonatomic, nullable, readonly) PTUStyleButton *loginButton;

@end

#define PTUStyle_Definition_Toast(step) \
PTUStylePropertyDefinition_ ## step (CGFloat,           cornerRadius,       PTUStylePropertyType_Size,      corner_radius,  NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,    PTUStylePropertyType_Color,     background,     ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   messageLabel,       PTUStylePropertyType_Label,     message,        ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   clickToPlayLabel,   PTUStylePropertyType_Label,     click_to_play,  ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  closeButton,        PTUStylePropertyType_Button,    close,          ARC,                Optional,   Content)

PTUStyleDefineInterface(PTUStyleToast, PTUStyle_Definition_Toast)

#define PTUStyle_Definition_PopupTouchID(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,                PTUStylePropertyType_Color,     background,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,                     PTUStylePropertyType_Label,     title,                  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       descriptionLabel,               PTUStylePropertyType_Label,     description,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      positiveButton,                 PTUStylePropertyType_Button,    button_positive,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      negativeButton,                 PTUStylePropertyType_Button,    button_negative,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      neutralButton,                  PTUStylePropertyType_Button,    button_neutral,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   positiveButtonIconImageView,    PTUStylePropertyType_ImageView, button_positive_icon,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   logoImageView,                  PTUStylePropertyType_ImageView, logo,                   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        positiveButtonBackgroundView,   PTUStylePropertyType_View,      button_positive_bg,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleProgress *,    progress,                       PTUStylePropertyType_Progress,  progress_,              ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStylePopupTouchID, PTUStyle_Definition_PopupTouchID)

#define PTUStyle_Definition_AlertSessionLimits(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,                PTUStylePropertyType_Color,     background,                 ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             errorColor,                     PTUStylePropertyType_Color,     error,                      ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       label,                          PTUStylePropertyType_Label,     dialog_label,               ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,                     PTUStylePropertyType_Label,     dialog_title,               ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       dropDownLabel,                  PTUStylePropertyType_Label,     drop_down_item,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      confirmButton,                  PTUStylePropertyType_Button,    dialog_confirm_button,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      cancelButton,                   PTUStylePropertyType_Button,    dialog_cancel_button,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      selfExclusionButton,            PTUStylePropertyType_Button,    self_exclusion,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      selfExclusionCheckboxButton,    PTUStylePropertyType_Button,    self_exclusion_checkbox,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      timeSelectionButton,            PTUStylePropertyType_Button,    time_selection_button,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   lossLimitTextField,             PTUStylePropertyType_TextField, loss_limit_text_field,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        contentView,                    PTUStylePropertyType_View,      dialog_content,             ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleAlertSessionLimits, PTUStyle_Definition_AlertSessionLimits)

#define PTUStyle_Definition_AlertSessionLimitsEnd(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,        PTUStylePropertyType_Color,     background,             ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,         errorColor,             PTUStylePropertyType_Color,     error,                  ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   messageLabel,           PTUStylePropertyType_Label,     message,                ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   timeDropDownLabel,      PTUStylePropertyType_Label,     drop_down_item,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  extendSessionButton,    PTUStylePropertyType_Button,    extend_session_button,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  timeSelectionButton,    PTUStylePropertyType_Button,    time_selection_button,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  exitToLobbyButton,      PTUStylePropertyType_Button,    exit_to_lobby_button,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,    dialogView,             PTUStylePropertyType_View,      dialog_content,         ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleAlertSessionLimitsEnd, PTUStyle_Definition_AlertSessionLimitsEnd)

#define PTUStyle_Definition_TileMoreFrom(step) \
PTUStylePropertyDefinition_ ## step (NSString *,        typeString,             PTUStylePropertyType_String,    more_from_style,    ARC,    Required,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,        tileTypeString,         PTUStylePropertyType_String,    game_tile_style,    ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,        PTUStylePropertyType_Color,     background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   gameTitle,              PTUStylePropertyType_Label,     game_title,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   gameDescriptionTitle,   PTUStylePropertyType_Label,     game_description,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  downloadButton,         PTUStylePropertyType_Button,    download,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  playButton,             PTUStylePropertyType_Button,    play,               ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleTileMoreFrom, PTUStyle_Definition_TileMoreFrom)

typedef NS_ENUM(NSUInteger, PTUStyleTileMoreFromType)
{
    PTUStyleTileMoreFromType1 = 1,
    PTUStyleTileMoreFromType2
};

@interface PTUStyleTileMoreFrom ()

@property (assign, nonatomic, readonly) PTUStyleTileMoreFromType type;
@property (assign, nonatomic, readonly) CGFloat iconImageHeight;
@property (strong, nonatomic, nonnull, readonly) NSString *cellPartialID;

@end
