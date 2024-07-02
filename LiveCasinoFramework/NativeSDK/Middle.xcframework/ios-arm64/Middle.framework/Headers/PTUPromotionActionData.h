//
//  PTUPromotionActionData.h
//  Middle
//
//  Created by Oleksandr Khylyk on 11/23/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUPromotionActionData : NSObject

@property (copy, nonatomic, readonly) NSString *urlString;
@property (copy, nonatomic, readonly) NSString *appScheme;
@property (copy, nonatomic, readonly) NSString *gameId;
@property (copy, nonatomic, readonly) NSString *moreInfoURLString;

- (instancetype)initWithURLString:(NSString *)urlString appScheme:(NSString *)appScheme gameId:(NSString *)gameId moreInfoURLString:(NSString *)moreInfoURLString;

@end
