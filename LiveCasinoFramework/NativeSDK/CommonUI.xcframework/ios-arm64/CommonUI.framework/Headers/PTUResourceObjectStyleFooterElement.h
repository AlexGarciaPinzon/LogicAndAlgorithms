//
//  PTUResourceObjectStyleFooterElement.h
//  resources
//
//  Created by hlpa on 6/24/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUResourceObjectStyle.h"
#import "PTUResourceObjectStyleButtonWithAction.h"

@interface PTUResourceObjectStyleFooterElement : PTUResourceObjectStyle<PTUStyleFooterElement *, PTUStyleFooterElement *>

@property (strong, nonatomic, readonly, nullable) PTUResourceObjectStyleButtonWithAction *buttonResource;

- (instancetype _Nullable)initWithContent:(PTUStyleFooterElement * const _Nonnull)content
                           buttonResource:(PTUResourceObjectStyleButtonWithAction * _Nullable)buttonResource NS_DESIGNATED_INITIALIZER;

@end
