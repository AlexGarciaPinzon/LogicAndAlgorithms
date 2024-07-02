//
//  PTUResourceArray+Accessors.h
//  resources
//
//  Created by hlpa on 13.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResourceArray.h"

@interface PTUResourceArray<TypeContent> ()

- (TypeContent const _Nullable)firstContentPassingTest:(PTUResourceArrayEnumarationBlockTest _Nonnull)test;
- (BOOL const)containsAllOfContents:(NSArray<TypeContent> * const _Nonnull)contents;
- (NSArray<TypeContent> * const _Nullable)contentsPassingTest:(PTUResourceArrayEnumarationBlockTest _Nonnull)test;

@end
