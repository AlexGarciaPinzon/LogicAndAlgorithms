//
//  NSURLRequest+IgnoreSSL
//  Lobby
//
//  Created by Dimas GOrevoy on 08/02/18.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef DEBUG

@interface NSURLRequest (IgnoreSSL)

+ (BOOL)allowsAnyHTTPSCertificateForHost:(NSString *)host;

@end

#endif
