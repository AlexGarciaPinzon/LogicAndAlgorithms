//
//  PTUOpenWebPageProtocol.h
//  Middle
//
//  Created by vlki on 9/30/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PTUOpenWebPageProtocol <NSObject>

@required

- (void)openWebPageWithTemplate:(NSString * _Nonnull)urlTemplate title:(NSString * _Nullable)title;
- (void)openWebPage:(NSURL * _Nonnull)url inBrowser:(BOOL)inBrowser shouldInterruptGameRound:(BOOL)shouldInterruptGameRound;
- (void)openWebPage:(NSURL * _Nonnull)url inBrowser:(BOOL)inBrowser;
- (void)openWebPage:(NSURL * _Nonnull)url;
- (void)openWebPage:(NSURL * _Nonnull)url title:(NSString * _Nullable)title;

@end

NS_ASSUME_NONNULL_END
