//
//  AppDelegate.h
//  LYDSpecTest
//
//  Created by 淡蓝 on 2018/3/28.
//  Copyright © 2018年 淡蓝. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

