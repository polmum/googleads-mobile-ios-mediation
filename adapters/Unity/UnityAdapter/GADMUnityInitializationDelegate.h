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

@protocol InitCompletionDelegate <NSObject>

@optional
-(void)setInitializationComplete:(GADMediationAdapterSetUpCompletionBlock)handler;

@end

typedef void(^GADMediationAdapterSetUpCompletionBlock)(NSError *_Nullable error);


@interface GADMUnityInitializationDelegate : NSObject
@property (nonatomic, strong) GADMediationAdapterSetUpCompletionBlock _Nonnull handler;


- (id)initializeWithCompletionHandler:(GADMediationAdapterSetUpCompletionBlock)completionHandler;

@end

