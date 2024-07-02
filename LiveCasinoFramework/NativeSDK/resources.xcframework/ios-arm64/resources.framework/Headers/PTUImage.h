//
//  PTUImage.h
//  resources
//
//  Created by hlpa on 23.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

#import <UIKit/UIKit.h>

/// Image object containing image fetch info and wrapping loaded UIImage
@interface PTUImage : NSObject

/// fetch source url
@property (nonatomic, strong, readonly, nonnull) NSURL *url;

/// after fetching image will be resized respecting destination size to provide best performance
/// @note use CGSizeZero to disable image resizing
@property (nonatomic, assign, readonly) CGSize destinationSize;

/// after fetching image will be resized respecting content mode to provide best performance
/// @note content mode is ignored when destinationSize is zero
@property (nonatomic, assign, readonly) UIViewContentMode destinationContentMode;

/// returns fetched UIImage instance or nil
@property (atomic, strong, nullable, readonly) UIImage *image;

+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)init;

/// returns initialized PTUImage instance
- (instancetype _Nonnull)initWithURL:(NSURL * _Nonnull)url;
- (nonnull instancetype)initWithURL:(NSURL * _Nonnull)url destinationSize:(CGSize)size destinationContentMode:(UIViewContentMode)contentMode NS_DESIGNATED_INITIALIZER;

@end
