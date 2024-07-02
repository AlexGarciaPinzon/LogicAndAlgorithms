//
//  PTUGamesDownloadManager.h
//  Middle
//
//  Created by Oleksandr Khylyk on 12/5/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTUDownloadManager.h"
#import "PTUDownloadFileRequest.h"
#import "PTUDownloadFileResponse.h"
#import "PTUDownloadFileHeaderResponse.h"

@class PTUGameDownloadOperation;
@class PTUDownloadManager;
@class PTUGameInfo;

typedef void(^PTUGamesDownloadManagerStartBlock)();
typedef void(^PTUGamesDownloadManagerGetHeadersCallBackBlock)(NSArray<PTUDownloadFileRequest *> *fileRequests);
typedef void(^PTUGamesDownloadManagerGetHeadersCompletionBlock)(NSArray<PTUDownloadFileHeaderResponse *> *responses, PTUGamesDownloadManagerGetHeadersCallBackBlock callBackBlock);
typedef void(^PTUGamesDownloadManagerGetDownloadSizeCompletionBlock)(unsigned long long downloadSize);
typedef void(^PTUGamesDownloadManagerLoadGameDataCompletionBlock)(NSError *error, NSData *data);

@interface PTUGamesDownloadManager : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithDownloadManager:(PTUDownloadManager *)downloadManager NS_DESIGNATED_INITIALIZER;

-      (void)downloadGame:(PTUGameInfo *)game
             fileRequests:(NSArray<PTUDownloadFileRequest *> *)fileRequests
               startBlock:(PTUGamesDownloadManagerStartBlock)startBlock
getHeadersCompletionBlock:(PTUGamesDownloadManagerGetHeadersCompletionBlock)getHeadersCompletionBlock
            progressBlock:(PTUDownloadFileProgressBlock)progressBlock
          completionBlock:(PTUDownloadBunchFilesCompletionBlock)completionBlock;

- (void)slipstreamSubsequentOperationForChildOperation:(PTUGameDownloadOperation *)parentOperation
                                             withBlock:(void (^)(void))childBlock;
- (void)getDownloadSizeForFileRequests:(NSArray<PTUDownloadFileRequest *> *)fileRequests completionBlock:(PTUGamesDownloadManagerGetDownloadSizeCompletionBlock)completionBlock;
- (void)loadGameDataWithURL:(NSURL *)url completionBlock:(PTUGamesDownloadManagerLoadGameDataCompletionBlock)completionBlock;

- (void)cancelDownloadGame:(PTUGameInfo *)game;
- (NSArray <PTUGameInfo *> *)downloadingGames;

@end
