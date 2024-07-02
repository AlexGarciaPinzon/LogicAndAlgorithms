//
//  PTUStyleResourceRegulationPanelSegment.h
//  CommonUI
//
//  Created by rono on 28.04.2020.
//  Copyright © 2020 playtech. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CommonUI;

NS_ASSUME_NONNULL_BEGIN

@interface PTUStyleResourceRegulationPanelSegment : PTUResourceObjectStyle<PTUStyleRegulationPanelSegment *, id>

@property (strong, nonatomic, readonly, nonnull) PTUStyleRegulationPanelSegment *content;
@property (strong, nonatomic, readonly, nullable) PTUResourceObjectStyleImageView *imageViewStyleResource;

- (instancetype)initWithContent:(PTUStyleRegulationPanelSegment * const _Nonnull)content
imageViewStyleResource:(PTUResourceObjectStyleImageView * const _Nullable)imageViewStyleResource NS_DESIGNATED_INITIALIZER;

- (PTUStyleRegulationPanelSegment * _Nonnull)content;

@end

NS_ASSUME_NONNULL_END

