//
//  PTUStylesExtended.h
//  styles
//
//  Created by hlpa on 4/23/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUStylesCodeGen.h"
#import "PTUStyleContent.h"
#import "PTUStyleContentStyle.h"

@class PTUStyleActionData;
@class PTUStyleSeparator;

#define PTUStyle_Definition_Label(step) \
PTUStylePropertyDefinition_ ## step (NSString *,    elementIdentifier,  PTUStylePropertyType_String,    element_id,         ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    alignmentString,    PTUStylePropertyType_String,    text_alignment,     ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,          uppercase,          PTUStylePropertyType_Boolean,   text_all_caps,      NSNumber_BOOL,  Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    text,               PTUStylePropertyType_String,    text,               ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIFont *,      font,               PTUStylePropertyType_Font,      text,               ARC,            Required,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     color,              PTUStylePropertyType_Color,     text,               ARC,            Required,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     androidWrongKey,    PTUStylePropertyType_Color,     link,               ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     backgroundColor,    PTUStylePropertyType_Color,     background,         ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     linksColor,         PTUStylePropertyType_Color,     links_color,        ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleLabel, PTUStyle_Definition_Label)

#define PTUStyle_Definition_ImageView(step) \
PTUStylePropertyDefinition_ ## step (NSString *,    elementIdentifier,          PTUStylePropertyType_String,    element_id,     ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    androidWrongKey3,          PTUStylePropertyType_String,    URL_land,     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    androidWrongKey4,          PTUStylePropertyType_String,    URL_activated,     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     backgroundColor,            PTUStylePropertyType_Color,     background,     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     androidWrongKey2,            PTUStylePropertyType_Color,     image,     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    normalImageAddress,         PTUStylePropertyType_String,    URL,            ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    landscapeImageAddress,      PTUStylePropertyType_String,    landscapeURL,   ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    pressedImageAddress,        PTUStylePropertyType_String,    pressedURL,     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    availableForLoggedInState,  PTUStylePropertyType_String,    visibility,     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,          androidWrongKey,          PTUStylePropertyType_Boolean,   extra_bottom_space,      NSNumber_BOOL,  Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    contentModeString,          PTUStylePropertyType_String,    content_mode,   ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleImageView, PTUStyle_Definition_ImageView)

@interface PTUStyleImageView ()

+ (instancetype _Nullable)manual_withImageAddress:(NSString * _Nullable)imageAddress;

- (PTUStyleVisibility)visibility;

@end

#define PTUStyle_Definition_RegulationPanelSegment(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       keyLabel,           PTUStylePropertyType_Label,     key,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       valueLabel,         PTUStylePropertyType_Label,     value,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   imageView,          PTUStylePropertyType_ImageView, icon,   ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (NSString *,            androidWrongKey,    PTUStylePropertyType_String,      action,                 ARC,                Optional,   Property) \

PTUStyleDefineInterface(PTUStyleRegulationPanelSegment, PTUStyle_Definition_RegulationPanelSegment)

#define PTUStyle_Definition_LimitationPanel(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,     background,                             ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,               cornerRadius,       PTUStylePropertyType_Size,      corner_radius,                          NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentClock,         PTUStylePropertyType_RegulationPanelSegment,     segment_clock,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentTotalBets,     PTUStylePropertyType_RegulationPanelSegment,     segment_total_bets,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentTotalWin,      PTUStylePropertyType_RegulationPanelSegment,     segment_total_win,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentBalance,       PTUStylePropertyType_RegulationPanelSegment,     segment_balance,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentSessionLimit,  PTUStylePropertyType_RegulationPanelSegment,     segment_session_limit,  ARC,    Optional,   Content)    \

PTUStyleDefineInterface(PTUStyleLimitationPanel, PTUStyle_Definition_LimitationPanel)

#define PTUStyle_Definition_SessionPanel(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,     background,                             ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,               cornerRadius,       PTUStylePropertyType_Size,      corner_radius,                          NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentClock,         PTUStylePropertyType_RegulationPanelSegment,     segment_clock,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentSessionTimer,       PTUStylePropertyType_RegulationPanelSegment,     segment_session_timer,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentDate,           PTUStylePropertyType_RegulationPanelSegment,     segment_date,        ARC,    Optional,   Content)    \

PTUStyleDefineInterface(PTUStyleSessionPanel, PTUStyle_Definition_SessionPanel)

#define PTUStyle_Definition_NetlossCooldownPanel(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                         backgroundColor,    PTUStylePropertyType_Color,                     background,         ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                           cornerRadius,       PTUStylePropertyType_Size,                      corner_radius,      NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,  segmentText,        PTUStylePropertyType_RegulationPanelSegment,    segment_text,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,  segmentNetloss,     PTUStylePropertyType_RegulationPanelSegment,    segment_netloss,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,  segmentCooldown,    PTUStylePropertyType_RegulationPanelSegment,    segment_cooldown,   ARC,    Optional,   Content)    \

PTUStyleDefineInterface(PTUStyleNetlossCooldownPanel, PTUStyle_Definition_NetlossCooldownPanel)

#define PTUStyle_Definition_LoginTimerPanel(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,     background,                             ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,               cornerRadius,       PTUStylePropertyType_Size,      corner_radius,                          NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentClock,         PTUStylePropertyType_RegulationPanelSegment,     segment_clock,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentLoginTimer,       PTUStylePropertyType_RegulationPanelSegment,     segment_login_timer,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleRegulationPanelSegment *,       segmentRegulationDga,       PTUStylePropertyType_RegulationPanelSegment,     segment_regulation_dga,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,           separator,          PTUStylePropertyType_Separator,         separator_,     ARC,    Optional,   Content)
PTUStyleDefineInterface(PTUStyleLoginTimerPanel, PTUStyle_Definition_LoginTimerPanel)

PTUStyleDefineContentInterface(PTUStyleNumbers, NSNumber *)

PTUStyleDefineContentInterface(PTUStyleColors, UIColor *)

#define PTUStyle_Definition_GradientComplex(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleColors *,      colors,     PTUStylePropertyType_Colors,   colors_,     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleNumbers *,     locations,  PTUStylePropertyType_CGFloats,  locations_,  ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    gradientOrientation,    PTUStylePropertyType_String,    gradient_orientation,            ARC,    Optional,   Inline) \

PTUStyleDefineInterface(PTUStyleGradientComplex, PTUStyle_Definition_GradientComplex)

@interface PTUStyleGradientComplex ()

