//
//  PTUWebCallbackAction.h
//  Middle
//
//  Created by dmgo on 7/24/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUURLCallbackAction : NSObject

@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *group;
@property (nonatomic, strong, readonly) NSString *actionName;
@property (nonatomic, assign, readonly) BOOL cancelsNavigation;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (BOOL)validForURLComponenets:(NSURLComponents *)components;

@end
