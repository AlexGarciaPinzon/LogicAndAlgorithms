//
//  PTUContentFilter.h
//  Middle
//
//  Created by hlpa on 20.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTULicenseeRegulation.h"

// TODO: is public, this is a tweak. make 'project' again

typedef NS_ENUM(NSUInteger, PTUContentFilterType)
{
    PTUContentFilterTypeNone = 0,
    PTUContentFilterTypeAllowing,
    PTUContentFilterTypeBlocking
};

typedef NS_ENUM(NSUInteger, PTUContentFilterUserStates)
{
    PTUContentFilterUserStatesLoggedOut   = 1 << 0,
    PTUContentFilterUserStatesLoggedIn    = 1 << 1,

    PTUContentFilterUserStatesAll = NSUIntegerMax
};

@interface PTUContentFilter : NSObject

@property (strong, nonatomic, readonly) NSArray<NSString *> *countries;
@property (assign, nonatomic, readonly) PTUContentFilterType countriesFilterType;
@property (strong, nonatomic, readonly) NSArray<NSString *> *languages;
@property (assign, nonatomic, readonly) PTUContentFilterType languagesFilterType;
@property (assign, nonatomic, readonly) PTUContentFilterUserStates allowedUserStates;
@property (strong, nonatomic, readonly) NSArray<NSString *> *platforms;
@property (assign, nonatomic, readonly) PTUContentFilterType platformsFilterType;
@property (strong, nonatomic, readonly) NSArray<NSNumber /* <NSUInteger> */ *> *regulations;
@property (assign, nonatomic, readonly) PTUContentFilterType regulationsFilterType;

- (instancetype)initWithCountries:(NSArray<NSString *> *)countries
                       filteredAs:(PTUContentFilterType)countriesFilterType
                        languages:(NSArray<NSString *> *)languages
                       filteredAs:(PTUContentFilterType)languagesFilterType
                allowedUserStates:(PTUContentFilterUserStates)allowedUserStates
                        platforms:(NSArray<NSString *> *)platforms
                       filteredAs:(PTUContentFilterType)platformsFilterType
                      regulations:(NSArray<NSNumber /* <NSUInteger> */ *> *)regulations
                       filteredAs:(PTUContentFilterType)regulationsFilterType
NS_DESIGNATED_INITIALIZER;

- (BOOL)isDisabledForLanguage:(NSString *)languageCode
                      country:(NSString *)countryCode
                   regulation:(PTULicenseeRegulationType)regulation
                     platform:(NSString *)platformCode
                   loginState:(BOOL)loggedIn;

@end
