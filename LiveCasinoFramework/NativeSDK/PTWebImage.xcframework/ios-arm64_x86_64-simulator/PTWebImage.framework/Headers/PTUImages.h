//
//  PTUImages.h
//  PTWebImage
//
//  Created by hlpa on 08.08.18.
//  Copyright © 2018 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^PTUImagesLoadCompletion)(UIImage * _Nullable image, NSError * _Nullable error);

@interface PTUImages : NSObject

+ (instancetype _Nullable)defaultImages;

- (void)loadWithData:(NSData * _Nonnull)data scale:(CGFloat)scale decompress:(BOOL)decompress completion:(PTUImagesLoadCompletion _Nonnull)completion;

- (void)sync_loadWithData:(NSData * _Nonnull)data scale:(CGFloat)scale decompress:(BOOL)decompress completion:(PTUImagesLoadCompletion _Nonnull)completion;

@end
