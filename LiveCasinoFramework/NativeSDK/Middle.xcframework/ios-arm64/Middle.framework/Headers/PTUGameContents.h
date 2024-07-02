//
//  PTUGameContents.h
//  Middle
//
//  Created by hlpa on 23.05.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUGameInfo;
@class PTUCategoryInfoAndGameIDs;

@interface PTUGameContents : NSObject

@property (strong, nonatomic, readonly) NSArray<PTUGameInfo *> *games;
@property (strong, nonatomic, readonly) NSArray<PTUCategoryInfoAndGameIDs *> *categories;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCategories:(NSArray<PTUCategoryInfoAndGameIDs *> *)categoryInfos games:(NSArray<PTUGameInfo *> *)gameInfos;

@end
