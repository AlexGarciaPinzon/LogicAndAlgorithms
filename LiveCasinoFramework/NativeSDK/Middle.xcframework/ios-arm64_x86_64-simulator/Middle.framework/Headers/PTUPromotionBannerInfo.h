//
//  PTUPromotionBannerInfo.h
//  Middle
//
//  Created by Hlib Pankieiev on 23.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PTUPromotionInfo.h"

@class PTUContentFilter;

@interface PTUPromotionBannerInfo : NSObject

@property (copy, nonatomic) NSString *bannerIdentifier;
@property (assign, nonatomic) double imageAspectRatioPortrait;
@property (assign, nonatomic) double imageAspectRatioLandscape;
@property (copy, nonatomic) NSArray<PTUPromotionInfo*> *promotions;
@property (strong, nonatomic) PTUContentFilter *filter;

@end
