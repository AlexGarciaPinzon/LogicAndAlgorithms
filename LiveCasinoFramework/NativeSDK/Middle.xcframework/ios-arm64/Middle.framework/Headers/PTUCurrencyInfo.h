//
//  PTUCurrencyInfo.h
//  Middle
//
//  Created by Oleksandr Khylyk on 3/23/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUCurrencyFormatInfo;

@interface PTUCurrencyInfo : NSObject

@property (strong, nonatomic, readonly) PTUCurrencyFormatInfo *currencyFormatInfo;

@property (weak, nonatomic, readonly) NSString *demoCurrencyIdentifier;

- (instancetype)initWithCurrencySymbolsByCodes:(NSDictionary<NSString *, NSString *> *)currencySymbolsByCodes
                         formatsByLanguageCode:(NSDictionary<NSString *, PTUCurrencyFormatInfo *> *)formatsByLanguageCode
                         defaultFormatLanguage:(NSString *)defaultFormatLanguage;

- (void)updateLanguage:(NSString *)newLanguage;

- (NSString *)cyrrencySignForCurrencyIdentifier:(NSString *)currencyIdentifier;

@end
