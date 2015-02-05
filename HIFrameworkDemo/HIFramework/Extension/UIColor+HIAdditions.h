//
//  UIColor+HIAdditions.h
//  HIFrameworkDemo
//
//  Created by li.zhenjie on 15-2-5.
//  Copyright (c) 2015年 swplzj. All rights reserved.
//

#import <UIKit/UIKit.h>

#define RGB(__r, __g, __b) [UIColor colorWithRed:(__r / 255.0) green:(__g / 255.0) blue:(__b / 255.0) alpha:1]
#define RGBA(__r, __g, __b, __a) [UIColor colorWithRed:(__r / 255.0) green:(__g / 255.0) blue:(__b / 255.0) alpha:__a]
#define HEX(__color) [UIColor colorWithHEX:(__color)]

@interface UIColor (HIAdditions)

@property (nonatomic, readonly) CGFloat red;        // value from 0.0 to 1.0.
@property (nonatomic, readonly) CGFloat green;      // value from 0.0 to 1.0.
@property (nonatomic, readonly) CGFloat blue;       // value from 0.0 to 1.0.
@property (nonatomic, readonly) CGFloat alpha;      // value from 0.0 to 1.0.

/**
 *  Creates and returns a color object using the specified color description.
 *
 *  @param color color description, e.g. @"white" or @"#fff" or @"rgb(255, 255, 255)" or @"rgba(255, 255, 255, 0.9)"
 *
 *  @return The color object. The color information represented by this object is in the device RGB colorspace.
 */
+ (UIColor *)colorWithString:(NSString *)color;

/**
 *  Creates and returns a color object using the specified HEX color.
 *
 *  @param hex hex description of the color, e.g. @"#fff" or @"#ddcfe1"
 *
 *  @return The color object. The color information represented by this object is in the device RGB colorspace.
 */
+ (UIColor *)colorWithHEX:(NSString *)hex;

/**
 *  Creates and returns a color object using the specified color name.
 *
 *  @param colorName the name of the color, e.g. @"orangered"
 *
 *  @return The color object. The color information represented by this object is in the device RGB colorspace.
 */
+ (UIColor *)colorWithName:(NSString *)colorName;

/**
 *  Creates and returns a color object using the specified RGB values.
 *
 *  @param rgb the rgb description of the color, e.g. @"rgb(255, 255, 255)"
 *
 *  @return The color object. The color information represented by this object is in the device RGB colorspace.
 */
+ (UIColor *)colorWithRGB:(NSString *)rgb;

/**
 *  Creates and returns a color object using the specified opacity and RGBA values.
 *
 *  @param rgba the rgba description of the color, e.g. @"rgba(255, 255, 255, 0.8)"
 *
 *  @return The color object. The color information represented by this object is in the device RGB colorspace.
 */
+ (UIColor *)colorWithRGBA:(NSString *)rgba;

@end
