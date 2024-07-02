//
//  PTUResourceObjectStyleFooter.h
//  resources
//
//  Created by hlpa on 6/24/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUResourceObjectStyle.h"
#import "PTUResourceArrayStyleFooterContent.h"

@interface PTUResourceObjectStyleFooter : PTUResourceObjectStyle<PTUStyleFooter *, PTUStyleFooter *>

@property (strong, nonatomic, readonly, nonnull) PTUResourceArrayStyleFooterContent *footerContent;

- (instancetype _Nullable)initWithContent:(PTUStyleFooter * const _Nonnull)content
footerContent:(PTUResourceArrayStyleFooterContent * const _Nonnull)footerContent NS_DESIGNATED_INITIALIZER;

@end
