//
//  PTUGameMessagesProtocol.h
//  Middle
//
//  Created by vlki on 10/1/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class PTUCasinoErrorResponseSessionTimeLimit; // TODO: delete this class

typedef void(^PTUGameMessagesCompletion)(void);
typedef void(^PTUSessionTimeLimitDialogCompletion)(BOOL extend, NSUInteger extensionPeriod);

@protocol PTUGameMessagesProtocol <NSObject>

@required

- (void)showGameMessage:(NSString * _Nonnull)message
             completion:(PTUGameMessagesCompletion _Nullable)completion;

- (void)showGameMessage:(NSString * _Nonnull)message
          positiveTitle:(NSString * _Nullable)positiveTitle
     positiveCompletion:(PTUGameMessagesCompletion _Nullable)positiveCompletion
          negativeTitle:(NSString * _Nullable)negativeTitle
     negativeCompletion:(PTUGameMessagesCompletion _Nullable)negativeCompletion;

- (void)showSessionTimeLimitDialogWithMessage:(NSString * _Nonnull)message
                                         info:(PTUCasinoErrorResponseSessionTimeLimit * _Nonnull)sessionTimeLimitInfo
                                   completion:(PTUSessionTimeLimitDialogCompletion _Nonnull)completion;

@end

NS_ASSUME_NONNULL_END
