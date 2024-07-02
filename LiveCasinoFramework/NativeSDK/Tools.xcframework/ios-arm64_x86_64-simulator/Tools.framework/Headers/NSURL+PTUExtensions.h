//
//  NSURL+PTUExtensions.h
//  Tools
//
//  Created by setk on 7/25/18.
//  Copyright © 2018 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (PTUExtensions)

+ (NSURL *)ptuAbsoluteURLFromURL:(NSURL *)absoluteOrRelativeURL baseURL:(NSURL *)baseURL;

- (NSString *)ptuValueForVariable:(NSString *)variable;
- (NSURL *)ptuRebuildURLForomVariable:(NSString *)variable;

@end
