//
//  PTUResourceUpdate.h
//  resources
//
//  Created by hlpa on 19.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUResourceUpdate<ContentType> : NSObject

+ (instancetype _Nullable)from:(NSArray<ContentType> * const _Nonnull)from
                            to:(NSArray<ContentType> * const _Nonnull)to;
+ (instancetype _Nullable)updateFromAvailability:(BOOL const)from
                                  toAvailability:(BOOL const)to
                                       ofContent:(ContentType const _Nonnull)content;

@property (strong, nonatomic, readonly, nonnull) NSArray<ContentType> *fromContents;
@property (strong, nonatomic, readonly, nonnull) NSArray<ContentType> *toContents;
@property (strong, nonatomic, readonly, nonnull) NSArray<ContentType> *removedContents;
@property (strong, nonatomic, readonly, nonnull) NSArray<ContentType> *addedContents;

@property (assign, nonatomic, readonly) BOOL hasAnyChanges;

@end
