//
//  DownloadManager.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/20/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreGraphics.CGBase;
#import "number_trimming.h"
#import "PTUDiskSpace.h"
#import "PTUAsynchronousOperation.h"
#import "PTUDownloadFileRequest.h"
#import "PTUDownloadFileResponse.h"
#import "PTUDownloadFileHeaderResponse.h"
#import "NSError+PTUExtension.h"

@class PTUURLSessionManager;
@class PTUDownloadManager;
@class PTUDownloadDataResponse;
@class PTUGetHeadersOperation;

//data resources
typedef void(^PTULoadDataCompletionBlock)(PTUDownloadDataResponse *response);
typedef void(^PTULoadBunchsDataCompletionBlock)(NSArray<PTUDownloadDataResponse *> *responses);

//download files
typedef void(^PTUDownloadFileStartBlock)(PTUDownloadFileRequest *request);
typedef void(^PTUDownloadFileProgressBlock)(PTUDownloadFileRequest *request, int64_t totalBytesWritten, int64_t totalBytesExpectedToWrite);
typedef void(^PTUDownloadBunchFilesCompletionBlock)(NSArray<PTUDownloadFileResponse *> *responses);
typedef void(^PTUDownloadFileCompletionBlock)(PTUDownloadFileResponse *responses);
typedef void(^PTUDownloadFileHeaderBlock)(PTUDownloadFileHeaderResponse *response);
typedef void(^PTUDownloadBunchHeadersCompletionBlock)(NSArray<PTUDownloadFileHeaderResponse *> *responses);

@interface PTUDownloadManager : NSObject

- (instancetype)initWithURLSessioManager:(PTUURLSessionManager *)urlSessionManager;

- (void)loadDataFromURLs:(NSArray<NSURL *> *)urls
         completionBlock:(PTULoadBunchsDataCompletionBlock)completionBlock;

- (void)loadDataFromURL:(NSURL *)url
        completionBlock:(PTULoadDataCompletionBlock)completionBlock;

- (PTUGetHeadersOperation *)headersForUrls:(NSArray<NSURL *> *)urls
                           completionBlock:(PTUDownloadBunchHeadersCompletionBlock)completionBLock;

- (void)downloadFilesWithRequests:(NSArray<PTUDownloadFileRequest *> *)requests
                       startBlock:(PTUDownloadFileStartBlock)startBlock
                    progressBlock:(PTUDownloadFileProgressBlock)progressBlock
                  completionBlock:(PTUDownloadBunchFilesCompletionBlock)completionBlock;

- (void)downloadFileWithRequest:(PTUDownloadFileRequest *)request
                     startBlock:(PTUDownloadFileStartBlock)startBlock
                  progressBlock:(PTUDownloadFileProgressBlock)progressBlock
                completionBlock:(PTUDownloadFileCompletionBlock)completionBlock;

- (void)cancelDownloadForURL:(NSURL *)url;

@end
