//
//  PTUDownloadFileRequest.h
//  Middle
//
//  Created by AlexanderKhilik on 10/2/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUDownloadFileRequest : NSObject

+ (instancetype)requestWithURL:(NSURL *)url resumeData:(NSData *)resumeData destinationFileURL:(NSURL *)destinationFileURL;

@property (strong, nonatomic) NSURL *url;
@property (strong, nonatomic) NSData *resumeData;
@property (strong, nonatomic) NSURL *destinationFileURL;

@end
