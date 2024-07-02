//
//  Tools.h
//  Tools
//
//  Created by gp on 7/5/18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Tools.
FOUNDATION_EXPORT double ToolsVersionNumber;

//! Project version string for Tools.
FOUNDATION_EXPORT const unsigned char ToolsVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Tools/PublicHeader.h>

#import <Tools/NSThread+PTURunOnMain.h>
#import <Tools/NSObject+PTUValue.h>
#import <Tools/NSNumber+CGFloat.h>
#import <Tools/NSNumber+PTUValue.h>
#import <Tools/NSString+PTUExtension.h>
#import <Tools/NSString+PTUEncryption.h>
#import <Tools/NSStringPlaceholderInfo.h>
#import <Tools/NSDate+PTUExtensions.h>
#import <Tools/NSDateComponents+PTUExtensions.h>
#import <Tools/NSDateFormatter+PTUExtension.h>
#import <Tools/NSFileManager+PTUExtension.h>
#import <Tools/NSNumberFormatter+PTUExtension.h>
#import <Tools/NSIndexSet+PTUExtensions.h>
#import <Tools/NSDate+PTUExtensions.h>
#import <Tools/NSTimer+Extension.h>
#import <Tools/UIColor+Extension.h>
#import <Tools/CAGradientLayer+PTUExtension.h>
#import <Tools/NSAttributedString+PTUExtention.h>
#import <Tools/UIViewController+Container.h>
#import <Tools/WKWebViewConfiguration+PTUExtension.h>
#import <Tools/UIStoryboard+Extension.h>
#import <Tools/UILabel+Extension.h>
#import <Tools/UIView+Extension.h>
#import <Tools/UIImage+Extension.h>
#import <Tools/WKUserContentController+PTUExtensions.h>
#import <Tools/UISearchBar+PTUExtension.h>
#import <Tools/UITraitCollection+PTUExtensions.h>
#import <Tools/UIApplication+Extension.h>
#import <Tools/CocoaSecurity.h>
#import <Tools/NSUserDefaults+SecureAdditions.h>
#import <Tools/NSArray+PTUExtensions.h>
#import <Tools/NSArray+PTUValue.h>
#import <Tools/NSDictionary+PTUExtension.h>
#import <Tools/NSURL+PTUExtensions.h>
#import <Tools/NSURLRequest+IgnoreSSL.h>
#import <Tools/PTSDKInternalError.h>
#import <Tools/PTSDKInternalEnums.h>
#import <Tools/PTSDKExternalEnums.h>
#import <Tools/PTUSDKKitEventsConstants.h>
#import <Tools/PTUSDKKitEventsProtocol.h>
#import <Tools/PTUSDKNetworkCommunicationProtocol.h>
#import <Tools/PTULocalNotification.h>
#import <Tools/PTLogger.h>
#import <Tools/Tools-NS_OPTIONS.h>

// Debug tools
#if !Production
#import <Tools/NSUserDefaults+Debug.h>
#endif
