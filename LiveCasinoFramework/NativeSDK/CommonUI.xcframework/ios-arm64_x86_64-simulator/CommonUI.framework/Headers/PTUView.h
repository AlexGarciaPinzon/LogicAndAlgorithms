//
//  PTUView.h
//  styles
//
//  Created by hlpa on 4/26/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PTUStylesStyling.h"

@class PTUStyleView;

@interface PTUView<TypeStyle: PTUStyleView *> : UIView <PTUStylesStyling>

- (void)applyStyle:(TypeStyle)style;

- (void)setCornerRadius:(CGFloat)cornerRadius;

@end
