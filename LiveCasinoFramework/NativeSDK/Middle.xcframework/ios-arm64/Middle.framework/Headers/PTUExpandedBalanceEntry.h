//
//  PTUExpandedBalanceEntry.h
//  Middle
//
//  Created by hlpa on 16/4/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUBalanceInfo.h"

@interface PTUExpandedBalanceEntry : NSObject

@property (assign, nonatomic, readonly) PTUBalanceType type;
@property (strong, nonatomic, readonly) NSString *translationKey;

+ (instancetype)entryForKey:(NSString *)balanceKey translationKey:(NSString *)translationKey;
+ (instancetype)totalBalanceWithTranslationKey:(NSString *)translationKey;

@end
