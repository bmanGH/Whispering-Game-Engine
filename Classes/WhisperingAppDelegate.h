//
//  WhisperingAppDelegate.h
//  Whispering
//
//  Created by jerry lin on 11/12/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WhisperingViewController;

@interface WhisperingAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    WhisperingViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet WhisperingViewController *viewController;

@end

