//
//  PTUGameMenu.h
//  styles
//
//  Created by hlpa on 6/12/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <UIKit/UIKit.h>
@import CommonUI;

@class PTUGameMenu;
@class PTUStyleGameUI;
@class PTUResourceObjectStyleGameMenu;
@class PTUStyleGameUIMenuSideElement;
@class PTUResourceArrayStyleGameMenuSideContent;
@class GameMenuViewModel;
@protocol GameMenuViewModelUIDelegate;
@protocol SceneView;
@class Platform;

typedef NS_ENUM(NSUInteger, PTUGameMenuQuickActionTypes)
{
    PTUGameMenuQuickActionTypes_None = 1 << 0,
    PTUGameMenuQuickActionTypes_GameAdviser = 1 << 1,
    PTUGameMenuQuickActionTypes_GoldenChips =  1 << 2,
    PTUGameMenuQuickActionTypes_FreeSpinBonus = 1 << 3,
    PTUGameMenuQuickActionTypes_RealMoney = 1 << 4,
    PTUGameMenuQuickActionTypes_BonusMoney = 1 << 5
};

typedef NS_ENUM(NSInteger, PTUGameMenuHandednessType)
{
    PTUGameMenuHandednessTypeRight,
    PTUGameMenuHandednessTypeLeft
};

//@protocol PTUGameMenuDelegate <NSObject>
//- (BOOL)gameMenu:(PTUGameMenu *)gameMenu didSelect:(NSString *)actionName actionURL:(NSString *)actionURL title:(NSString *)title;
//- (void)gameMenu:(PTUGameMenu *)gameMenu didAskToOpenLink:(NSURL *)link;
//- (void)sendEventOpenGameMenu;
//@end

/**
 View of game menu which present over game view
 */
@interface PTUGameMenu<TypeResource: PTUResourceObjectStyleGameMenu *> : UIView <PTUResourceStyling, SceneView, GameMenuViewModelUIDelegate>

+ (instancetype _Nonnull)newWithViewModel:(GameMenuViewModel * _Nonnull)viewModel
                            PaytableTitle:(NSString * _Nonnull)paytableTitle
                            tutorialTitle:(NSString * _Nonnull)tutorialTitle;

- (instancetype _Nonnull)init NS_UNAVAILABLE;
- (instancetype _Nonnull)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
- (instancetype _Nonnull)initWithCoder:(NSCoder * _Nonnull)aDecoder NS_UNAVAILABLE;

- (void)setFreeSpinCount:(NSUInteger)freeSpinCount;
- (void)setGoldenChipCount:(NSUInteger)goldenChipCount;
- (void)setServerTimeEnabled:(BOOL)serverTimeEnabled;

@end
