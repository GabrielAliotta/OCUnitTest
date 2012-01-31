//
//  OCUnitTestAppDelegate.h
//  OCUnitTest
//
//  Created by Gabriel Aliotta on 1/31/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OCUnitTestViewController;

@interface OCUnitTestAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet OCUnitTestViewController *viewController;

@end
