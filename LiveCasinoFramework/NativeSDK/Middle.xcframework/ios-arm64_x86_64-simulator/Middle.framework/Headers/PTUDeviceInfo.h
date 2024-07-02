//
//  PTUDeviceInfo.h
//  Middle
//
//  Created by yudu on 9/23/16.
//  Copyright © 2016 Playtech. All rights reserved.
//

@import Foundation;

typedef NS_ENUM(NSUInteger, PTUDeviceType)
{
    PTUDeviceTypeSimulator32 = 0,
    PTUDeviceTypeSimulator64,
    PTUDeviceTypeIPhone,
    PTUDeviceTypeIPad,
    PTUDeviceTypeIPod,
    PTUDeviceTypeUnknown
};

typedef NS_ENUM(NSUInteger, PTUDeviceMake)
{
    PTUDeviceMakeSimulator32,
    PTUDeviceMakeSimulator64,
    
    PTUDeviceMakeIPhone1,
    PTUDeviceMakeIPhone3G,
    PTUDeviceMakeIPhone3GS,
    PTUDeviceMakeIPhone4,
    PTUDeviceMakeIPhone4S,
    PTUDeviceMakeIPhone5,
    PTUDeviceMakeIPhone5C,
    PTUDeviceMakeIPhone5S,
    PTUDeviceMakeIPhone6Plus,
    PTUDeviceMakeIPhone6,
    PTUDeviceMakeIPhone6S,
    PTUDeviceMakeIPhone6SPlus,
    PTUDeviceMakeIPhoneSE,
    PTUDeviceMakeIPhone7,
    PTUDeviceMakeIPhone7Plus,
    PTUDeviceMakeIPhone8,
    PTUDeviceMakeIPhone8Plus,
    PTUDeviceMakeIPhoneX,
    PTUDeviceMakeIPhoneXR,
    PTUDeviceMakeIPhoneXS,
    PTUDeviceMakeIPhoneXSMax,
    PTUDeviceMakeIPhone11,
    PTUDeviceMakeIphone11Pro,
    PTUDeviceMakeIphone11ProMax,
    PTUDeviceMakeIphoneSE2,
    PTUDeviceMakeIphone12Mini,
    PTUDeviceMakeIphone12,
    PTUDeviceMakeIphone12Pro,
    PTUDeviceMakeIphone12ProMax,

    PTUDeviceMakeIPad1,
    PTUDeviceMakeIPad2,
    PTUDeviceMakeIPadMini,
    PTUDeviceMakeIPad3,
    PTUDeviceMakeIPad4,
    PTUDeviceMakeIPadAir,
    PTUDeviceMakeIPadMini2,
    PTUDeviceMakeIPadMini3,
    PTUDeviceMakeIPadMini4,
    PTUDeviceMakeIPadAir2,
    PTUDeviceMakeIPadPro_12_9,
    PTUDeviceMakeIPadPro_9_7,
    PTUDeviceMakeIPad5,
    PTUDeviceMakeIPadPro2_12_9,
    PTUDeviceMakeIPadPro_10_5,

    PTUDeviceMakeIPodTouch1,
    PTUDeviceMakeIPodTouch2,
    PTUDeviceMakeIPodTouch3,
    PTUDeviceMakeIPodTouch4,
    PTUDeviceMakeIPodTouch6,
    
    PTUDeviceMakeUnknown
};

