//
//  PTUGameIntegrationInterfaceConfig.h
//  Middle
//
//  Created by Dmytrii Senchyk on 14.06.2021.
//  Copyright © 2021 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Middle/PTUGameIntegrationInterfaceInputCommandModel.h>

@interface PTUGameIntegrationInterfaceConfig : NSObject

@property (nonatomic, strong) NSString *interfaceCode;
@property (nonatomic, strong) NSMutableDictionary<NSString *, PTUGameIntegrationInterfaceInputCommandModel *> *inputCommands;
@property (nonatomic, strong) NSDictionary *mappedOutputMessageTypeStrings;
@property (nonatomic, strong) NSDictionary *mappedOutputMessageParametersStrings;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary interfaceCode:(NSString *)interfaceCode;

@end
