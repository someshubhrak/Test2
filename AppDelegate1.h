//
//  AppDelegate.h
//  BGBApp
//
//  Created by MobileCOE-iMac8 on 01/03/13.
//  Copyright (c) 2013 BGBApp. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong,nonatomic) UINavigationController *mainNavigationController;

@property (strong, nonatomic) ViewController *viewController;
-(void) moveToRootView;
// new changed for branching hello
@end
