//
//  PTODRInfo.h
//  Middle
//
//  Created by artemsy on 08.02.2022.
//  Copyright © 2022 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PTODRInfo : NSObject <NSCopying>

@property (strong, nonatomic, readonly, nullable) NSString *odrPrefix;
@property (strong, nonatomic, readonly, nullable) NSString *odrPostfix;

+ (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (instancetype _Nonnull)initWithODRPrefix:(nullable NSString *)odrPrefix
                                ODRPostfix:(nullable NSString *)odrPostfix;

@end

NS_ASSUME_NONNULL_END
