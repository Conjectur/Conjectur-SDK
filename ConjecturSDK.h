//
//  ConjecturSDK.h
//  ConjecturSDK
//
//  Created by Random Bares on 9/2/13.
//  Copyright (c) 2013 Random Bares. All rights reserved.
//


// Generated!
#define kCampaignToken      @"conjecturExample"
#define kApiKey             @"812893689126831"
#define kAppID              @"9817286312"
#define kAppName            @"ConjecturSDK"
#define kAppVersion         [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]
#define kBundleID           [[NSBundle mainBundle] bundleIdentifier]





@interface ConjecturSDK : NSObject

+ (BOOL)trackLaunch;
+ (BOOL)trackUnlock:(NSURL*)url;

@end
