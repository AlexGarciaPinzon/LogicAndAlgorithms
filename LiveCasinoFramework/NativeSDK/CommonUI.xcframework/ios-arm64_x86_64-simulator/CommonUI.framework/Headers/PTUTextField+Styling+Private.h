//
//  PTUButton+Styling+Private.h
//  styles
//
//  Created by hlpa on 4/30/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUTextField.h"

@interface PTUTextField<TypeStyle: PTUStyleTextField *> ()

+ (void)applyStyle:(TypeStyle)style to:(PTUTextField *)textField;

@end
