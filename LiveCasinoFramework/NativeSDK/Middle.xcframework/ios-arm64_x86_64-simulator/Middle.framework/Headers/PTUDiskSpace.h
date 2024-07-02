//
//  PTUDiskSpace.h
//  Middle
//
//  Created by Oleksandr Khylyk on 10/31/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUDiskSpace : NSObject

/**
	Method for checking free space on disk before saving big bunch of data or files
	@returns Available space on disk in bytes
 */
+ (int64_t)freeSpaceWithReserve;

+ (uint64_t)totalDiskspace;

+ (uint64_t)freeDiskspace;

@end
