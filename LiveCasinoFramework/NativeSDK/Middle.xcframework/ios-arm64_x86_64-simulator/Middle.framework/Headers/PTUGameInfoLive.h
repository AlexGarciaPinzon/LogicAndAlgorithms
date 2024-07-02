//
//  PTUGameInfoLive.h
//  Middle
//
//  Created by hlpa on 01.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUGameInfoLive : NSObject

@property (copy, nonatomic, readonly) NSString *liveGameIdentifier;
@property (copy, nonatomic, readonly) NSString *tableIdentifier;
@property (copy, nonatomic, readonly) NSString *networkIdentifier;
@property (copy, nonatomic, readonly) NSString *physicalTableIdentifier;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)gameInfoLiveWithLiveGameID:(NSString *)liveGameID
                                   tableID:(NSString *)tableID
                                 networkID:(NSString *)networkID
                           physicalTableID:(NSString *)physicalTableIdentifier;

@end
