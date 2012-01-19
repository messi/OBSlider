//
//  OBSliderDemoAppDelegate.h
//  OBSliderDemo
//
//  Created by Ole Begemann on 03.01.11.
//  Copyright 2011 Ole Begemann. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OBSliderDemoViewController;

@interface AppController : NSObject <UIApplicationDelegate> 
{
    UIWindow *window;
    OBSliderDemoViewController *viewController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet OBSliderDemoViewController *viewController;

@end

