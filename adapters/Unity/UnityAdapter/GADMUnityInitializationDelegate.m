//
//  GADMUnityInitializationDelegate.m
//  AdMob-TestApp-Local
//
//  Created by Kavya Katooru on 6/25/20.
//  Copyright © 2020 Unity Ads. All rights reserved.
//

#import "GADMUnityInitializationDelegate.h"
#import "GADUnityError.h"
#import "GADMAdapterUnityUtils.h"

@interface GADMUnityInitializationDelegate ()<UnityAdsInitializationDelegate>

@end

@implementation GADMUnityInitializationDelegate

-(nonnull instancetype)initWithCompletionHandler:(GADMediationAdapterSetUpCompletionBlock)completionHandler {
    self = [super init];
    if (self) {
        initCompletionBlock = completionHandler;
    }
    return self;
}

// UnityAdsInitialization Delegate methods
- (void)initializationComplete {
    NSLog(@"Unity Ads initialized successfully");
    initCompletionBlock(nil);
}

- (void)initializationFailed:(UnityAdsInitializationError)error withMessage:(nonnull NSString *)message {
    NSError *err = GADMAdapterUnityErrorWithCodeAndDescription(GADMAdapterUnityErrorAdInitializationFailure, message);
    initCompletionBlock(err);
}

@end
