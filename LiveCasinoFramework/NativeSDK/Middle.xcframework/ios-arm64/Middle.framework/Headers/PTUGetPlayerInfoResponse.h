//
//  PTUGetPlayerInfoResponse.h
//  Middle
//
//  Created by Yurii Dukhovnyi on 5/17/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

@interface PTUGetPlayerInfoResponse : PTUCommonResponse

@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *email;
@property (copy, nonatomic, readonly) NSString *activeIdToken;

- (NSDictionary *)dictionaryRepresentation;

@end
