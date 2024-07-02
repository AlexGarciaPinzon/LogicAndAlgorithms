//
//  PTUDownloadFileHeaderResponse.h
//  Middle
//
//  Created by Oleksandr Khylyk on 10/3/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const PTUDownloadFileHeaderContentLengthKey;
extern NSString * const PTUDownloadFileLastModifiedLengthKey;

@interface PTUDownloadFileHeaderResponse : NSObject

@property (strong, nonatomic) NSURL *url;
@property (strong, nonatomic) NSError *error;
@property (strong, nonatomic) NSDictionary *header;

@end
