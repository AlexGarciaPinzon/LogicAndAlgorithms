//
//  PTULabel+Styling+Private.h
//  styles
//
//  Created by hlpa on 4/27/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTULabel.h"

@interface PTULabel<TypeStyle: PTUStyleLabel *> ()

+ (void)applyStyle:(TypeStyle)style to:(PTULabel *)view;

@end
