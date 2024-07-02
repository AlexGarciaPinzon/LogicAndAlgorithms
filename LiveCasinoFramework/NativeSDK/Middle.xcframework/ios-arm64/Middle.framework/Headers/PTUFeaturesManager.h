//
//  PTUFeaturesManager.h
//  Middle
//
//  Created by dmgo on 5/4/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUFeaturesManager : NSObject

- (void)updateWithDictionary:(NSDictionary *)dictionary;

- (BOOL)touchIDEnabled;
- (BOOL)lastLoginEnabled;
- (BOOL)demoModeEnabled;
- (BOOL)demoModeLoggedInEnabled;
- (BOOL)systemSearchEnabled;
- (BOOL)gameAdvisorEnabled;
- (BOOL)quickGameSwitchEnabled;
- (BOOL)webLoginEnabled;
- (BOOL)webForgotPassword;
- (BOOL)extendedBalanceEnabled;
- (BOOL)extendedBalanceHideBalanceDisabled;
- (BOOL)forceTouchEnabled;
- (BOOL)layoutManagerEnabled;
- (BOOL)webPromotionsEnabled;
- (BOOL)networkTimeEnabled;
- (BOOL)moreFromPageEnabled;
- (BOOL)facebookLoginEnabled;
- (BOOL)restoreUsernameEnabled;
- (BOOL)maintenancePageEnabled;
- (BOOL)externalConfigEnabled;
- (BOOL)suspendedBonusMessagesOnWebViewEnabled;
- (BOOL)domainBasedOnCountryCodeEnabled;
- (BOOL)otherAppsEnabled;
- (BOOL)rateUsEnabled;
- (BOOL)downloadGameNotificationEnabled;
- (BOOL)offlineModeEnabled;
- (BOOL)externalImageLibraryEnabled;
- (BOOL)spotlightSearchEnabled;
- (BOOL)gamesRearrangingEnabled;
- (BOOL)suggestedGamesEnabled;
- (BOOL)enhancedPlayerMessagesEnabled;
- (BOOL)automaticGameManagementEnabled;
- (NSUInteger)dontShowTouchIDAttemptsCount;
- (NSString *)openBoxBackURL;
- (BOOL)ageVerificationEnabled;
- (BOOL)renderGamesRespectToSafeAreaEnabled;
- (BOOL)biometricsHandledByLicensee;
- (BOOL)leaveDownloadedGames;
- (BOOL)expandableWebViewEnabled;
- (BOOL)localyticsDeepLinkingEnabled;
- (BOOL)toasterMessagesEnabled;
- (BOOL)facebookSDKEnabled;
- (BOOL)iovationPasEnabled;
- (BOOL)iovationRegistrationEnabled;
- (BOOL)platformEnabled;

@end
