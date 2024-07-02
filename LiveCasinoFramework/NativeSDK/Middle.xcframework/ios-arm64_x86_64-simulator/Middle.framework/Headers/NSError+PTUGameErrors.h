//
//  NSError+PTUGameErrors.h
//  Middle
//
//  Created by Daniil Mazepin on 5/22/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const PTUGameErrorDomainName;

typedef NS_ENUM (NSUInteger, PTUGameErrorDomainType) {
    PTUGameErrorDomainTypeSpinError = 1
};

@interface NSError (PTUGameErrors)

+ (NSError *)ptuGameErrorWithCode:(PTUGameErrorDomainType)code;

@end