typedef NS_ENUM(NSUInteger, PTUStyleGradientOrientation)
{
    PTUStyleGradientOrientationTop_Bottom,
    PTUStyleGradientOrientationTopRight_BottomLeft,
    PTUStyleGradientOrientationRight_Left,
    PTUStyleGradientOrientationBottomRight_TopLeft,
    PTUStyleGradientOrientationBottom_Top,
    PTUStyleGradientOrientationBottomLeft_TopRight,
    PTUStyleGradientOrientationLeft_Right,
    PTUStyleGradientOrientationTopLeft_BottomRight
};

@property (nonatomic, assign) PTUStyleGradientOrientation gradientOrientationType;
@property (nonatomic, assign) CGPoint startPoint;
@property (nonatomic, assign) CGPoint endPoint;

@end

typedef NS_ENUM(NSUInteger, PTUStyleLabelAlignmentType)
{
    PTUStyleLabelAlignmentTypeLeft,
    PTUStyleLabelAlignmentTypeRight,
    PTUStyleLabelAlignmentTypeCenter,
    PTUStyleLabelAlignmentTypeDefault
};

extern NSTextAlignment PTUStyleLabelAlignmentTypeToNSTextAlignment(PTUStyleLabelAlignmentType alignment);

@interface PTUStyleLabel ()

// TODO: tweak
+ (instancetype _Nullable)manual_withBackgroundColor:(UIColor * _Nullable)backgroundColor
                                                font:(UIFont * _Nullable)font
                                           textColor:(UIColor * _Nullable)textColor
                                                text:(NSString * _Nullable)text
                                           alignment:(PTUStyleLabelAlignmentType)alignment;

@property (assign, nonatomic, readonly) PTUStyleLabelAlignmentType textAlignment;

- (CGRect)wantedRectForSizeConstraint:(CGSize)sizeConstraint stripInsets:(BOOL)stripInsets localizeText:(BOOL)localizeText;

@end

#define PTUStyle_Definition_ButtonWithAction(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundColor,            PTUStylePropertyType_Color,                 background,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundPressedColor,     PTUStylePropertyType_Color,                 background_pressed,     ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundDisabledColor,    PTUStylePropertyType_Color,                 background_disabled,    ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     bgColor,                    PTUStylePropertyType_Color,                 bgColor,                ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     colorSelected,              PTUStylePropertyType_Color,                 selected,               ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     androidWrongKey,              PTUStylePropertyType_Color,                 text_highlighted,       ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     colorDisabled,              PTUStylePropertyType_Color,                 disabled,               ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIFont *,                      font,                       PTUStylePropertyType_Font,                  text,                   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     fontColor,                  PTUStylePropertyType_Color,                 text,                   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     fontColorHighlited,         PTUStylePropertyType_Color,                 text_pressed,           ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     fontColorDisabled,          PTUStylePropertyType_Color,                 text_disabled,          ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     tintColor,                  PTUStylePropertyType_Color,                 tint_color,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     borderColor,                PTUStylePropertyType_Color,                 border_color,           ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     borderColorPressed,         PTUStylePropertyType_Color,                 border_pressed_color,   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     androidWrongKey3,         PTUStylePropertyType_Color,                 background_on,   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    elementIdentifier,          PTUStylePropertyType_String,                element_id,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonStyle,                PTUStylePropertyType_String,                style_id,               ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonAddress,              PTUStylePropertyType_String,                URL,                    ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonAddressLandscape,     PTUStylePropertyType_String,                URL_land,               ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonImageURL,             PTUStylePropertyType_String,                image,                  ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonImageSelectedURL,     PTUStylePropertyType_String,                image_selected,         ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    androidWrongKey2,     PTUStylePropertyType_String,                image_pressed,         ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonImageDisabledURL,     PTUStylePropertyType_String,                image_disabled,         ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (CGFloat,                       buttonImageScale,           PTUStylePropertyType_Size,                  image_scale,            NSNumber_CGFloat,   Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonLeftIcon,             PTUStylePropertyType_String,                left_icon,              ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonRightIcon,            PTUStylePropertyType_String,                right_icon,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonTitle,                PTUStylePropertyType_String,                text,                   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          roundLeftTop,               PTUStylePropertyType_Boolean,               round_left_top,         NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          roundRightTop,              PTUStylePropertyType_Boolean,               round_right_top,        NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          roundLeftBottom,            PTUStylePropertyType_Boolean,               round_left_bottom,      NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          roundRightBottom,           PTUStylePropertyType_Boolean,               round_right_bottom,     NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          underlined,                 PTUStylePropertyType_Boolean,               text_underline,         NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          uppercase,                  PTUStylePropertyType_Boolean,               text_all_caps,          NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (CGFloat,                       cornerRadius,               PTUStylePropertyType_Size,                  corner_radius,          NSNumber_CGFloat,   Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    availableForOS,             PTUStylePropertyType_String,                os,                     ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    availableForLoggedInState,  PTUStylePropertyType_String,                visibility,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    action,                     PTUStylePropertyType_String,                action,                 ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    androidWrongKey4,                     PTUStylePropertyType_String,                support_only_game_mode,                 ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleActionData *,          actionData,                 PTUStylePropertyType_ActionData,            action_data_,           ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGradientComplex *,     gradient,                   PTUStylePropertyType_GradientComplex,       gradient,               ARC,                Optional,   Inline)

PTUStyleDefineInterface(PTUStyleButtonWithAction, PTUStyle_Definition_ButtonWithAction)

@interface PTUStyleButtonWithAction ()

- (BOOL)isAvailable;
- (PTUStyleVisibility)visibility;

// TODO: move
@property (strong, nonatomic, readonly, nonnull) PTUStyleLabel *tweak_labelStyleForGameMenuSideElement;

@end

PTUStyleDefineContentInterface(PTUStyleStrings, NSString *)

#define PTUStyle_Definition_Filter(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, allowedCountries,       PTUStylePropertyType_Strings,   allowed_countries,      ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, blockedCountries,       PTUStylePropertyType_Strings,   blocked_countries,      ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, allowedLanguages,       PTUStylePropertyType_Strings,   allowed_languages,      ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, blockedLanguages,       PTUStylePropertyType_Strings,   blocked_languages,      ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, allowedPlatforms,       PTUStylePropertyType_Strings,   allowed_platforms,      ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, blockedPlatforms,       PTUStylePropertyType_Strings,   blocked_platforms,      ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, allowedRegulations,     PTUStylePropertyType_Strings,   allowed_regulations,    ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleStrings *, blockedRegulations,     PTUStylePropertyType_Strings,   blocked_regulations,    ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,        allowedUserStateString, PTUStylePropertyType_String,    allowed_user_state,     ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleFilter, PTUStyle_Definition_Filter)

