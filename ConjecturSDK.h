//
//  ConjecturSDK.h
//  ConjecturSDK
//
//  Created by Random Bares on 9/2/13.
//  Copyright (c) 2013 Random Bares. All rights reserved.
//

@interface ConjecturSDK : NSObject

+ (BOOL)trackLaunch;
+ (BOOL)trackLaunch:(NSString*) custom;
+ (BOOL)trackUnlock:(NSURL*)url;

@end
