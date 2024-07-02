//
//  PTUConfigInfo.h
//  Middle
//
//  Created by Oleksandr Khylyk on 12/6/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUConfigInfo : NSObject

@property (strong, nonatomic) NSError *error;
@property (strong, nonatomic) NSURL *url;
@property (strong, nonatomic) NSDictionary *configDictionary;

@end
