//
//  PTUResourceObjectStyleImageView.h
//  resources
//
//  Created by hlpa on 6/26/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUResourceObjectStyle.h"
#import "PTUStylesExtended.h"

@interface PTUResourceObjectStyleImageView : PTUResourceObjectStyle<PTUStyleImageView *, PTUStyleImageView *>

@property (strong, nonatomic, readonly, nonnull) PTUResourceObjectImage *normalImageResource;
@property (strong, nonatomic, readonly, nonnull) PTUResourceObjectImage *landscapeImageResource;

- (instancetype _Nullable)initWithContent:(PTUStyleImageView * const _Nonnull)content
normalImageResource:(PTUResourceObjectImage * _Nonnull)normalImageResource
landscapeImageResource:(PTUResourceObjectImage * _Nullable)landscapeImageResource NS_DESIGNATED_INITIALIZER;

@end
