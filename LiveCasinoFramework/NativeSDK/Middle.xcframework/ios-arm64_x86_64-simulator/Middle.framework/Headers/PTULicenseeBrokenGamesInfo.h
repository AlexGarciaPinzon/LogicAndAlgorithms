//
//  PTULicenseeBrokenGamesInfo.h
//  Middle
//
//  Created by vlki on 11/28/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTULicenseeBrokenGamesInfo : NSObject

@property (nonatomic, assign, readonly) BOOL forceRestoreEnabled;
@property (nonatomic, assign, readonly) NSUInteger brokenGamesMaxCount;
@property (nonatomic, strong, readonly) NSDictionary <NSString *, NSString *> *replacementGameCodes;

- (instancetype)initWithDictionaryRepresentation:(NSDictionary *)dictionary;

@end
