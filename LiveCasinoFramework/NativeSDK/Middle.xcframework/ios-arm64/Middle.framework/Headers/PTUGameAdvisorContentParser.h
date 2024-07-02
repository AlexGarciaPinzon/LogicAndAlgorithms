//
//  PTUGameAdvisorContentParser.h
//  Middle
//
//  Created by gp on 14/5/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTUResourceGame.h"

@class PTUGameAdvisorResponse;

@interface PTUGameAdvisorContentParser : NSObject

+ (NSArray<NSString *> *)fromResponse:(PTUGameAdvisorResponse *)response;

@end