typedef NS_ENUM(NSUInteger, PTUDeviceModel)
{
    PTUDeviceModelSimulator32 = 0,
    PTUDeviceModelSimulator64,
    
    PTUDeviceModelIPhone1_1,
    PTUDeviceModelIPhone1_2_3G,
    PTUDeviceModelIPhone2_1_3GS,
    PTUDeviceModelIPhone3_1_4_GSM,
    PTUDeviceModelIPhone3_3_4_CDMA_Verizon_Sprint,
    PTUDeviceModelIPhone4_1_4S,
    PTUDeviceModelIPhone5_1_5_A1428_ATnT_Canada,
    PTUDeviceModelIPhone5_2_5_A1429,
    PTUDeviceModelIPhone5_3_5C_A1456_A1532_GSM,
    PTUDeviceModelIPhone5_4_5C_A1507_A1516_A1526China_A1529_Global,
    PTUDeviceModelIPhone6_1_5S_A1433_A1533_GSM,
    PTUDeviceModelIPhone6_2_5S_A1457_A1518_A1528China_A1530_Global,
    PTUDeviceModelIPhone7_1_6Plus,
    PTUDeviceModelIPhone7_2_6,
    PTUDeviceModelIPhone8_1_6S,
    PTUDeviceModelIPhone8_2_6SPlus,
    PTUDeviceModelIPhone8_4_SE,
    PTUDeviceModelIPhone9_1_7_CDMA,
    PTUDeviceModelIPhone9_2_7Plus_CDMA,
    PTUDeviceModelIPhone9_3_7_GSM,
    PTUDeviceModelIPhone9_4_7Plus_GSM,
    PTUDeviceModelIPhone10_1_8_CDMA,
    PTUDeviceModelIPhone10_2_8Plus_CDMA,
    PTUDeviceModelIPhone10_3_X_CDMA,
    PTUDeviceModelIPhone10_4_8_GSM,
    PTUDeviceModelIPhone10_5_8Plus_GSM,
    PTUDeviceModelIPhone10_6_X_GSM,
    PTUDeviceModelIPhone11_2_XS_A1920_A2097_A2098_A2100,
    PTUDeviceModelIPhone11_4_XSMax_A2104,
    PTUDeviceModelIPhone11_6_XSMax_A1921_A2101_A2102,
    PTUDeviceModelIPhone11_8_XR_A1984_A2105_A2106_A2108,
    PTUDeviceModelIphone12_1_11_A2111_A2221_A2223,
    PTUDeviceModelIphone12_3_11Pro_A2160_A2215_A2217,
    PTUDeviceModelIphone12_5_11ProMax_A2161_A2218_A2220,
    PTUDeviceModelIphone12_8_SE2_A2275_A2296_A2298,
    PTUDeviceModelIphone13_1_12Mini_A2176_A2398_A2399_A2400,
    PTUDeviceModelIphone13_2_12_A2172_A2402_A2403_A2404,
    PTUDeviceModelIphone13_3_12Pro_A2341_A2406_A2407_A2408,
    PTUDeviceModelIphone13_4_12ProMax_A2342_A2410_A2411_A2412,

    PTUDeviceModelIPad1_1_A1219_A1337_Wifi_MaybeCellular,
    PTUDeviceModelIPad2_1_A1395_Wifi,
    PTUDeviceModelIPad2_2_A1396_GSM,
    PTUDeviceModelIPad2_3_A1397_3G,
    PTUDeviceModelIPad2_4_A1395_Wifi,
    PTUDeviceModelIPad2_5_A1432_Mini_Wifi,
    PTUDeviceModelIPad2_6_A1454_Mini_Wifi_Cellular,
    PTUDeviceModelIPad2_7_A1455_Mini_Wifi_Cellular,
    PTUDeviceModelIPad3_1_A1416_Wifi,
    PTUDeviceModelIPad3_2_A1403_Wifi_Cellular,
    PTUDeviceModelIPad3_3_A1430_Wifi_Cellular,
    PTUDeviceModelIPad3_4_A1458_4_Wifi,
    PTUDeviceModelIPad3_5_A1459_4_Wifi_Cellular,
    PTUDeviceModelIPad3_6_A1460_4_Wifi_Cellular,
    PTUDeviceModelIPad4_1_A1474_Air_Wifi,
    PTUDeviceModelIPad4_2_A1475_Air_Wifi_Cellular,
    PTUDeviceModelIPad4_3_A1476_Air_Wifi_Cellular,
    PTUDeviceModelIPad4_4_A1489_Mini2_Wifi,
    PTUDeviceModelIPad4_5_A1490_Mini2_Wifi_Cellular,
    PTUDeviceModelIPad4_6_A1491_Mini2_Wifi_Cellular,
    PTUDeviceModelIPad4_7_A1599_Mini3_Wifi,
    PTUDeviceModelIPad4_8_A1600_Mini3_Wifi_Cellular,
    PTUDeviceModelIPad4_9_A1601_Mini3_Wifi_Cellular,
    PTUDeviceModelIPad5_1_A1538_Mini4_Wifi,
    PTUDeviceModelIPad5_2_A1550_Mini4_Wifi_Cellular,
    PTUDeviceModelIPad5_3_A1566_Air2_Wifi,
    PTUDeviceModelIPad5_4_A1567_Air2_Wifi_Cellular,
    PTUDeviceModelIPad6_3_A1673_Pro_12_9_Wifi,
    PTUDeviceModelIPad6_4_A1674_A1675_Pro_12_9_Wifi_Cellular,
    PTUDeviceModelIPad6_7_A1584_Pro_9_7_Wifi,
    PTUDeviceModelIPad6_8_A1652_Pro_9_7_Wifi_Cellular,
    PTUDeviceModelIPad6_11_A1822_5_Wifi,
    PTUDeviceModelIPad6_12_A1823_5_Wifi_Cellular,
    PTUDeviceModelIPad7_1_A1670_Pro_2_12_9_Wifi,
    PTUDeviceModelIPad7_2_A1671_A1821_Pro_2_12_9_Wifi_Cellular,
    PTUDeviceModelIPad7_3_A1701_Pro_10_5_Wifi,
    PTUDeviceModelIPad7_4_A1709_Pro_10_5_Wifi_Cellular,

    PTUDeviceModelIPodTouch1_1_1,
    PTUDeviceModelIPodTouch2_1_2,
    PTUDeviceModelIPodTouch3_1_3,
    PTUDeviceModelIPodTouch4_1_4,
    PTUDeviceModelIPodTouch7_1_6,

    PTUDeviceModelUnknown
};

typedef struct
{
    BOOL known;
    uint64_t width;
    uint64_t height;
}
PTUDevicePixelSize;

typedef struct
{
    BOOL known;
    double width;
    double height;
}
PTUDeviceScreenScale;

/**
 Describe device information that required
 */
@interface PTUDeviceInfo : NSObject

@property (strong, nonatomic, nonnull, readonly) NSString *platformCode;
@property (assign, nonatomic, readonly) PTUDeviceModel model;
@property (assign, nonatomic, readonly) PTUDeviceType type;
@property (assign, nonatomic, readonly) PTUDeviceMake make;
@property (assign, nonatomic, readonly) PTUDeviceMake submake; // when make defines simulator submake defines simulated make
@property (assign, nonatomic, readonly) PTUDeviceScreenScale logicalToPhysicalScale;
@property (assign, nonatomic, readonly) BOOL defaultScreenOrientationIsPortrait;
@property (strong, nonatomic, readonly) NSString *vendorIdentifier;
@property (strong, nonatomic, readonly) NSString *deviceFamily;
@property (strong, nonatomic, readonly) NSString *osVersion;

- (NSString *)stringForType:(PTUDeviceType)type;
- (NSString *)envSDKParams;

#ifdef DEBUG
- (void)print;
#endif

@end
