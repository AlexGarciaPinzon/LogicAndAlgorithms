//
//  PTUResourceGame.h
//  Middle
//
//  Created by hlpa on 06.11.18.
//  Copyright © 2018 Playtech. All rights reserved.
//

@import resources.PTUResourceObject;
@import resources.PTUFilterObject;

@class PTUGameInfo;

@interface PTUResourceGame : PTUResourceObject<PTUGameInfo *>

+ (instancetype _Nullable)resourceWithContent:(PTUGameInfo *_Nonnull)content filter:(__kindof PTUFilterObject * const _Nullable)filter;

@end
