//
//  GADMUnityInitializationDelegate.h
//  AdMob-TestApp-Local
//
//  Created by Kavya Katooru on 6/23/20.
//  Copyright © 2020 Unity Ads. All rights reserved.
//

#import <Foundation/Foundation.h>
@import GoogleMobileAds;
@import UnityAds;


typedef void(^InitCompletionHandler)(NSError *_Nullable error);


@interface GADMUnityInitializationDelegate : NSObject
@property (nonatomic, copy) InitCompletionHandler _Nonnull handler;

- (id)initializeWithCompletionHandler:(InitCompletionHandler)completionHandler;

@end

