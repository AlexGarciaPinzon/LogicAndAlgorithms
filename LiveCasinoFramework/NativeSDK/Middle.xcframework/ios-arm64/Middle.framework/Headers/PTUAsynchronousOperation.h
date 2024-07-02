//
//  PTUAsynchronousOperation.h
//  Middle
//
//  Created by Oleksandr Khylyk on 9/20/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTUAsynchronousOperation : NSOperation

/**
 * @brief Completes the operation.
 * @discussion You must call this method when operation should be finished.
 * @note Call super method in your subclass method implementation
 */
- (void)done;

@end
