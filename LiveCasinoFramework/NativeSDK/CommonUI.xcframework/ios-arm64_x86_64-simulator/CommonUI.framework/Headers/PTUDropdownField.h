//
//  PTUDropdownField.h
//  Lobby
//
//  Created by hlpa on 12/4/2018.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PTUResourceObjectStyleImageView;
#import "PTUTextField.h"

@interface PTUDropdownField : PTUTextField

@property (assign, nonatomic) NSUInteger selectedIndex;

- (void)setOptions:(NSArray<NSString *> *)options;
- (void)setHideArrow:(BOOL)hide;
- (void)setArrowImageURL:(NSURL *)url;
- (void)setInactiveArrowImageURL:(NSURL *)url;
- (void)setArrowImageResource:(PTUResourceObjectStyleImageView *)resource;

@end
