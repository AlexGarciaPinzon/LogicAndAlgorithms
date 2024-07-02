//
//  PTUCurrencyFormatInfo.h
//  Middle
//
//  Created by Oleksandr Khylyk on 3/23/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUCurrencyFormatInfo : NSObject

@property (copy, nonatomic, readonly) NSString *demoCurrencyIdentifier;
@property (copy, nonatomic, readonly) NSString *decimalSeparator;
@property (assign, nonatomic, readonly) NSInteger fractions;
@property (copy, nonatomic, readonly) NSString *groupSeparator;
@property (assign, nonatomic, readonly) BOOL isSymbolPrefix;
@property (assign, nonatomic, readonly) BOOL symbolSeparatedWithSpace;
    
- (instancetype)initWithDemoCurrencyIdentifier:(NSString *)demoCurrencyIdentifier
                              decimalSeparator:(NSString *)decimalSeparator
                                     fractions:(NSInteger)fractions
                                groupSeparator:(NSString *)groupSeparator
                                isSymbolPrefix:(BOOL)isSymbolPrefix
                      symbolSeparatedWithSpace:(BOOL)symbolSeparatedWithSpace;

@end
