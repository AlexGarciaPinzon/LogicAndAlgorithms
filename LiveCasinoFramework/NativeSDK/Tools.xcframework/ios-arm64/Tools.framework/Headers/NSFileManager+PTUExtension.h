//
//  NSFileManager+PTUExtension.h
//  Middle
//
//  Created by Oleksandr Khylyk on 10/17/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (PTUExtension)

- (BOOL)createDirectoryTreeWithURL:(NSURL *)URL error:(NSError * __autoreleasing *)error;

/**
 Calculate size of directory (All subfolders and files are included)
 @param directoryPath full path to directory
 @param error if process wouldn't be finish, error will be initialize
 */
- (double)sizeOfDirectoryWithAllIncludedFiles:(NSString *)directoryPath error:(NSError **)error;

@end
