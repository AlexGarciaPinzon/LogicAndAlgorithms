//
//  PTSDKErrorProtocol.h
//  NativeSDK
//
//  Created by olbu on 8/7/19.
//  Copyright © 2019 Playtech. All rights reserved.
//

#import "PTSDKEnums.h"

#ifndef PTSDKErrorProtocol_h
#define PTSDKErrorProtocol_h

/// specifies min structure for sdk error objects
@protocol PTSDKErrorProtocol <NSObject>

/// error code in pt system (ex: PTErrorNotEnoughSpace)
@property (nonatomic, assign, readonly) PTErrorType code;

/// user friendly message (ex: 'Sorry, the action cannot be performed because you have asked to be self excluded from playing. For further information please contact support at ...')
@property (nonatomic, strong, nonnull, readonly) NSString *message;

/// indicate if message contains html content
@property (nonatomic, assign, readonly) BOOL isHtml;

@end

#endif /* PTSDKErrorProtocol_h */
