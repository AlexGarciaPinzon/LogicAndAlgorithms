//
//  PTULicenseeRegulationBuilder.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/22/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTURemoteObjectBuilderProtocol.h"
#import "PTULicenseeRegulation.h"

@interface PTULicenseeRegulationBuilder : NSObject<PTURemoteObjectBuilderProtocol>

+ (PTULicenseeRegulationType)regulationTypeForString:(NSString *)regulationTypeString;

@end
