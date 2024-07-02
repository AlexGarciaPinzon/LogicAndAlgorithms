//
//  PTUTextView+Styling+Private.h
//  styles
//
//  Created by hlpa on 4/30/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUTextView.h"

@interface PTUTextView<TypeStyle: PTUStyleTextView *> ()

+ (void)applyStyle:(TypeStyle)style to:(PTUTextView *)textView;

@end
