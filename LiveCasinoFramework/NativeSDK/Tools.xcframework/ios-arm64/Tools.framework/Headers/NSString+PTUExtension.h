//
//  NSString+PTUExtension.h
//  Middle
//
//  Created by Oleksandr Khylyk on 10/11/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NSStringPlaceholderInfo;

@interface NSString (PTUExtension)

+ (NSString * _Nonnull)randomStringWithCapacity:(NSUInteger)length;
- (NSString * _Nonnull)stringByReplacingBRWithNewLine;
- (NSString * _Nonnull)stringByStrippingHTMLTags;
- (NSAttributedString * _Nonnull)htmlToAttributedString;
- (NSAttributedString * _Nonnull)htmlToAttributedStringWithTextColor:(UIColor * _Nullable)textColor font:(UIFont * _Nullable)font;

@end

@interface NSString (PTUValue)

- (NSString * _Nonnull)PTUStringValue;
- (NSNumber * _Nonnull)PTUNumberValue;

@end

@interface NSString (URLPercentEscape)

- (NSString * _Nonnull)escapedForURL;
- (NSString * _Nonnull)escapedForURLQuery;

@end

@interface NSString (Placeholder)

+ (NSArray<NSString *> * _Nonnull)placeholderBreacketsVariants;
+ (NSArray * _Nonnull)placeholderStringsForPlaceholderStrings:(NSArray <NSString *> * _Nonnull)placeholders;

- (NSString * _Nonnull)stringWithExtraPlaceholderTemplates:(NSArray <NSStringPlaceholderInfo *> * _Nonnull)extraPlaceholdersTemplate;

- (NSString * _Nonnull)stringByReplacingOccurrencesOfHTMLTagBrWithString:(NSString * _Nonnull)replacement;

@end
