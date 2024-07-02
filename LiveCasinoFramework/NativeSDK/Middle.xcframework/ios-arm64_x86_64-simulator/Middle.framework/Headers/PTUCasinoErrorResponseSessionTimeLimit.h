//
//  PTUCasinoErrorResponseSessionTimeLimit.h
//  Middle
//
//  Created by hlpa on 11/4/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUCasinoErrorResponseSessionTimeLimit : NSObject

@property (strong, nonatomic, readonly) NSString *windowID;
@property (assign, nonatomic, readonly) BOOL logoutEnabled;
@property (strong, nonatomic, readonly) NSArray<NSNumber /* <NSUInteger> */ *> *extensionPeriods;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
