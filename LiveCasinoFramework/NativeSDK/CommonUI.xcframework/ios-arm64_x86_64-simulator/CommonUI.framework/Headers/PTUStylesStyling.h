//
//  PTUStylesStyling.h
//  styles
//
//  Created by hlpa on 4/26/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PTUStylesStyling
@required

+ (void)applyStyle:(id _Nullable)style to:(id _Nonnull)view;
- (void)applyStyle:(id _Nullable)style;

@end

@protocol PTUResourceStyling
@required

- (void)setResource:(id _Nullable)resource;

@end