#define PTUStyle_Definition_GameUIMenuSideElement(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                          notMandatory,           PTUStylePropertyType_Boolean,                   not_mandatory,      NSNumber_BOOL,  Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          hideMenuOnClick,        PTUStylePropertyType_Boolean,                   hide_menu_on_click, NSNumber_BOOL,  Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    forbiddenID,            PTUStylePropertyType_String,                    forbidden_id,       ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleFilter *,              filter,                 PTUStylePropertyType_Filter,              filter_,            ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleButtonWithAction *,    button,                 PTUStylePropertyType_ButtonWithAction,    button_,            ARC,            Required,   Inline)

PTUStyleDefineInterface(PTUStyleGameUIMenuSideElement, PTUStyle_Definition_GameUIMenuSideElement)

PTUStyleDefineContentStyleInterface(PTUStyleGameUIMenuSideContent, PTUStyleGameUIMenuSideElement *)

#define PTUStyle_Definition_GameUIMenuSide(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIMenuSideContent *,   content,                    PTUStylePropertyType_GameUIMenuSideContent,   content,                        ARC,                Required,   Inline)     \
PTUStylePropertyDefinition_ ## step (UIColor *,                         containerColor,             PTUStylePropertyType_Color,                         container,                      ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                        leftBottomBackgroundImage,  PTUStylePropertyType_String,                        left_bottom_background_image,   ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (NSString *,                        rightBottomBackgroundImage, PTUStylePropertyType_String,                        right_top_background_image,     ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                         backgroundColor,            PTUStylePropertyType_Color,                         background,                     ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (BOOL,                              roundLeftButton,            PTUStylePropertyType_Boolean,                       round_left_bottom,              NSNumber_BOOL,      Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (BOOL,                              roundRightButton,           PTUStylePropertyType_Boolean,                       round_right_bottom,             NSNumber_BOOL,      Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                           cornerRadius,               PTUStylePropertyType_Size,                          corner_radius,                  NSNumber_CGFloat,   Optional,   Property)

PTUStyleDefineInterface(PTUStyleGameUIMenuSide, PTUStyle_Definition_GameUIMenuSide)

#define PTUStyle_Definition_Switch(step) \
PTUStylePropertyDefinition_ ## step (UIColor *, thumbTintColor,             PTUStylePropertyType_Color, thumb_unselected,           ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, thumbTintColor_android,     PTUStylePropertyType_Color, thumb_unselected_android,   ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, onThumbTintColor,           PTUStylePropertyType_Color, thumb_selected,             ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, onThumbTintColor_android,   PTUStylePropertyType_Color, thumb_selected_android,     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, tintColor,                  PTUStylePropertyType_Color, tint_unselected,            ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, tintColor_andorid,          PTUStylePropertyType_Color, tint_unselected_android,    ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, onTintColor,                PTUStylePropertyType_Color, tint_selected,              ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, androidWrongKey,            PTUStylePropertyType_Color,     ontint,                     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, onTintColor_android,        PTUStylePropertyType_Color, tint_selected_android,      ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleSwitch, PTUStyle_Definition_Switch)

#define PTUStyle_Definition_MenuAppElement(step) \
PTUStylePropertyDefinition_ ## step (BOOL,                          requireLoginOnAction,       PTUStylePropertyType_Boolean,           require_login,                      NSNumber_BOOL,  Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    elementIdentifier,          PTUStylePropertyType_String,            element_id,                         ARC,            Required,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    androidWrongKey3,          PTUStylePropertyType_String,            element_type,                         ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    availableForOS,             PTUStylePropertyType_String,            os,                                 ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    availableForLoggedInState,  PTUStylePropertyType_String,            visibility,                         ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleButtonWithAction *,    button,                     PTUStylePropertyType_ButtonWithAction,  button_,                            ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,           imageView,                  PTUStylePropertyType_ImageView,         imageview_,                         ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleSwitch *,              theSwitch,                  PTUStylePropertyType_Switch,            switch_,                            ARC,            Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, androidWrongKey,             PTUStylePropertyType_Color, item_background_pressed,           ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, androidWrongKey2,             PTUStylePropertyType_Color, item_background,           ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleFilter *,              filter,                     PTUStylePropertyType_Filter,            filter_,                            ARC,            Optional,   Inline)

PTUStyleDefineInterface(PTUStyleMenuAppElement, PTUStyle_Definition_MenuAppElement)

PTUStyleDefineContentStyleInterface(PTUStyleMenuAppContent, PTUStyleMenuAppElement *)

#define PTUStyle_Definition_MenuApp(step) \
PTUStylePropertyDefinition_ ## step (NSString *,                disclosureArrowPath,    PTUStylePropertyType_String,                next_arrow_url, ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                 backgroundColor,        PTUStylePropertyType_Color,                 background,     ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleMenuAppContent *,  content,                PTUStylePropertyType_MenuAppContent,        content,        ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleMenuApp, PTUStyle_Definition_MenuApp)

#define PTUStyle_Definition_ButtonActionData(step) \
PTUStylePropertyDefinition_ ## step (NSString *,            url,        PTUStylePropertyType_String,        url,        ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleMenuApp *,     submenu,    PTUStylePropertyType_MenuApp, submenu,    ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleActionData, PTUStyle_Definition_ButtonActionData)

#define PTUStyle_Definition_GradientColors(step) \
PTUStylePropertyDefinition_ ## step (UIColor *, startColor, PTUStylePropertyType_Color, gradient_start_color,   ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, endColor,   PTUStylePropertyType_Color, gradient_end_colo,      ARC,    Required,   Inline)

PTUStyleDefineInterface(PTUStyleGradientColors, PTUStyle_Definition_GradientColors)

