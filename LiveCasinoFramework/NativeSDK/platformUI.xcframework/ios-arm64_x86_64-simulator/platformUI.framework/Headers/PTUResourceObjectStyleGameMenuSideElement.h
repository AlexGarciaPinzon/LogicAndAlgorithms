//
//  PTUResourceObjectStyleGameMenuSideElement.h
//  resources
//
//  Created by hlpa on 6/25/19.
//  Copyright © 2019 playtech. All rights reserved.
//

@interface PTUResourceObjectStyleGameMenuSideElement : PTUResourceObjectStyle<PTUStyleGameUIMenuSideElement *, PTUStyleGameUIMenuSideElement *>

@property (strong, nonatomic, readonly, nonnull) PTUResourceObjectStyleImageView *nonSelectedImageViewResource;
@property (strong, nonatomic, readonly, nonnull) PTUResourceObjectStyleImageView *selectedImageViewResource;

- (instancetype _Nonnull)initWithContent:(PTUStyleGameUIMenuSideElement * const _Nonnull)content
nonSelectedImageViewResource:(PTUResourceObjectStyleImageView * _Nonnull)nonSelectedImageViewResource
selectedImageViewResource:(PTUResourceObjectStyleImageView * _Nullable)selectedImageViewResource NS_DESIGNATED_INITIALIZER;

@end
