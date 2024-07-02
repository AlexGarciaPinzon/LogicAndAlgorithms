//
//  Translations.h
//  Translations
//
//  Created by yudu on 9/28/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Translations.
FOUNDATION_EXPORT double TranslationsVersionNumber;

//! Project version string for Translations.
FOUNDATION_EXPORT const unsigned char TranslationsVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Translations/PublicHeader.h>

#define PTULocalizedString(_key,_comment) [[LocalizationManager sharedInstance] localizedStringForKey:(_key) comment: nil]
#define PTULocalizedPluralString(_key, _number, _comment) [[LocalizationManager sharedInstance] localizedPluralStringForKey:(_key) number:(_number) comment:nil]