#define PTUStyle_Definition_View(step) \
PTUStylePropertyDefinition_ ## step (CGFloat,                   cornerRadius,               PTUStylePropertyType_Size,                  corner_radius,              NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                 backgroundColor,            PTUStylePropertyType_Color,                 background,                 ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,                 shadowColor,                PTUStylePropertyType_Color,                 shadow_color,               ARC,                Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (float,                     shadowOpacity,              PTUStylePropertyType_Size,                  shadow_opacity,             NSNumber_float,     Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (CGFloat,                   shadowRadius,               PTUStylePropertyType_Size,                  shadow_radius,              NSNumber_CGFloat,   Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (CGFloat,                   shadowOffsetX,              PTUStylePropertyType_Size,                  shadow_offset_x,            NSNumber_CGFloat,   Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (CGFloat,                   shadowOffsetY,              PTUStylePropertyType_Size,                  shadow_offset_y,            NSNumber_CGFloat,   Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (NSString *,                availableForLoggedInState,  PTUStylePropertyType_String,                visibility,                 ARC,                Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (NSString *,                backgroundImagePortrait,    PTUStylePropertyType_String,                background_image_portrait,  ARC,                Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (NSString *,                backgroundImageLandscape,   PTUStylePropertyType_String,                background_image_landscape, ARC,                Optional,   Inline)     \
PTUStylePropertyDefinition_ ## step (CGFloat,                   marginTop,                  PTUStylePropertyType_Size,                  margin_top,                 NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                   marginLeft,                 PTUStylePropertyType_Size,                  margin_left,                NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                   marginRight,                PTUStylePropertyType_Size,                  margin_right,               NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,                   marginBottom,               PTUStylePropertyType_Size,                  margin_bottom,              NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (BOOL,                      androidWrongKey,       PTUStylePropertyType_Boolean,           round_left_bottom,              NSNumber_BOOL,  Optional,   Property) \
PTUStylePropertyDefinition_ ## step (BOOL,                      androidWrongKey2,       PTUStylePropertyType_Boolean,           round_right_bottom,             NSNumber_BOOL,  Optional,   Property) \
PTUStylePropertyDefinition_ ## step (PTUStyleGradientComplex *, gradient,                   PTUStylePropertyType_GradientComplex,       gradient,                   ARC,                Optional,   Property)

PTUStyleDefineInterface(PTUStyleView, PTUStyle_Definition_View)

#define PTUStyle_Definition_Button(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundColor,            PTUStylePropertyType_Color,                 background,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundPressedColor,     PTUStylePropertyType_Color,                 background_pressed,     ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     backgroundDisabledColor,    PTUStylePropertyType_Color,                 background_disabled,    ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     androidWrongKey2,    PTUStylePropertyType_Color,                 background_selected,    ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     bgColor,                    PTUStylePropertyType_Color,                 bgColor,                ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     colorSelected,              PTUStylePropertyType_Color,                 selected,               ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     colorDisabled,              PTUStylePropertyType_Color,                 disabled,               ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIFont *,                      font,                       PTUStylePropertyType_Font,                  text,                   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     fontColor,                  PTUStylePropertyType_Color,                 text,                   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     androidWrongKey,         PTUStylePropertyType_Color,                 text_highlighted,       ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     fontColorHighlited,         PTUStylePropertyType_Color,                 text_pressed,           ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     fontColorDisabled,          PTUStylePropertyType_Color,                 text_disabled,          ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     tintColor,                  PTUStylePropertyType_Color,                 tint_color,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     androidWrongKey3,                  PTUStylePropertyType_Color,                 tint,                   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     borderColor,                PTUStylePropertyType_Color,                 border,                 ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,                     borderColorPressed,         PTUStylePropertyType_Color,                 border_pressed,         ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    elementIdentifier,          PTUStylePropertyType_String,                element_id,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonStyle,                PTUStylePropertyType_String,                style_id,               ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonAddress,              PTUStylePropertyType_String,                URL,                    ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonAddressLandscape,     PTUStylePropertyType_String,                URL_land,               ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    androidWrongKey5,             PTUStylePropertyType_String,                image_inactive,                  ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonImageURL,             PTUStylePropertyType_String,                image,                  ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonImageSelectedURL,     PTUStylePropertyType_String,                image_selected,         ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonImageDisabledURL,     PTUStylePropertyType_String,                image_disabled,         ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (CGFloat,                       buttonImageScale,           PTUStylePropertyType_Size,                  image_scale,            NSNumber_CGFloat,   Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonLeftIcon,             PTUStylePropertyType_String,                left_icon,              ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonRightIcon,            PTUStylePropertyType_String,                right_icon,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    buttonTitle,                PTUStylePropertyType_String,                text,                   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    androidWrongKey4,                PTUStylePropertyType_String,                text_alignment,                   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          roundLeftTop,               PTUStylePropertyType_Boolean,               round_left_top,         NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          roundRightTop,              PTUStylePropertyType_Boolean,               round_right_top,        NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          roundLeftBottom,            PTUStylePropertyType_Boolean,               round_left_bottom,      NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          roundRightBottom,           PTUStylePropertyType_Boolean,               round_right_bottom,     NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          underlined,                 PTUStylePropertyType_Boolean,               text_underline,         NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (BOOL,                          uppercase,                  PTUStylePropertyType_Boolean,               text_all_caps,          NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (CGFloat,                       cornerRadius,               PTUStylePropertyType_Size,                  corner_radius,          NSNumber_CGFloat,   Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    availableForOS,             PTUStylePropertyType_String,                os,                     ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,                    availableForLoggedInState,  PTUStylePropertyType_String,                visibility,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGradientComplex *,     gradient,                   PTUStylePropertyType_GradientComplex,       gradient,               ARC,                Optional,   Inline)

PTUStyleDefineInterface(PTUStyleButton, PTUStyle_Definition_Button)

@interface PTUStyleButton ()

- (BOOL)isAvailable;
- (PTUStyleVisibility)visibility;

@end

#define PTUStyle_Definition_TextField(step) \
PTUStylePropertyDefinition_ ## step (BOOL,          secureTextEntry,        PTUStylePropertyType_Boolean,   secured,            NSNumber_BOOL,      Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (CGFloat,       cornerRadius,           PTUStylePropertyType_Size,      corner_radius,      NSNumber_CGFloat,   Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    keyboardTypeString,     PTUStylePropertyType_String,    text_input_type,    ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIFont *,      font,                   PTUStylePropertyType_Font,      text,               ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     borderColor,            PTUStylePropertyType_Color,     border,             ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     backgroundColor,        PTUStylePropertyType_Color,     background,         ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     textColor,              PTUStylePropertyType_Color,     text,               ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     palceholderColor,       PTUStylePropertyType_Color,     text_hint,          ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     borderHighlightColor,   PTUStylePropertyType_Color,     border_highlight,   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     androidWrongKey,        PTUStylePropertyType_Color,     border_highlight_color,   ARC,                Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    imageLeftString,        PTUStylePropertyType_String,    image_left,         ARC,                Optional,   Inline)
// TODO:
//   use borderHighlightColor

PTUStyleDefineInterface(PTUStyleTextField, PTUStyle_Definition_TextField)

@interface PTUStyleTextField ()

- (UIKeyboardType)keyboardType;
- (UIColor * _Nullable)tintColor;

