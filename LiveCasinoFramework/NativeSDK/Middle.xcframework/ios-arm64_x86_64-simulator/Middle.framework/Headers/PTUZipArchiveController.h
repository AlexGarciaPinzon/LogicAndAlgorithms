//
//  PTUZipArchiveController.h
//  SSZipTest
//
//  Created by yudu on 9/22/16.
//  Copyright © 2016 Yurii Dukhovnyi. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^PTUZipArchiveProgressBlock)(float progress);
typedef void(^PTUZipArchiveFinishBlock)(NSError *error, NSURL *location);

@interface PTUZipArchiveController : NSObject

- (void)unarchiveWithURL:(NSURL *)archiveURL destinationURL:(NSURL *)destinationURL progressBlock:(PTUZipArchiveProgressBlock)progressBlock finishBlock:(PTUZipArchiveFinishBlock)finishBlock;

@end
