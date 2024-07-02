//
//  PTWebImageManager+PTUExtensions.h
//  Lobby
//
//  Created by Daniil Mazepin on 2/3/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTWebImageManager.h"

@class PTUImageLoadingResult;

typedef void(^PTUPTWebImageCompletion)(void);
typedef void(^PTUPTWebImageErrorCompletion)(UIImage *image, NSError *error);
typedef void(^PTUPTWebImageMultiplyImagesCompletion)(NSArray<PTUImageLoadingResult *> *);

@interface PTWebImageManager (PTUExtensions)

- (void)cachedImageForURL:(NSURL *)imageURL completion:(void (^)(UIImage *image, NSError *error))completion;
- (void)sync_cachedDontDecodeImageForURL:(NSURL *)imageURL completion:(void (^)(UIImage *image, NSError *error))completion;

- (void)ptuDownloadImages:(NSArray <NSURL *> *)imagesURL
                  options:(PTWebImageOptions)options
                completed:(PTUPTWebImageMultiplyImagesCompletion)completionBlock;

- (void)clearCacheWithCompletion:(PTUPTWebImageCompletion)completion;

- (void)prefetchURLs:(NSArray<NSURL *> *)imageURLs
          completion:(PTUPTWebImageMultiplyImagesCompletion)completion;

- (void)downloadImageWithURL:(NSURL *)url
                     options:(PTWebImageOptions)options
                  completion:(PTUPTWebImageErrorCompletion)completion;

@end
