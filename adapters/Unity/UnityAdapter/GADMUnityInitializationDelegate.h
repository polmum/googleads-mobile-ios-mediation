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

@interface GADMUnityInitializationDelegate : NSObject {
    GADMediationAdapterSetUpCompletionBlock initCompletionBlock;
}

- (id)initializeWithCompletionHandler:(GADMediationAdapterSetUpCompletionBlock *)completionHandler;

@end

