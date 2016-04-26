//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextViewDelegate.h"
#import "UMImageViewDelegate.h"
#import "UMSGridViewItemClickedDelegate.h"

@class NSString, NSTimer, UIButton, UIImageView, UILabel, UIPopoverController, UIProgressView, UITextView, UIView, UMImageView, UMSocialControllerService, UMSocialFriendViewController, UMSocialUrlResource;

@interface UMShareEditViewController : UIViewController <UMSGridViewItemClickedDelegate, UMImageViewDelegate, UIAlertViewDelegate, UIActionSheetDelegate, UITextViewDelegate>
{
    UITextView *textView;
    UIView *toolBarView;
    UIImageView *toolViewBackgroundImage;
    UIButton *atButton;
    UILabel *countLabel;
    UIButton *changeAccountButton;
    UIImageView *changeAccountBackgroundView;
    UIView *changeAccountView;
    UIButton *followButton;
    UILabel *followLabel;
    UIProgressView *_progressView;
    float timerDuration;
    NSTimer *_progressTimer;
    UIImageView *_shareImageButton;
    UIButton *_deleteImageButton;
    UMSocialFriendViewController *_friendListViewController;
    UIPopoverController *_friendPopController;
    UMImageView *_profileImageView;
    UILabel *snsNameLabel;
    id <UMSocialUIDelegate> _socialUIDelegate;
    float _keyboardHeight;
    UMSocialControllerService *_socialControllerService;
    UMSocialUrlResource *_urlResource;
    id <UMShareEditControllerDelegate> _shareDelegate;
}

@property(nonatomic) id <UMShareEditControllerDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
@property(nonatomic) UMSocialUrlResource *urlResource; // @synthesize urlResource=_urlResource;
@property(retain, nonatomic) UMSocialControllerService *socialControllerService; // @synthesize socialControllerService=_socialControllerService;
@property(retain, nonatomic) UIImageView *shareImageButton; // @synthesize shareImageButton=_shareImageButton;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView;
@property(nonatomic) id <UMSocialUIDelegate> socialUIDelegate; // @synthesize socialUIDelegate=_socialUIDelegate;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)itemClicked:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)showFriendList;
- (void)addFollow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateProgress:(id)arg1;
- (void)postSnsContent;
- (void)pressSend;
- (_Bool)checkAndAlert;
- (void)updateCountLabel;
- (id)URLDecodedString:(id)arg1;
- (void)selectImage;
- (void)selectUrlResource;
- (void)oauthToSns;
- (void)changeAccount;
- (void)addUserInfo;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)readyForAppear;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

