//
//  PTUBrokenGamesManager.h
//  Middle
//
//  Created by vlki on 12/5/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTUResourceGames.h"

@class PTULicenseeBrokenGamesInfo;
@class PTUBrokenGamesResponse;
@class PTUCoreNetworkController;
@class PTUMiddleLayerController;

typedef void(^PTUBrokenGamesManagerResponseCompletion)(NSError * _Nullable error);

@interface PTUBrokenGamesManager : NSObject

- (instancetype _Nonnull)new NS_UNAVAILABLE;
- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (instancetype _Nullable)initWithLicenseeInfo:(PTULicenseeBrokenGamesInfo * _Nonnull)licenseeInfo
                         coreNetworkController:(PTUCoreNetworkController * _Nonnull)coreNetworkController
                         middleLayerController:(PTUMiddleLayerController * _Nonnull)middleLayerController;

- (void)fetchBrokenGamesWithCompletion:(PTUBrokenGamesManagerResponseCompletion _Nullable)completion;

- (NSArray<NSString *> * _Nullable)popOutstandingBrokenGameIDsAgainstGameWithResource:(PTUResourceGame * _Nullable)gameResource;

@end