@end

#define PTUStyle_Definition_TextView(step) \
PTUStylePropertyDefinition_ ## step (UIColor *, fontColor,  PTUStylePropertyType_Color, text,   ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIFont *,  font,       PTUStylePropertyType_Font,  text,   ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleTextView, PTUStyle_Definition_TextView)

#define PTUStyle_Definition_Slider(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,    tintColor,               PTUStylePropertyType_Color, tint,               ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,    progressColor,           PTUStylePropertyType_Color, progress_,          ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,    progressColorMinTrack,   PTUStylePropertyType_Color, progress_min_track, ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,    progressColorMaxTrack,   PTUStylePropertyType_Color, progress_max_track, ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,    thumbColor,              PTUStylePropertyType_Color, thumb,              ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,    thumbDisabledColor,      PTUStylePropertyType_Color, thumb_disabled,     ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleSlider, PTUStyle_Definition_Slider)

@interface PTUStyleSlider ()

// TODO: unused ?
@property (assign, nonatomic, readonly) BOOL minValueDefined;
@property (assign, nonatomic, readonly) float minValue;
@property (assign, nonatomic, readonly) BOOL maxValueDefined;
@property (assign, nonatomic, readonly) float maxValue;
@property (assign, nonatomic, readonly) BOOL defaultValueDefined;
@property (assign, nonatomic, readonly) float defaultValue;

@end

#define PTUStyle_Definition_GameUIMenu(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 backgroundColor,    PTUStylePropertyType_Color,             background,                 ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIMenuSide *,  top,                PTUStylePropertyType_GameUIMenuSide,    game_menu_top_section,      ARC,    Required,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIMenuSide *,  bottom,             PTUStylePropertyType_GameUIMenuSide,    game_menu_bottom_section,   ARC,    Required,   Content)

PTUStyleDefineInterface(PTUStyleGameUIMenu, PTUStyle_Definition_GameUIMenu)

#define PTUStyle_Definition_GameUIBottomBar(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,             background,         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      balanceButton,      PTUStylePropertyType_Button,      balance_button,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       gameModeLabel,      PTUStylePropertyType_Label,       game_mode_label,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   logoImage,          PTUStylePropertyType_ImageView,   logo_image,         ARC,    Optional,   Content)
// game_bottom_bar ??

PTUStyleDefineInterface(PTUStyleGameUIBottomBar, PTUStyle_Definition_GameUIBottomBar)

#define PTUStyle_Definition_GameUITopGameElements(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       clockLabel,             PTUStylePropertyType_Label,     clock_label,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       sessionTimerLabel,      PTUStylePropertyType_Label,     session_timer,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       timeLimitLabel,         PTUStylePropertyType_Label,     time_limit_label,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       sessionBalanceLabel,    PTUStylePropertyType_Label,     session_balance_label,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       winsLabel,              PTUStylePropertyType_Label,     wins_label,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       betsLabel,              PTUStylePropertyType_Label,     bets_label,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        clockView,              PTUStylePropertyType_View,      clock_view,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        panelView,              PTUStylePropertyType_View,      limitation_panel_view,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   clockIcon,              PTUStylePropertyType_ImageView, clock_icon,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   sessionTimerIcon,       PTUStylePropertyType_ImageView, session_timer_icon,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   betsIcon,               PTUStylePropertyType_ImageView, bets_icon,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   winsIcon,               PTUStylePropertyType_ImageView, wins_icon,              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   sessionBalanceIcon,     PTUStylePropertyType_ImageView, session_balance_icon,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (UIColor *,             androidWrongKey,                PTUStylePropertyType_Color,     background,                 ARC,    Optional,   Property) \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   timeLimitIcon,          PTUStylePropertyType_ImageView, time_limit_icon,        ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleGameUITopGameElements, PTUStyle_Definition_GameUITopGameElements)

#define PTUStyle_Definition_PTUStyleGameUIBringMoneyIT(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        containerView,                  PTUStylePropertyType_View,        bring_money_content,                ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,                     PTUStylePropertyType_Label,       title_label,                        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       availableUserBalanceLabel,      PTUStylePropertyType_Label,       balance_amount_label,               ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       freeSpinBonusLabel,             PTUStylePropertyType_Label,       free_spin_bonus_amount_label,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       userBalanceDescriptionLabel,    PTUStylePropertyType_Label,       user_balance_description_label,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       bringToGameDescriptionLabel,    PTUStylePropertyType_Label,       bring_to_game_description_label,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       aamsCodeLabel,                  PTUStylePropertyType_Label,       aams_label,                         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       currencyLabel,                  PTUStylePropertyType_Label,       currency_label,                     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       winsLabel,                      PTUStylePropertyType_Label,       wins_label,                         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      closeButton,                    PTUStylePropertyType_Button,      cancel_button,                      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      confirmButton,                  PTUStylePropertyType_Button,      confirm_button,                     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   coinsIcon,                      PTUStylePropertyType_ImageView,   coins_icon,                         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   freeSpinsIcon,                  PTUStylePropertyType_ImageView,   free_spins_icon,                    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   gameBonusIcon,                  PTUStylePropertyType_ImageView,   game_bonus_icon,                    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   moneyTextField,                 PTUStylePropertyType_TextField,   money_text_field,                   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSlider *,      moneySlider,                    PTUStylePropertyType_Slider,      money_slider,                       ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleGameUIBringMoneyIT, PTUStyle_Definition_PTUStyleGameUIBringMoneyIT)

#define PTUStyle_Definition_PTUStyleGameUIBringMoneyES(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             errorColor,                     PTUStylePropertyType_Color,     error,                      ARC,    Optional,   Property) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,                PTUStylePropertyType_Color,     background,                 ARC,    Optional,   Property) \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        containerView,                  PTUStylePropertyType_View,      game_limitations_content,   ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   lossLimitTextField,             PTUStylePropertyType_TextField, loss_limit_text_field,      ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   sessionTimeTextField,           PTUStylePropertyType_TextField, session_time_field,         ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   gamblingNoticeTextField,        PTUStylePropertyType_TextField, gambling_notice_field,      ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   selfExclusionTextField,         PTUStylePropertyType_TextField, self_exclusion_field,       ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       gameLimitationsLabel,           PTUStylePropertyType_Label,     game_limitations_label,     ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       lossLimitLabel,                 PTUStylePropertyType_Label,     loss_limit_label,           ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       sessionTimeLabel,               PTUStylePropertyType_Label,     session_time_label,         ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       gamblingNoticeLabel,            PTUStylePropertyType_Label,     gambling_notice_label,      ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       selfExclusionLabel,             PTUStylePropertyType_Label,     self_exclusion_label,       ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       errorLabel,                     PTUStylePropertyType_Label,     error_label,                ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      closeButton,                    PTUStylePropertyType_Button,    cancel_button,              ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      confirmButton,                  PTUStylePropertyType_Button,    confirm_button,             ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      selfExclusionCheckboxButton,    PTUStylePropertyType_Button,    self_exclusion_checkbox,    ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   dropdownActiveImageView,        PTUStylePropertyType_ImageView, dropdown_active_image,      ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   dropdownInactiveImageView,      PTUStylePropertyType_ImageView, dropdown_inactive_image,    ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      dropdownButton,                 PTUStylePropertyType_Button,    drop_down_item,             ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleGameUIBringMoneyES, PTUStyle_Definition_PTUStyleGameUIBringMoneyES)

