//
//  PTUTextField.h
//  styles
//
//  Created by hlpa on 4/30/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PTUStylesStyling.h"

@class PTUStyleTextField;

@interface PTUTextField<TypeStyle: PTUStyleTextField *> : UITextField <PTUStylesStyling>

@property (assign, nonatomic) IBInspectable CGFloat textLeftPadding;
@property (assign, nonatomic) IBInspectable CGFloat textRightPadding;

- (void)applyStyle:(TypeStyle)style;

@end
