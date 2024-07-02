//
//  PTUGameTechnologyURLPlaceholder.h
//  Middle
//
//  Created by dmytriis on 17.03.2021.
//  Copyright © 2021 Playtech. All rights reserved.
//

@import Foundation;

@interface PTUGameTechnologyURLPlaceholder : NSObject

@property (nonatomic, strong, readonly) NSString *key;
@property (nonatomic, strong, readonly) NSString *actionableKey;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
