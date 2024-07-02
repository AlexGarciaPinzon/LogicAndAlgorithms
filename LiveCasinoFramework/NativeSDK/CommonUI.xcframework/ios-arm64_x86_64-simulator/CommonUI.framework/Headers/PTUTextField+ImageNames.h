//
//  PTUTextField+ImageNames.h
//  styles
//
//  Created by hlpa on 4/30/19.
//  Copyright © 2019 playtech. All rights reserved.
//

#import "PTUTextField.h"

@interface PTUTextField<TypeStyle: PTUStyleTextField *> (ImageNames)

- (NSDictionary<NSNumber *, NSString *> * _Nullable const)imageNamesToLoadRequestUID:(out id _Nullable __autoreleasing * _Nonnull const)outRequestUID;
// must pass imageNamesToLoad to check against current, button's wanted images might change while old ones are loading
- (void)setImages:(NSDictionary<NSNumber *, UIImage *> * const _Nullable)images
    forRequestUID:(id const _Nullable )requestUID;

@end
