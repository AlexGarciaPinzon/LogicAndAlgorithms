//
//  NSDateFormatter+PTUExtension.h
//  Middle
//
//  Created by Oleksandr Khylyk on 10/10/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDateFormatter (PTUExtension)

// yyyy-MM-dd'T'HH:mm:ss.SSSZZZZ
+ (instancetype)isoDateFormatter;

// yyyy-MM-dd HH:mm:ss.SSS
+ (instancetype)imsDateFormatter;

// Format: yyyy-MM-dd
+ (instancetype)isoShortDateFormatter;

// Format: HH:mm
+ (instancetype)ptuTime24DateFormatter; // ptuHHMMDateFormatter

// Used on lastLogin
+ (instancetype)ptuDateTimeTimeZoneFormatter;

// Format: dd-MM-yyyy
+ (instancetype)ptuDayMonthYearFormatter;

// Format: dd/MM/yyyy
+ (instancetype)ptuDayMonthYearSlashFormatter;

// yyyy-MM-dd HH:mm:ss
+ (instancetype)serverTimeDateFormatter;

// HH:mm:ss
+ (instancetype)loginTimeDateFormatter;

@end
