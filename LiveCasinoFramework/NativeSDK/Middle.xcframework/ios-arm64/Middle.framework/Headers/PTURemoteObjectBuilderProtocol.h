//
//  PTUConfigBuilderProtocol.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/22/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PTURemoteObjectBuilderProtocol <NSObject>

- (id)createObjectFromDictionary:(NSDictionary *)dictionary error:(NSError **)error;

@end
