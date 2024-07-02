//
//  PTUSlider.h
//  styles
//
//  Created by hlpa on 6/11/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PTUStylesStyling.h"

@class PTUStyleSlider;

@interface PTUSlider<TypeStyle: PTUStyleSlider *> : UISlider <PTUStylesStyling>

- (void)applyStyle:(TypeStyle)style;

@end
