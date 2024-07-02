//
//  PTUGameInstance.h
//  Middle
//
//  Created by hlpa on 04.07.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUGameInstance : NSObject

@property (strong, nonatomic, readonly) NSString *gameID;
@property (strong, nonatomic, readonly) NSString *gameWindowSessionID;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)gameInstanceWithGameID:(NSString *)gameID gameWindowID:(NSString *)gameWindowSessionID;
+ (instancetype)deserializeFrom:(NSDictionary *)info;
- (NSDictionary *)serialize;

@end
