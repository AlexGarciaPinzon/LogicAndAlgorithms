//
//  PTUCommonResponse.h
//  Middle
//
//  Created by dmgo on 2/20/17.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUCommonResponse : NSObject

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (int)responseID;

@end
