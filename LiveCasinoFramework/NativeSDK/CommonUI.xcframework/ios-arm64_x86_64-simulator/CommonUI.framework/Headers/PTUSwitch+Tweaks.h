//
//  PTUSwitch+Tweaks.h
//  styles
//
//  Created by hlpa on 6/11/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUSwitch.h"

@interface PTUSwitch ()

@property (strong, nonatomic) IBInspectable UIColor *trackOnFillColor;
@property (strong, nonatomic) IBInspectable UIColor *trackOffFillColor;
@property (strong, nonatomic) IBInspectable UIColor *thumbOffFillColor;
@property (strong, nonatomic) IBInspectable UIColor *thumbOnFillColor;

- (CALayer *)backLayer;
- (CALayer *)thumbLayer;

@end
