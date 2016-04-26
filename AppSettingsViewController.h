//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "UIAlertViewDelegate.h"
#import "UMSocialUIDelegate.h"

@class NSString, UIView;

@interface AppSettingsViewController : FDBaseViewController <UMSocialUIDelegate, UIAlertViewDelegate>
{
    NSString *appDescription;
    NSString *appLink;
    UIView *_actionBottomView;
    UIView *_actionHeader;
}

@property(nonatomic) __weak UIView *actionHeader; // @synthesize actionHeader=_actionHeader;
@property(nonatomic) __weak UIView *actionBottomView; // @synthesize actionBottomView=_actionBottomView;
@property(retain, nonatomic) NSString *appLink; // @synthesize appLink;
@property(retain, nonatomic) NSString *appDescription; // @synthesize appDescription;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)shareAppInfo;
- (void)onLogOffPressed:(id)arg1;
- (void)alertErrorMessage:(id)arg1;
- (void)deleteUserInfo;
- (void)logoffUser;
- (void)showToastMessage;
- (void)didReceiveMemoryWarning;
- (void)showHideBusyIndicator:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

