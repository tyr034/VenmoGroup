//
//  RootViewController.h
//  VenmoGroup
//
//  Created by fffiona on 8/9/14.
//  Copyright (c) 2014 myOwn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <FacebookSDK/FacebookSDK.h>


@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
