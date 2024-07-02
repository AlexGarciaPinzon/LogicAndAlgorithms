//
//  CAGradientLayer+PTUExtension.h
//  Tools
//
//  Created by Artem Syrytsia on 14.02.2022.
//  Copyright © 2022 playtech. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface CAGradientLayer (PTUExtension)

- (void)setGradientWithColors:(NSArray<UIColor *> *)colors
                    locations:(NSArray<NSNumber *> *)locations
                   startPoint:(CGPoint)startPoint
                     endPoint:(CGPoint)endPoint;
@end

NS_ASSUME_NONNULL_END
