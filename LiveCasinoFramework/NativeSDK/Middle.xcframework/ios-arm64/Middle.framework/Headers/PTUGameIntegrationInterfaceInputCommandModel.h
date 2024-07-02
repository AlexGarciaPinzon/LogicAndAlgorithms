//
//  PTUGameIntegrationInterfaceInputCommandModel.h
//  Middle
//
//  Created by Dmytrii Senchyk on 15.06.2021.
//  Copyright © 2021 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUGameIntegrationInterfaceInputCommandModel : NSObject

@property (nonatomic, strong) NSString *domainMessageName;
@property (nonatomic, strong) NSDictionary *parameters;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
