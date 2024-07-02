//
//  PTUDownloadFileResponse.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/30/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PTUDownloadFileRequest;

@interface PTUDownloadFileResponse : NSObject

@property (strong, nonatomic) PTUDownloadFileRequest *request;
@property (strong, nonatomic) NSError *error;
@property (strong, nonatomic) NSData *resumeData;
@property (strong, nonatomic) NSURL *fileLocation;
@property (assign, nonatomic) BOOL canceled;

@end
