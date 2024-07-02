//
//  NSStringPlaceholderInfo.h
//  Tools
//
//  Created by setk on 5/24/18.
//  Copyright © 2018 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSStringPlaceholderInfo : NSObject

@property (copy, nonatomic, readonly, nonnull) NSString *placeholderKey;
@property (copy, nonatomic, readonly, nonnull) NSString *placeholderValue;

+ (instancetype _Nonnull)placeholderWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;

- (instancetype _Nonnull)initWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;

@end
