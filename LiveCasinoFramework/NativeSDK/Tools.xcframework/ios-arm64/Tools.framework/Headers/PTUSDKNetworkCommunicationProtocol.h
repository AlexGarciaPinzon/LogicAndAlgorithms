//
//  PTUSDKNetworkCommunicationProtocol.h
//  Tools
//
//  Created by artemsy on 16.11.2022.
//  Copyright © 2022 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PTUSDKNetworkCommunicationProtocol <NSObject>

/// The function is request additional parameters from SDK lobby CoreProtocol.
- (NSArray<NSURLQueryItem *>* _Nullable)pasRequstAdditionalParametersForURL:(nonnull NSString *)urlString;

@end