#define PTUStyle_Definition_GameUIModeSelector(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,        PTUStylePropertyType_Color,     background,                 ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        containerView,          PTUStylePropertyType_View,      container,                  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,             PTUStylePropertyType_Label,     title,                      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       moneyLabel,             PTUStylePropertyType_Label,     money,                      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       bonusLabel,             PTUStylePropertyType_Label,     bonus,                      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   moneyImageView,         PTUStylePropertyType_ImageView, money,                      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   bonusImageView,         PTUStylePropertyType_ImageView, bonus,                      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   freeSpinImageView,      PTUStylePropertyType_ImageView, free_spins,                 ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      realMoneyButton,        PTUStylePropertyType_Button,    money,                      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      bonusRewardsButton,     PTUStylePropertyType_Button,    bonus,                      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      freeSpinsButton,        PTUStylePropertyType_Button,    free_spins,                 ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      closeButtonButton,      PTUStylePropertyType_Button,    close,                      ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleGameUIModeSelector, PTUStyle_Definition_GameUIModeSelector)

#define PTUStyle_Definition_GameUINotificationFreeSpins(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,        PTUStylePropertyType_Color,     background,                 ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             itemBackgroundColor,    PTUStylePropertyType_Color,     item_background,            ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       label,                  PTUStylePropertyType_Label,     free_spin_bonus_label,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   imageView,              PTUStylePropertyType_ImageView, game_free_spin_bonus_image, ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleGameUINotificationFreeSpins, PTUStyle_Definition_GameUINotificationFreeSpins)

#define PTUStyle_Definition_GameUINotificationGoldenChips(step) \
PTUStylePropertyDefinition_ ## step (NSString *,            image,                  PTUStylePropertyType_String,    view_image,                 ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,        PTUStylePropertyType_Color,     background,                 ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundItem,         PTUStylePropertyType_Color,     item_background,            ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       label,                  PTUStylePropertyType_Label,     golden_chips_label,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   imageView,              PTUStylePropertyType_ImageView, game_golden_chips_image,    ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleGameUINotificationGoldenChips, PTUStyle_Definition_GameUINotificationGoldenChips)

#define PTUStyle_Definition_PTUStyleGameUICommon(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      menuButton,                     PTUStylePropertyType_Button,    menu_button,                        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       quickMenuNoticeLabel,           PTUStylePropertyType_Label,     quick_menu_notice_label,            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   quickMenuNoticeImageView,       PTUStylePropertyType_ImageView, quick_menu_notice_background,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   quickMenuNotificationImageView, PTUStylePropertyType_ImageView, quick_menu_notification_background, ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   androidWrongKey, PTUStylePropertyType_ImageView, quick_menu_notification_goldenchips_image, ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   androidWrongKey2, PTUStylePropertyType_ImageView, quick_menu_notification_freespins_image, ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleGameUICommon, PTUStyle_Definition_PTUStyleGameUICommon)

#define PTUStyle_Definition_ScreenProgress(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,     inactiveColor,      PTUStylePropertyType_Color,     progress_inactive,      ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     outerCircleColor,   PTUStylePropertyType_Color,     progress_outer_circle,  ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     innerCircleColor,   PTUStylePropertyType_Color,     progress_inner_circle,  ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     textColor,          PTUStylePropertyType_Color,     text_color,             ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *,     progressActive,     PTUStylePropertyType_Color,     progress_active,        ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (NSString *,    playImage,          PTUStylePropertyType_String,    progress_play_image,    ARC,    Optional,   Inline)

PTUStyleDefineInterface(PTUStyleProgress, PTUStyle_Definition_ScreenProgress)

typedef NS_ENUM(NSUInteger, PTUStyleMenuAppElementActionType)
{
    PTUStyleMenuAppElementActionType_Unknown = 0,
    PTUStyleMenuAppElementActionType_OpenURL,
    PTUStyleMenuAppElementActionType_OpenMenu,
    PTUStyleMenuAppElementActionType_OpenAbout,
    PTUStyleMenuAppElementActionType_OpenGameManagmentManual,
    PTUStyleMenuAppElementActionType_OpenGameManagmentAuto,
    PTUStyleMenuAppElementActionType_OpenMoreFrom,
    PTUStyleMenuAppElementActionType_Logout,
    PTUStyleMenuAppElementActionType_VirtualCard,
    PTUStyleMenuAppElementActionType_GameSoundSwitch,
    PTUStyleMenuAppElementActionType_ServerTimeSwitch,
    PTUStyleMenuAppElementActionType_TouchIDSwitch,
    PTUStyleMenuAppElementActionType_DownloadOnWifiOnlySwitch,
    PTUStyleMenuAppElementActionType_RemoveGamesAutomaticallySwitch,
    PTUStyleMenuAppElementActionType_OpenForgotPassword,
    PTUStyleMenuAppElementActionType_OpenChat,
    PTUStyleMenuAppElementActionType_OpenAccount,
    PTUStyleMenuAppElementActionType_OpenFavorites,
    PTUStyleMenuAppElementActionType_OpenPromotions,
    PTUStyleMenuAppElementActionType_OpenHome
};

// TODO: remove
extern NSString * _Nonnull const PTUStyleMenuAppElementID_TouchID;
extern NSString * _Nonnull const PTUStyleMenuAppElementID_GameSounds;
extern NSString * _Nonnull const PTUStyleMenuAppElementID_DownloadOnWifiOnly;
extern NSString * _Nonnull const PTUStyleMenuAppElementID_ServerTime;
extern NSString * _Nonnull const PTUStyleMenuAppElementID_AutomaticGameManagement;
extern NSString * _Nonnull const PTUStyleMenuAppElementID_FaceID;

