//
//  PTUFilterObject.h
//  resources
//
//  Created by hlpa on 21.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUFilter.h"

@interface PTUFilterObject<TypeContent> : PTUFilter<TypeContent>

- (BOOL const)filterObject:(TypeContent const _Nonnull)content;

@end
