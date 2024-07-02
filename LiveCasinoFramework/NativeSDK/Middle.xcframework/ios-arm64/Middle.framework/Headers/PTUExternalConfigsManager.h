//
//  PTUExternalConfigsManager.h
//  Middle
//
//  Created by dmgo on 11/1/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PTUExternalConfigsState)
{
    PTUExternalConfigsStateInitial,
    PTUExternalConfigsStateLoggedOut,
    PTUExternalConfigsStateLoggedIn
};

@class PTUMiddleLayerController;

@protocol PTUExternalConfigsManagerDelegate <NSObject>

- (void)externalConfigsDidLoadSuccess;
- (void)externalConfigsDidReceiveAppUpdate;
- (void)externalConfigsDidLoadError:(NSString *)errorText;

@end

@interface PTUExternalConfigsManager : NSObject

@property (nonatomic, assign, readonly) PTUExternalConfigsState state;

+ (instancetype)managerWithMiddleLayerController:(PTUMiddleLayerController *)middleLayerController;

- (void)loadConfigsWithDelegate:(id <PTUExternalConfigsManagerDelegate>)delegate;

@end
