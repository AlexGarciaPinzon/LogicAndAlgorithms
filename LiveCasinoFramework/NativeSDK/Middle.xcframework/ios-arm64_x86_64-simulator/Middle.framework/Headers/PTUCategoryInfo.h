//
//  PTUCategoryInfo.h
//  Middle
//
//  Created by hlpa on 22.05.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSUInteger, PTUGameCategoryType)
{
    PTUGameCategoryTypeMenu = 1,
    PTUGameCategoryTypeSection
};

@class PTUContentFilter;

@interface PTUCategoryInfo : NSObject

@property (assign, nonatomic, readonly) PTUGameCategoryType type;
@property (strong, nonatomic, readonly) NSString *categoryId;
@property (strong, nonatomic, readonly) NSString *name;
@property (strong, nonatomic, readonly) NSString *localizedName;
@property (strong, nonatomic, readonly) PTUContentFilter *filter;

// Game Info objects must exist only in single instance each
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end
