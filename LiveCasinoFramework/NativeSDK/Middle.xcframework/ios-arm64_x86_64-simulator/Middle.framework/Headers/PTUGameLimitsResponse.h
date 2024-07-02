//
//  PTUGameLimitsResponse.h
//  Middle
//
//  Created by dmgo on 2/20/17.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTUGameLimitsResponse : PTUCommonResponse

- (NSString *)gameGroup;
- (long)minBet;
- (long)maxBet;
- (long)minPosBet;
- (long)maxPosBet;
- (NSArray *)coinSizes;

@end
