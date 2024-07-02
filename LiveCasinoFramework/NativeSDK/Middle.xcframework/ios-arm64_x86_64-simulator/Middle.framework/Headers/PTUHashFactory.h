//
//  PTUHashFactory.h
//  Middle
//
//  Created by Daniil Mazepin on 6/30/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUHashFactory : NSObject

+ (NSString *)md5HashForPassword:(NSString *)password;
+ (NSString *)md5HashForUsername:(NSString *)username password:(NSString *)password;

+ (NSString *)loginHashIdForUsername:(NSString *)username password:(NSString *)password date:(NSString *)formattedDate;

+ (NSString *)sha256HexLower:(NSString *)hashString;
+ (NSString *)generateFlowIDForUserName:(NSString *)userName
                                   time:(NSDate *)date;

@end
