
//#import "WhisperingApp.h"
//
//@implementation WhisperingApp
//
//@synthesize window = _window;
//
//- (void) applicationDidFinishLaunching:(UIApplication*)application
//{
//	_window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
//	
//}
//
//- (void) applicationWillTerminate:(UIApplication *)application
//{
//    
//}
//
//- (void) applicationWillResignActive:(UIApplication *)application
//{
//    
//}
//
//- (void) applicationDidBecomeActive:(UIApplication *)application
//{
//    
//}
//
//- (void) applicationDidEnterBackground:(UIApplication *)application
//{
//    
//}
//
//- (void) applicationWillEnterForeground:(UIApplication *)application
//{
//    
//}
//
//- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application
//{
//	
//}
//
//-(void) applicationSignificantTimeChange:(UIApplication *)application
//{
//	
//}
//
//- (void) dealloc
//{
//    [_window release];
//    [super dealloc];
//}
//
//@end

#include "Whispering.h"
#include "WRT.h"
using namespace Whispering;

int main(int argc, char *argv[]) {
//	NSAutoreleasePool *pool = [NSAutoreleasePool new];
//	UIApplicationMain(argc, argv, nil, @"WhisperingApp");
//	[pool release];
	
	WRT *wrt = new WRT();
	WRETAIN(wrt);
	WRETAIN(wrt);
	WRETAIN(wrt);
	Wlog("%d", wrt->GetRefCount());
	WRELEASE(wrt);
	WRELEASE(wrt);
	Wlog("%d", wrt->GetRefCount());
	WRELEASE(wrt);
	WRELEASE(wrt);
	
	
	return 0;
}
