//
//  PTUExpandedBalanceEntries.h
//  Middle
//
//  Created by hlpa on 16/4/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUExpandedBalanceEntry;

@interface PTUExpandedBalanceEntries : NSObject

@property (strong, nonatomic, readonly) NSArray<PTUExpandedBalanceEntry *> *balanceEntries;

+ (instancetype)with:(NSArray<PTUExpandedBalanceEntry *> *)entries;

@end
