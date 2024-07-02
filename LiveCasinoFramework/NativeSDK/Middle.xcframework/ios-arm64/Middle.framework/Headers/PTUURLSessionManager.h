//
//  HTTPClient.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/20/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^PTULoadResourceDataCompletionBlock)(NSData *data, NSError *error);
typedef void(^PTUDownloadProgressBlock)(int64_t totalBytesWritten, int64_t totalBytesExpectedToWrite);
typedef void(^PTUDownloadCompletionBlock)(NSURL *location, NSError *error);
typedef void(^PTUHeadRequestCompletionBlock)(NSHTTPURLResponse *headerResponce, NSError *error);
typedef void(^PTULoadImageCompletionBlock)(UIImage *image, NSError *error);

@interface PTUURLSessionManager : NSObject

- (instancetype)initWithBackgroundSessionCompletionHandler:(void(^)())backgroundSessionCompletionHandler;

- (NSArray*)getPAScookies;

- (NSURLSessionDataTask *)headRequestForURL:(NSURL *)url completionBlock:(PTUHeadRequestCompletionBlock)completionBlock;

- (NSURLSessionDataTask *)loadResourceWithURL:(NSURL *)url completionBlock:(PTULoadResourceDataCompletionBlock)completionBlock;
- (NSURLSessionDataTask *)dataRequest:(NSURLRequest *)request completionBlock:(PTULoadResourceDataCompletionBlock)completionBlock;

- (NSURLSessionDownloadTask *)downloadFromURL:(NSURL *)url resumeData:(NSData *)resumeData progressBlock:(PTUDownloadProgressBlock)progressBlock completionBlock:(PTUDownloadCompletionBlock)completionBlock;

@end
