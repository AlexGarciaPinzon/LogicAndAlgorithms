//
//  WKWebViewConfiguration+PTUExtension.h
//  Middle
//
//  Created by Daniil Mazepin on 3/16/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

@import WebKit;

@interface WKWebViewConfiguration (PTUExtension)

+ (BOOL)isProccessPoolAlreadyLoaded;
+ (instancetype)ptuWKWebViewConfiguration;
+ (instancetype)ptuWKWebViewConfiguration:(BOOL)hasSharedPool;

@end
