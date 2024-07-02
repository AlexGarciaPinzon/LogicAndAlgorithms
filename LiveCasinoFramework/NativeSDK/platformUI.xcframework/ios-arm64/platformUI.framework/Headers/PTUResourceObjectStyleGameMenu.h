//
//  PTUResourceObjectStyleGameMenu.h
//  resources
//
//  Created by hlpa on 6/24/19.
//  Copyright © 2019 playtech. All rights reserved.
//

@class PTUResourceArrayStyleGameMenuSideContent;
@class PTUResourceObjectStyleFooter;
@class PTUResourceObjectStyleGameMenu;

@interface PTUResourceObjectStyleGameMenu : PTUResourceObjectStyle<PTUStyleGameUI *, PTUStyleGameUI *>

@property (strong, nonatomic, readonly, nonnull) PTUResourceArrayStyleGameMenuSideContent *topMenuSide;
@property (strong, nonatomic, readonly, nonnull) PTUResourceArrayStyleGameMenuSideContent *bottomMenuSide;
@property (strong, nonatomic, readonly, nullable) PTUResourceObjectStyleFooter *footer;

- (instancetype _Nullable)initWithContent:(PTUStyleGameUI * const _Nonnull)content
topMenuSide:(PTUResourceArrayStyleGameMenuSideContent * const _Nonnull)topMenuSide
bottomMenuSide:(PTUResourceArrayStyleGameMenuSideContent * const _Nonnull)bottomMenuSide
footer:(PTUResourceObjectStyleFooter * const _Nullable)footer NS_DESIGNATED_INITIALIZER;

@end
