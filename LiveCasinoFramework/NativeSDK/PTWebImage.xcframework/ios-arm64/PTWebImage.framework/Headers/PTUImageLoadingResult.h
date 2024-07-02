//
//  PTUImageLoadingResult.h
//  PTWebImage
//
//  Created by hlpa on 14/3/2018.
//  Copyright © 2018 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUImageLoadingResult : NSObject

+ (instancetype)empty;
+ (instancetype)loadingResultWithImage:(UIImage *)image error:(NSError *)error;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@property (strong, nonatomic, readonly) UIImage *image;
@property (strong, nonatomic, readonly) NSError *error;

@end
