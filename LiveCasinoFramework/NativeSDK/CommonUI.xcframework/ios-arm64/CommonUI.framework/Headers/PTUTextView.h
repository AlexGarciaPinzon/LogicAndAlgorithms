//
//  PTUTextView.h
//  styles
//
//  Created by hlpa on 4/30/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PTUStylesStyling.h"

@class PTUStyleTextView;

@interface PTUTextView<TypeStyle: PTUStyleTextView *> : UITextView <PTUStylesStyling>

- (void)applyStyle:(TypeStyle)style;

@end
