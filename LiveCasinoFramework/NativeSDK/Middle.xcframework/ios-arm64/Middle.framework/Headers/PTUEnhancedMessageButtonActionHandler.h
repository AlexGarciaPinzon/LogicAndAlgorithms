//
//  PTUEnhancedMessageButtonActionHandler.h
//  Middle
//
//  Created by Roman Novakov on 10/29/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTUGameInfo.h"
@class PTUEnhancedMessageButtonAction;

/// It's protocol of object which implemnts logic of enhanced message action buttons.
/// In current realization Platfrom is responsible for handling this actions.
@protocol PTUEnhancedMessageButtonActionHandler <NSObject>
- (void)enhancedMessageButtonAction:(nonnull PTUEnhancedMessageButtonAction *)buttonAction openAnotherGameWithGameCode:(nonnull NSString *)gameCode;
- (void)enhancedMessageButtonAction:(nonnull PTUEnhancedMessageButtonAction *)buttonAction openURL:(nonnull NSURL *)url;
- (void)enhancedMessageButtonAction:(nonnull PTUEnhancedMessageButtonAction *)buttonAction openDepositWithCloseGame:(BOOL)shouldCloseGame;
@end
