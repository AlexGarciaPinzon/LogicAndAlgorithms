//
//  PTUToasterMessagesProtocol.h
//  Middle
//
//  Created by vlki on 10/1/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class PTUEnhancedMessage;

@protocol PTUToasterMessagesProtocol <NSObject>

@required

- (void)showToasterMessageAsRemoteMessage:(PTUEnhancedMessage * _Nonnull)enhancedMessage;
- (void)showToasterMessageWithEnhancedMessage:(PTUEnhancedMessage * _Nonnull)enhancedMessage;

@end

NS_ASSUME_NONNULL_END
