//
//  PTURegulationManager.h
//  Middle
//
//  Created by yudu on 9/23/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PTULicenseeRegulation.h"

@class PTURegulationManager;
@class PTUGameLoadingScreenInfo;
@class PTUCountryRegulationController;
@class PTUITRegulationResponse;
@class PTUGeocodeManager;
@class PTUReachabilityManager;
@protocol PTUSDKKitEventsProtocol;

extern NSString * const PTURegulationManagerGameLoadingScreenConfigPath;

@protocol PTURegulationManagerObserverProtocol <NSObject>

- (void)regulationManagerLicenseeRegulationCheckedSuccess:(PTURegulationManager *)manager;
- (void)regulationManager:(PTURegulationManager *)manager violationOfRegulation:(NSError *)violationError;

@end

@protocol PTURegulationControllerCountryRegulationObserverProtocol <NSObject>

@required

- (void)countryRegulationDidUpdateDueToServerResponse:(PTUCountryRegulationController *)countryRegulation;

@end

@protocol PTURegulationManagerObservableProtocol <NSObject>

- (void)addRegulationManagerObserver:(id<PTURegulationManagerObserverProtocol>)observer;
- (void)removeRegulationManagerObserver:(id<PTURegulationManagerObserverProtocol>)observer;

@end

@protocol PTUCountryCodeObserverProtocol
@required

- (void)countryCodeDidChangeTo:(NSString *)isoCountryCode;

@end

@interface PTURegulationManager : NSObject <PTURegulationManagerObservableProtocol>

- (instancetype)initWithGeocodeManager:(PTUGeocodeManager *)geocodeManager
                   reachabilityManager:(PTUReachabilityManager *)reachabilityManager
                  sdkKitEventsAnalyzer:(id<PTUSDKKitEventsProtocol>) sdkKitEventsAnalyzer;

@property (strong, nonatomic, readonly) __kindof PTUCountryRegulationController *countryRegulationController;

@property (strong, nonatomic, readonly, nonnull) PTULicenseeRegulation *licenseeRegulation;

- (void)updateWithLicenseeRegulation:(PTULicenseeRegulation *)licenseeRegulation;

- (void)checkLicenseeRegulation;

- (BOOL)isBlockedGame:(NSString *)gameIdentifier;
- (BOOL)isCorrectPasswordForBlockedGame:(NSString *)password;

- (BOOL)isWatermarkForGameLoadingScreenVisible;

- (void)updateWithGameLoadingScreenInfo:(PTUGameLoadingScreenInfo *)screenInfo;

- (void)updateCountryRegulationWithITResponse:(PTUITRegulationResponse *)itResponse;

- (void)addCountryRegulationObserver:(id<PTURegulationControllerCountryRegulationObserverProtocol>)observer;
- (void)removeCountryRegulationObserver:(id<PTURegulationControllerCountryRegulationObserverProtocol>)observer;

- (void)addCountryCodeObserver:(id<PTUCountryCodeObserverProtocol>)observer;
- (void)removeCountryCodeObserver:(id<PTUCountryCodeObserverProtocol>)observer;

@end
