//
//  PTUImageView.h
//  styles
//
//  Created by hlpa on 4/30/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PTUStylesStyling.h"

@class PTUStyleImageView;
@class PTUResourceObjectStyleImageView;

@interface PTUImageView<TypeResource: PTUResourceObjectStyleImageView *> : UIImageView <PTUResourceStyling>

/// sets resource for image view
/// @attention should be called from main thread
- (void)setResource:(TypeResource)resource;

@end
