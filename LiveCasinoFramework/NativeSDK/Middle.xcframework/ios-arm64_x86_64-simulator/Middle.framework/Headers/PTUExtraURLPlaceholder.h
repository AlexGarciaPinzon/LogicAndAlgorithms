//
//  PTUExtraURLPlaceholder.h
//  Middle
//
//  Created by hlpa on 04.05.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUExtraURLPlaceholder : NSObject

@property (copy, nonatomic, readonly) NSString *placeholderKey;
@property (copy, nonatomic, readonly) NSString *placeholderValue;

+ (instancetype)placeholderWithKey:(NSString *)key value:(NSString *)value;

- (instancetype)initWithKey:(NSString *)key value:(NSString *)value;

@end
