//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UMSocialSinaWeibo;

@protocol UMSocialSinaWeiboDelegate <NSObject>

@optional
- (void)sinaweibo:(UMSocialSinaWeibo *)arg1 accessTokenInvalidOrExpired:(NSError *)arg2;
- (void)sinaweibo:(UMSocialSinaWeibo *)arg1 logInDidFailWithError:(NSError *)arg2;
- (void)sinaweiboLogInDidCancel:(UMSocialSinaWeibo *)arg1;
- (void)sinaweiboDidLogOut:(UMSocialSinaWeibo *)arg1;
- (void)sinaweiboDidLogIn:(UMSocialSinaWeibo *)arg1;
@end
