//
//  PTUButton.h
//  styles
//
//  Created by hlpa on 4/29/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PTUStylesStyling.h"
#import "PTUResourceObjectStyleButton.h"

@interface PTUButton<TypeResource: PTUResourceObjectStyleButton *> : UIButton <PTUResourceStyling>

/// sets resource for button
/// @attention should be called from main thread
- (void)setResource:(PTUResourceObjectStyleButton *)resource;

/// Use this func to set title on button. Beacause there are several places wehere resource style does not have button titlr and we have to set it manualy.
/// String has to be localized.
- (void)setButtonTitle:(NSString *)buttonTitle;

@end
