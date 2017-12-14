//
//  AppDelegate.h
//  CloudAPP
//
//  Created by BiuKia on 17/12/11.
//  Copyright © 2017年 YEEPAY. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

