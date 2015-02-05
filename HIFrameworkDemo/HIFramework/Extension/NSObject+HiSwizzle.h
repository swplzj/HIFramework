//
//  NSObject+HiSwizzle.h
//  HIFrameworkDemo
//
//  Created by llbt_LLC on 15-2-5.
//  Copyright (c) 2015年 swplzj. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 *  1、 Method Swizzling 原理:
 *    在Objective-C中调用一个方法，其实是向一个对象发送消息，查找消息的唯一依据是selector的名字。
 *    利用Objective-C的动态特性，可以实现在运行时偷换selector对应的方法实现，达到给方法挂钩的目的。
 *    method_exchangeImplementations  来交换2个方法中的IMP，
 *    class_replaceMethod             来修改类，
 *    method_setImplementation        直接设置某个方法的IMP
 *  2、 作用:
 *    此类别用于重新指向类的部分方法，来处理错误提示。你也可以添加创意。欢迎修改。
 */

#pragma mark -

@interface UIView (HiSwizzle)
@end

#pragma mark -

@interface NSArray (HiSwizzle)
@end

#pragma mark -

@interface NSDictionary (HiSwizzle)
@end

#pragma mark -

@interface NSMutableDictionary (HiSwizzle)
@end

#pragma mark -
@interface NSObject (HiSwizzle)
+ (BOOL)swizzle;
@end
