//
//  NSDictionary+PTUExtension.h
//  Tools
//
//  Created by hlpa on 23.07.18.
//  Copyright © 2018 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (PTUExtension)

- (NSMutableDictionary *)mutableStructureCopyDeep;
- (NSString *)stringData;

@end
