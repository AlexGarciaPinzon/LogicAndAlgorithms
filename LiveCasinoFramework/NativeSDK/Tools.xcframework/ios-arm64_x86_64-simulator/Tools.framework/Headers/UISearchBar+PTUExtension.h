//
//  UISearchBar+PTUExtension.h
//  Lobby
//
//  Created by Daniil Mazepin on 12/19/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UISearchBar (PTUExtension)

- (UITextField *)ptuTextField;
- (void)ptuSetCancelButtonEnabled:(BOOL)enabled;

@end
