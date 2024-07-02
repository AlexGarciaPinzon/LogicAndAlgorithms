//
//  PTUDownloadDataResponse.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/30/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUDownloadDataResponse : NSObject

@property (strong, nonatomic) NSURL *url;
@property (strong, nonatomic) NSData *data;
@property (strong, nonatomic) NSError *error;

@end
