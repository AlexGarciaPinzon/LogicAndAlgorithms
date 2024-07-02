//
//  PTULanguageMapper.h
//  Middle
//
//  Created by Oleksandr Khylyk on 12/13/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PTULanguageMapperType) {
    PTULanguageMapperTypeURLRequest,
    PTULanguageMapperTypeURLTemplate,
    PTULanguageMapperTypeExternalConfig,
    PTULanguageMapperTypeDefaultConfig
};

@interface PTULanguageMapper : NSObject

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

- (NSString *)languageWithMapperType:(PTULanguageMapperType)mapperType forLanguage:(NSString *)language;

@end
