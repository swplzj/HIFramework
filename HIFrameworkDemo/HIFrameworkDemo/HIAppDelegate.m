//
//  HIAppDelegate.m
//  HIFrameworkDemo
//
//  Created by li.zhenjie on 15-1-11.
//  Copyright (c) 2015年 swplzj. All rights reserved.
//

#import "HIAppDelegate.h"

@implementation HIAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    
    [self loadSwizzle];
    
    [self testSwizzle];
    
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)loadSwizzle
{
    [NSObject swizzle];
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

#pragma mark - test

- (void)testSwizzle
{
    NSArray * testArray = @[];
    NSLog(@"测试普通数组__NSArrayI = %@越界:",testArray);
    NSLog(@"%@",[testArray objectAtIndex:0]);
    
    
    NSMutableArray * testArrayM = [NSMutableArray arrayWithCapacity:0];
    NSLog(@"测试可变数组__NSArrayM = %@越界:",testArrayM);
    NSLog(@"%@",testArrayM[0]);
    NSLog(@"测试可变数组__NSArrayM = %@移除对象越界:",testArrayM);
    [testArrayM removeObjectAtIndex:0];
    NSLog(@"测试可变数组__NSArrayM = %@插入空对象:",testArrayM);
    [testArrayM insertObject:nil atIndex:0];
    NSLog(@"测试可变数组__NSArrayM = %@添加空对象:",testArrayM);
    [testArrayM addObject:nil];
    
    NSMutableDictionary * testDictM = [NSMutableDictionary dictionaryWithCapacity:0];
    NSLog(@"测试可变字典__NSDictionaryM = %@插入空数据:",testArrayM);
    [testDictM setObject:nil forKey:@"a"];
    NSLog(@"测试可变字典__NSDictionaryM = %@移除空数据:",testArrayM);
    [testDictM removeObjectForKey:@"b"];
    
    
    UIView * view = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 10, 10)];
    [view addSubview:view ];
    [view addSubview:testDictM];
    
}


@end
