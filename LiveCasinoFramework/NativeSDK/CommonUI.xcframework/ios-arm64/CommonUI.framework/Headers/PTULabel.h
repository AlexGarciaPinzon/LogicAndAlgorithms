//
//  PTULabel.h
//  styles
//
//  Created by hlpa on 4/27/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PTUStylesStyling.h"

@class PTUStyleLabel;

@interface PTULabel<TypeStyle: PTUStyleLabel *> : UILabel <PTUStylesStyling>

- (void)applyStyle:(TypeStyle)style;

@end
