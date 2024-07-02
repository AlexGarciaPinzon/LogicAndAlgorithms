//
//  NSThread+PTURunOnMain.h
//  Middle
//
//  Created by hlpa on 18/1/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSThread (PTURunOnMain)

+ (void)ptuRunOnMainThreadSync:(void (^)(void))block;
+ (void)ptuRunOnMainThreadAsync:(void (^)(void))block;
+ (void)ptuRunOnMainThreadFastest:(void (^)(void))block;

@end
