//
//  PTUITGameModeResponse.h
//  Middle
//
//  Created by Oleksandr Khylyk on 12/10/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import "PTUCommonResponse.h"

/*
 * This message is received only in case of broken game. Server already set its mode to one in message.
 * Thus no need of additional actions - only set mode in model.
 */

typedef NS_ENUM(NSInteger, PTUITGameMode) {
    PTUITGameModeNoMode = -1,
    PTUITGameModeRealMoney = 0,
    PTUITGameModeBonus = 1
};

@interface PTUITGameModeResponse : PTUCommonResponse

- (PTUITGameMode)mode;

@end