@interface PTUStyleMenuAppElement ()

@property (assign, nonatomic, readonly) PTUStyleMenuAppElementActionType actionType;

- (BOOL)isAvailable;
- (PTUStyleVisibility)visibility;

@end

#define PTUStyle_Definition_Separator(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,    backgroundColor,    PTUStylePropertyType_Color,    background,     ARC,    Optional,   Property)

PTUStyleDefineInterface(PTUStyleSeparator, PTUStyle_Definition_Separator)

#define PTUStyle_Definition_FooterElement(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,               label,              PTUStylePropertyType_Label,             label_,         ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,              button,             PTUStylePropertyType_Button,            button_,        ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleButtonWithAction *,    buttonWithAction,   PTUStylePropertyType_ButtonWithAction,  button_action_, ARC,    Optional,   Content) \
PTUStylePropertyDefinition_ ## step (PTUStyleSeparator *,           separator,          PTUStylePropertyType_Separator,         separator_,     ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleFooterElement, PTUStyle_Definition_FooterElement)

PTUStyleDefineContentStyleInterface(PTUStyleFooterContent, PTUStyleFooterElement *)

#define PTUStyle_Definition_Footer(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,                 backgroundColor,    PTUStylePropertyType_Color,         background,             ARC,            Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (BOOL,                      openURLsInWebView,  PTUStylePropertyType_Boolean,       open_url_in_webview,    NSNumber_BOOL,  Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleFooterContent *,   content,            PTUStylePropertyType_FooterContent, content,                ARC,            Required,   Inline)

PTUStyleDefineInterface(PTUStyleFooter, PTUStyle_Definition_Footer)

// TODO: this style exists in GameUI config but is not used in iOS app
// iOS app uses style from LobbyCommon config instead
// fix this
#define PTUStyle_Definition_GameUIBlockedGames(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,     background,                         ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       messageLabel,       PTUStylePropertyType_Label,     blocked_game_message_label,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       passwordLabel,      PTUStylePropertyType_Label,     blocked_game_password_label,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   passwordTextField,  PTUStylePropertyType_TextField, blocked_game_password_field,        ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       wrongPasswordLabel, PTUStylePropertyType_Label,     blocked_game_wrong_password_label,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      closeButton,        PTUStylePropertyType_Button,    blocked_game_close_button,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      okButton,           PTUStylePropertyType_Button,    blocked_game_ok_button,             ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleGameUIBlockedGames, PTUStyle_Definition_GameUIBlockedGames)

#define PTUStyle_Definition_GameUIGameWheel(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   placeholderImage,   PTUStylePropertyType_ImageView, placeholder_image,  ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleGameUIGameWheel, PTUStyle_Definition_GameUIGameWheel)

// TODO: deprecated ?
#define PTUStyle_Definition_GameUIAutoplayLimits(step) \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,    PTUStylePropertyType_Color,     background,         ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (CGFloat,               cornerRadius,       PTUStylePropertyType_Size,      corner_radius,      NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,             errorColor,         PTUStylePropertyType_Color,     error,              ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,         PTUStylePropertyType_Label,     label_title,        ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       lossLabel,          PTUStylePropertyType_Label,     label_loss,         ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       winLabel,           PTUStylePropertyType_Label,     label_win,          ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       jackpotLabel,       PTUStylePropertyType_Label,     label_jackpot,      ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       lossWarningLabel,   PTUStylePropertyType_Label,     label_warning_loss, ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       winWarningLabel,    PTUStylePropertyType_Label,     label_warning_win,  ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   lossTextField,      PTUStylePropertyType_TextField, text_field_loss,    ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   winTextField,       PTUStylePropertyType_TextField, text_field_win,     ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSwitch *,      winSwitch,          PTUStylePropertyType_Switch,    switch_win,         ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleSwitch *,      jackpotSwitch,      PTUStylePropertyType_Switch,    switch_jackpot,     ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      confirmButton,      PTUStylePropertyType_Button,    button_confirm,     ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      exitButton,         PTUStylePropertyType_Button,    button_exit,        ARC,                Optional,   Content)

PTUStyleDefineInterface(PTUStyleGameUIAutoplayLimits, PTUStyle_Definition_GameUIAutoplayLimits)

#define PTUStyle_Definition_Circle(step) \
PTUStylePropertyDefinition_ ## step (UIColor *, strokeColor,    PTUStylePropertyType_Color, circle_stroke,  ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (UIColor *, fillColor,      PTUStylePropertyType_Color, circle_fill,    ARC,    Required,   Inline)

PTUStyleDefineInterface(PTUStyleCircle, PTUStyle_Definition_Circle)

#define PTUStyle_Definition_LoadingPercent(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        backgroundView,     PTUStylePropertyType_View,        background,         ARC,    Required,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       progressLabel,      PTUStylePropertyType_Label,       label_progress,     ARC,    Required,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       percentLabel,       PTUStylePropertyType_Label,       label_percent,      ARC,    Required,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleCircle *,      circleInner,        PTUStylePropertyType_Lobby_Circle,      circle_inner,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleCircle *,      circleOuter,        PTUStylePropertyType_Lobby_Circle,      circle_outer,       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleCircle *,      circleLoading,      PTUStylePropertyType_Lobby_Circle,      progress_circle,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   logoImageView,      PTUStylePropertyType_ImageView,   logo,               ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   copyrightImageView, PTUStylePropertyType_ImageView,   copyright,          ARC,    Required,   Content)

PTUStyleDefineInterface(PTUStyleLoadingPercent, PTUStyle_Definition_LoadingPercent)

#define PTUStyle_Definition_WebViewNavBar(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  backButton,     PTUStylePropertyType_Button,    back_navigation_button,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  forwardButton,  PTUStylePropertyType_Button,    forward_navigation_button,  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,    panelView,      PTUStylePropertyType_View,      navigation_panel,           ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleWebViewNavBar, PTUStyle_Definition_WebViewNavBar)

