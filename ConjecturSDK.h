//
//  ConjecturSDK.h
//  ConjecturSDK
//
//  Created by Random Bares on 9/2/13.
//  Copyright (c) 2013 Random Bares. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ConjecturSDK : NSObject

+ (BOOL)trackLaunch;
+ (BOOL)trackLaunch:(NSString*) custom;
+ (BOOL)trackUnlock:(NSURL*)url withApplication:(UIApplication*)application;
+ (BOOL)trackIp:(NSURL*)url;
+ (void)startBackgroundTask:(UIApplication*) application;
+ (void)endBackgroundTask;

@end
