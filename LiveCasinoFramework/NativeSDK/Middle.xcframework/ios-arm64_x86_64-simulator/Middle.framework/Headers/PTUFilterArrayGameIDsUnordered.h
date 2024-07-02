//
//  PTUFilterArrayGameIDsUnordered.h
//  Middle
//
//  Created by hlpa on 20.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

@import resources.PTUFilterArray;
#import "PTUResourceGame.h"

@interface PTUFilterArrayGameIDsUnordered<TypeContent: PTUResourceGame *>: PTUFilterArray<TypeContent>

+ (instancetype _Nullable)gameIDs:(NSArray<NSString *> * const _Nonnull)gameIDs;

@end
