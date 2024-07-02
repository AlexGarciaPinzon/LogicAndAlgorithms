//
//  PTUEnhancedMessageError.h
//  Middle
//
//  Created by hlpa on 02.09.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PTUEnhancedMessageError : NSObject

+ (instancetype _Nullable)accumulated:(NSArray<PTUEnhancedMessageError *> * _Nullable)errors;

+ (instancetype _Nonnull)buttonMissingAction;
+ (instancetype _Nonnull)gameMissing:(NSString *)gameCode;
+ (instancetype _Nonnull)missingCashierURLTemplate;
+ (instancetype _Nonnull)failedToLoadResources;

@property (assign, nonatomic, readonly) BOOL someButtonsMissingActions;
@property (strong, nonatomic, readonly, nonnull) NSArray<NSString *> *missingGameCodes;
@property (assign, nonatomic, readonly) BOOL missingCashierURLTemplate;
@property (assign, nonatomic, readonly) BOOL failedToLoadResources;

@end

NS_ASSUME_NONNULL_END
