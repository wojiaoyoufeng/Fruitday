//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAccelerometerDelegate.h"
#import "UMSocialUIDelegate.h"

@class NSString, UIViewController, UMSocialControllerService;

@interface UMSocialSnsService : NSObject <UMSocialUIDelegate, UIAccelerometerDelegate>
{
    UMSocialControllerService *_socialControllerService;
    UIViewController *_presentingViewController;
}

+ (void)presentSnsIconSheetView:(id)arg1 appKey:(id)arg2 shareText:(id)arg3 shareImage:(id)arg4 shareToSnsNames:(id)arg5 delegate:(id)arg6;
+ (void)presentSnsController:(id)arg1 appKey:(id)arg2 shareText:(id)arg3 shareImage:(id)arg4 shareToSnsNames:(id)arg5 delegate:(id)arg6;
+ (_Bool)handleOpenURL:(id)arg1 wxApiDelegate:(id)arg2;
+ (_Bool)handleOpenURL:(id)arg1;
+ (void)applicationDidBecomeActive;
+ (id)sharedInstance;
@property(retain, nonatomic) UMSocialControllerService *socialControllerService; // @synthesize socialControllerService=_socialControllerService;
- (void)showSnsIconSheetView:(id)arg1 appKey:(id)arg2 shareText:(id)arg3 shareImage:(id)arg4 shareToSnsStrings:(id)arg5 delegate:(id)arg6;
- (void)presentSnsController:(id)arg1 appKey:(id)arg2 shareText:(id)arg3 shareImage:(id)arg4 shareToSnsStrings:(id)arg5 delegate:(id)arg6;
- (void)setSocialDataWithController:(id)arg1 appKey:(id)arg2 shareText:(id)arg3 shareImage:(id)arg4 delegate:(id)arg5;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
