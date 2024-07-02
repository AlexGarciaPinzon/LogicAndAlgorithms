//
//  NSAttributedString+Extension.h
//  Lobby
//
//  Created by ihha on 8/31/17.
//  Copyright © 2017 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSAttributedString (PTUExtention)

+ (NSAttributedString *)convertHTMLLinksToAncorsWithLinksFromString:(NSString *)string textAlignment:(NSTextAlignment) textAlignment;
+ (NSString *)stripHTMLTags:(NSString *)string;

@end