#define PTUStyle_Definition_GameUI(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIBottomBar *,                 bottomBarStyle,             PTUStylePropertyType_GameUIBottomBar,                 game_bottom_bar,                                    ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIBlockedGames *,              blockedGameAlertStyle,      PTUStylePropertyType_GameUIAlertBlockedGames,         blocked_game_dialog,                                ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUITopGameElements *,           topGameElementsStyle,       PTUStylePropertyType_GameUITopGameElements,           game_top_elements,                                  ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIBringMoneyIT *,              bringMoneyITStyle,          PTUStylePropertyType_GameUIITBringMoney,              bring_money_it,                                     ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIBringMoneyES *,              bringMoneyESStyle,          PTUStylePropertyType_GameUIESBringMoney,              game_limitations_es,                                ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIModeSelector *,              gameModeSelectorStyle,      PTUStylePropertyType_GameUIITGameModeSelector,        spin_type_selector,                                 ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIGameWheel *,                 gameWheelStyle,             PTUStylePropertyType_GameUIGameWheel,                 game_wheel,                                         ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIMenu *,                      menuRealMode,               PTUStylePropertyType_GameUIMenu,                      game_menu_logged_in,                                ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIMenu *,                      menuDemoMode,               PTUStylePropertyType_GameUIMenu,                      game_menu_logged_out,                               ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleFooter *,                          menuFooter,                 PTUStylePropertyType_Footer,                          game_menu_footer,                                   ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUICommon *,                    menuCommon,                 PTUStylePropertyType_GameUICommon,                    game_menu_common,                                   ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUINotificationGoldenChips *,   notificationGoldenChips,    PTUStylePropertyType_GameUINotificationGoldenChips,   game_quick_menu_golden_chips_notification_view,     ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUINotificationFreeSpins *,     notificationFreeSpins,      PTUStylePropertyType_GameUINotificationFreeSpins,     game_quick_menu_free_spin_bonus_notification_view,  ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleLimitationPanel *,                 limitationPanel,            PTUStylePropertyType_LimitationPanel,                 gameui_limitation_panel,                            ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleLoginTimerPanel *,                 loginTimerPanel,            PTUStylePropertyType_LoginTimerPanel,                 gameui_login_timer_panel,                           ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleSessionPanel *,                    sessionPanel,               PTUStylePropertyType_SessionPanel,                    gameui_session_panel,                               ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleNetlossCooldownPanel *,            netlossCooldownPanel,       PTUStylePropertyType_NetlossCooldownPanel,            gameui_netloss_cooldown_panel,                      ARC,    Required,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleGameUIAutoplayLimits *,            autoplayLimits,             PTUStylePropertyType_GameUIAutoplayLimits,            game_autoplay_limits_menu,                          ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleLoadingPercent *,            gameLoading,             PTUStylePropertyType_Lobby_LoadingPercent,            game_loading,                          ARC,    Optional,   Inline) \
PTUStylePropertyDefinition_ ## step (PTUStyleWebViewNavBar *,               webViewNavBar,          PTUStylePropertyType_Lobby_WebViewNavBar,               external_page,                  ARC,    Required,   Inline)

PTUStyleDefineInterface(PTUStyleGameUI, PTUStyle_Definition_GameUI)

#define PTUStyle_Definition_Alert(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        contentView,                        PTUStylePropertyType_View,        alert_content,                              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (UIColor *,             backgroundColor,                    PTUStylePropertyType_Color,             background,                                 ARC,    Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      checkboxButton,                     PTUStylePropertyType_Button,      checkbox,                                   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      biometricAuthActivateUseButton,     PTUStylePropertyType_Button,      alert_button_activate_touch_id_use,         ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      biometricAuthActivateNotNowButton,  PTUStylePropertyType_Button,      alert_button_activate_biom_auth_not_now,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      biometricAuthActivateDontUseButton, PTUStylePropertyType_Button,      alert_button_activate_touch_id_dont_use,    ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      positiveButton,                     PTUStylePropertyType_Button,      alert_positive_button,                      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      negativeButton,                     PTUStylePropertyType_Button,      alert_negative_button,                      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      neutralButton,                      PTUStylePropertyType_Button,      alert_neutral_button,                       ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      faceIDActivateUseButton,            PTUStylePropertyType_Button,      alert_button_activate_face_id_use,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      faceIDActivateDontUseButton,        PTUStylePropertyType_Button,      alert_button_activate_face_id_dont_use,     ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   dropdownImageView,                  PTUStylePropertyType_ImageView,   dropdown_image,                             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       titleLabel,                         PTUStylePropertyType_Label,       alert_title,                                ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       errorLabel,                         PTUStylePropertyType_Label,       alert_error,                                ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       webTitleLabel,                      PTUStylePropertyType_Label,       alert_web_title,                            ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       messageLabel,                       PTUStylePropertyType_Label,       alert_message,                              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       checkboxLabel,                      PTUStylePropertyType_Label,       checkbox_text,                              ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleTextField *,   textField,                          PTUStylePropertyType_TextField,   text_field,                                 ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       gameName,                           PTUStylePropertyType_Label,       game_name,                                  ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleAlert, PTUStyle_Definition_Alert)

#define PTUStyle_Definition_EnhancedMessage(step) \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,       messageText,            PTUStylePropertyType_Label,     popup_message,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      closeButton,            PTUStylePropertyType_Button,    close_button,           ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      actionButton,           PTUStylePropertyType_Button,    actionable_button,      ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,      cancelButton,           PTUStylePropertyType_Button,    cancel_button,          ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleImageView *,   imageView,              PTUStylePropertyType_ImageView, image,                  ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        messageAndButtonsView,  PTUStylePropertyType_View,      text_area_background,   ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        popupView,              PTUStylePropertyType_View,      popup_view,             ARC,    Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleView *,        stackView,              PTUStylePropertyType_View,      buttons_bar_background, ARC,    Optional,   Content)

PTUStyleDefineInterface(PTUStyleEnhancedMessage, PTUStyle_Definition_EnhancedMessage)

#define PTUStyle_Definition_StyleToaster(step) \
PTUStylePropertyDefinition_ ## step (CGFloat,           cornerRadius,       PTUStylePropertyType_Size,          corner_radius,      NSNumber_CGFloat,   Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (BOOL,              roundBottomLeft,    PTUStylePropertyType_Boolean,       round_bottom_left,  NSNumber_BOOL,      Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (BOOL,              roundBottomRight,   PTUStylePropertyType_Boolean,       round_bottom_right, NSNumber_BOOL,      Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (UIColor *,         backgroundColor,    PTUStylePropertyType_Color,         background,         ARC,                Optional,   Property)   \
PTUStylePropertyDefinition_ ## step (PTUStyleLabel *,   messageLabel,       PTUStylePropertyType_Label,   toaster_message,    ARC,                Optional,   Content)    \
PTUStylePropertyDefinition_ ## step (PTUStyleButton *,  closeButton,        PTUStylePropertyType_Button,  close_button,       ARC,                Optional,   Content)

PTUStyleDefineInterface(PTUStyleToaster, PTUStyle_Definition_StyleToaster)
