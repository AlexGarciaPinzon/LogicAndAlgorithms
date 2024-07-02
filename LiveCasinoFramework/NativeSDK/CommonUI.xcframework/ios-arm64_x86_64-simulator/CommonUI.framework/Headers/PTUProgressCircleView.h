//
//  PTUProgressCircleView.h
//  Lobby
//
//  Created by hlpa on 13.07.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PTUStyleLoadingPercent;

@interface PTUProgressCircleView : UIView

- (void)setProgress:(CGFloat)progress;
- (void)setStyle:(PTUStyleLoadingPercent *)style;

@end
