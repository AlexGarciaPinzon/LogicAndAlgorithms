//
//  PTUResourceObject+Retriever.h
//  resources
//
//  Created by hlpa on 26.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import "PTUResourceObject.h"

@interface PTUResourceObject<TypeContent> ()

- (void)retriever_setOperation:(id)retrievingOperation;
- (id)retriever_clearOperation;
- (void)retriever_contentReadinessDidUpdate:(BOOL)contentReady;

@end
