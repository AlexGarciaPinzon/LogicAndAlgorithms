//
//  NSNumberFormatter+PTUExtension.h
//  Middle
//
//  Created by Pavlo Kurliandskyi on 12/28/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumberFormatter (PTUExtension)

+ (instancetype)ptuBalanceFormatterWithCurrencySymbol:(NSString *)currencySymbol
                                     decimalSeparator:(NSString *)decimalSeparator
                                    groupingSeparator:(NSString *)groupingSeparator
                                            fractions:(NSUInteger)fractions
                                       isSymbolPrefix:(BOOL)isSymbolPrefix
                             symbolSeparatedWithSpace:(BOOL)symbolSeparatedWithSpace;

@end
