//
//  PTUSwitch.h
//  styles
//
//  Created by hlpa on 6/11/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PTUStylesStyling.h"

@class PTUStyleSwitch;

@interface PTUSwitch<TypeStyle: PTUStyleSwitch *> : UIControl <PTUStylesStyling>

@property (assign, nonatomic, getter=isOn) BOOL on;
- (void)setOn:(BOOL)on animated:(BOOL)animated;

- (void)applyStyle:(TypeStyle)style;

@end
