//
//  PTUStylesTypes.h
//  styles
//
//  Created by hlpa on 4/18/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, PTUStylePropertyType)
{
    PTUStylePropertyType_Unknown,
    
    PTUStylePropertyType_Boolean,
    PTUStylePropertyType_Size,
    PTUStylePropertyType_String,
    
    PTUStylePropertyType_Color,
    PTUStylePropertyType_Font,
    
    PTUStylePropertyType_Order,

    PTUStylePropertyType_CGFloats,
    PTUStylePropertyType_Strings,
    PTUStylePropertyType_Colors,

    PTUStylePropertyType_GradientColors,
    PTUStylePropertyType_GradientComplex,

    PTUStylePropertyType_View,
    PTUStylePropertyType_Label,
    PTUStylePropertyType_Button,
    PTUStylePropertyType_ButtonWithAction,
    PTUStylePropertyType_TextField,
    PTUStylePropertyType_TextView,
    PTUStylePropertyType_ImageView,
    PTUStylePropertyType_Switch,
    PTUStylePropertyType_Slider,
    PTUStylePropertyType_Progress, // TODO: android only?
    PTUStylePropertyType_Separator,

    PTUStylePropertyType_GameUI,
    PTUStylePropertyType_GameUIAlertBlockedGames,
    PTUStylePropertyType_GameUICommon,
    PTUStylePropertyType_GameUIGameWheel,
    PTUStylePropertyType_GameUIMenu,
    PTUStylePropertyType_GameUIBottomBar,
    PTUStylePropertyType_GameUITopGameElements,
    PTUStylePropertyType_LimitationPanel,
    PTUStylePropertyType_LoginTimerPanel,
    PTUStylePropertyType_SessionPanel,
    PTUStylePropertyType_NetlossCooldownPanel,
    PTUStylePropertyType_RegulationPanelSegment,
    PTUStylePropertyType_GameUIITBringMoney,
    PTUStylePropertyType_GameUIESBringMoney,
    PTUStylePropertyType_GameUIITGameModeSelector,
    PTUStylePropertyType_GameUINotificationFreeSpins,
    PTUStylePropertyType_GameUINotificationGoldenChips,
    PTUStylePropertyType_GameUIMenuSide,
    PTUStylePropertyType_GameUIMenuSideContent,
    PTUStylePropertyType_GameUIMenuSideElement,
    PTUStylePropertyType_GameUIAutoplayLimits, // TODO: deprecated ?

    PTUStylePropertyType_MenuApp,
    PTUStylePropertyType_MenuAppContent,
    PTUStylePropertyType_MenuAppElement,

    PTUStylePropertyType_Footer,
    PTUStylePropertyType_FooterContent,
    PTUStylePropertyType_FooterElement,

    PTUStylePropertyType_ActionData,

    PTUStylePropertyType_Filter,

    PTUStylePropertyType_Style, // TODO: remove abstract 'style'
    PTUStylePropertyType_Lobby_Circle,
    PTUStylePropertyType_Lobby_LoadingPercent,
    PTUStylePropertyType_Lobby_Alert,
    PTUStylePropertyType_Lobby_EnhancedMessage,
    PTUStylePropertyType_Lobby_Toaster,
    PTUStylePropertyType_Lobby_WebViewNavBar,
    PTUStylePropertyType__End
};

typedef NSUInteger PTUStylePropertyType_Extended; // Used to represent PTUStylePropertyType extensions (which also includes original PTUStylePropertyType's keys)

typedef NS_ENUM(NSUInteger, PTUStyleNavigationPosition)
{
    PTUStyleNavigationPositionLeft      = 0,
    PTUStyleNavigationPositionCenter    = 1,
    PTUStyleNavigationPositionRight     = 2
};

typedef NS_ENUM(NSUInteger, PTUStyleVisibility)
{
    PTUStyleVisibilityAll = 0,
    PTUStyleVisibilityLoggedIn,
    PTUStyleVisibilityLoggedOut
};

@class PTUStyleInfo;

struct PTUStyleTypeDescriptionStruct;
typedef struct PTUStyleTypeDescriptionStruct PTUStyleTypeDescription;

struct PTUStyleTypesDescriptionStruct;
typedef struct PTUStyleTypesDescriptionStruct PTUStyleTypesDescription;

typedef id const (PTUStyleMethod_UnParseObject)(id _Nonnull const object, PTUStyleTypeDescription const * _Nonnull const description, PTUStyleTypesDescription const * _Nonnull const table);
typedef id const (PTUStyleMethod_ParseInfo)(PTUStyleInfo const * _Nonnull const info, id const _Nullable parentValue, PTUStyleTypeDescription const * _Nonnull const description, PTUStyleTypesDescription const * _Nonnull const table);
typedef id const (PTUStyleMethod_ParseArray)(NSArray * _Nonnull const array, PTUStyleTypeDescription const * _Nonnull const description, PTUStyleTypesDescription const * _Nonnull const table);
typedef id const (PTUStyleMethod_ParseShortValue)(id _Nonnull const object, PTUStyleTypeDescription const * _Nonnull const description);

typedef PTUStyleMethod_UnParseObject * PTUStyleMethod_UnParseObject_Var;
typedef PTUStyleMethod_ParseInfo * PTUStyleMethod_ParseInfo_Var;
typedef PTUStyleMethod_ParseArray * PTUStyleMethod_ParseArray_Var;
typedef PTUStyleMethod_ParseShortValue * PTUStyleMethod_ParseShortValue_Var;

struct PTUStyleTypeDescriptionStruct
{
    Class _Nonnull class;
    NSString * _Nonnull parseName;
    PTUStyleMethod_UnParseObject_Var _Nonnull unParseMethod;
    PTUStyleMethod_ParseInfo_Var _Nonnull parseInfoMethod;
    PTUStyleMethod_ParseArray_Var _Nonnull parseArrayMethod;
    PTUStyleMethod_ParseShortValue_Var _Nonnull parseShortValueMethod;
};

struct PTUStyleTypesDescriptionStruct
{
    NSUInteger count;
    PTUStyleTypeDescription * _Nonnull descriptions;
};
