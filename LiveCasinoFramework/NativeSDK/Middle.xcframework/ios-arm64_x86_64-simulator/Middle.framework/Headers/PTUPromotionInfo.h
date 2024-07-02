//
//  PTUPromotion.h
//  Middle
//
//  Created by Oleksandr Khylyk on 11/22/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUPromotionActionData.h"

@class PTUContentFilter;

typedef NS_ENUM (NSUInteger, PTUPromotionVisibility) {
    PTUPromotionVisibilityLoggedOut = 0,
    PTUPromotionVisibilityLoggedIn,
    PTUPromotionVisibilityLoggedInWithDeposit,
    PTUPromotionVisibilityLoggedInWithoutDeposit,
    PTUPromotionVisibilityAll
};

typedef NS_ENUM (NSUInteger, PTUPromotionAction) {
    PTUPromotionActionNone = 0,
    PTUPromotionActionLaunchGame,
    PTUPromotionActionOpenURL,
    PTUPromotionActionOpenURLInBrowser,
    PTUPromotionActionOpenApp,
    PTUPromotionActionOpenLogin,
    PTUPromotionActionOpenRegistration,
    PTUPromotionActionOpenCashier
};

@interface PTUPromotionInfo: NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *details;
@property (assign, nonatomic) PTUPromotionAction action;
@property (strong, nonatomic) PTUPromotionActionData *actionData;
@property (copy, nonatomic) NSString *actionButtonText;
@property (copy, nonatomic) NSString *moreInfoText;
@property (assign, nonatomic) PTUPromotionVisibility visibility;
@property (strong, nonatomic) PTUContentFilter *filter;

@end
