//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "TencentLoginDelegate.h"
#import "TencentSessionDelegate.h"
#import "UITextFieldDelegate.h"
#import "WBHttpRequestDelegate.h"
#import "WXApiDelegate.h"
#import "WeiboSDKDelegate.h"

@class NSArray, NSString, NSTimer, SKView, TencentOAuth, UIButton, UIImageView, UITextField, UIView;

@interface SignInViewController : FDBaseViewController <TencentSessionDelegate, TencentLoginDelegate, WeiboSDKDelegate, WBHttpRequestDelegate, UITextFieldDelegate, WXApiDelegate>
{
    TencentOAuth *tencentOAuth;
    NSArray *permissions;
    SKView *_mSKView;
    NSArray *imagesArray;
    int count;
    NSString *strTitle;
    NSString *strPass;
    UITextField *_usernameTextField;
    UIView *_border2;
    UIView *_border3;
    UIView *_unionLoginView;
    UIImageView *_backgroundImage;
    UITextField *_passwordTextField;
    UIView *_busyBackgroundViewNavi;
    UIImageView *_busyImageView;
    UIButton *_registerButton;
    NSTimer *_changeTimer;
    NSString *_username;
    NSString *_password;
    SEL _result;
    NSString *_openId;
}

@property(retain) NSString *openId; // @synthesize openId=_openId;
@property(nonatomic) SEL result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSTimer *changeTimer; // @synthesize changeTimer=_changeTimer;
@property(nonatomic) __weak UIButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) UIImageView *busyImageView; // @synthesize busyImageView=_busyImageView;
@property(retain, nonatomic) UIView *busyBackgroundViewNavi; // @synthesize busyBackgroundViewNavi=_busyBackgroundViewNavi;
@property(nonatomic) __weak UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) __weak UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) __weak UIView *unionLoginView; // @synthesize unionLoginView=_unionLoginView;
@property(nonatomic) __weak UIView *border3; // @synthesize border3=_border3;
@property(nonatomic) __weak UIView *border2; // @synthesize border2=_border2;
@property(retain, nonatomic) UITextField *usernameTextField; // @synthesize usernameTextField=_usernameTextField;
@property(retain) NSString *strPass; // @synthesize strPass;
@property(retain) NSString *strTitle; // @synthesize strTitle;
- (void).cxx_destruct;
- (id)creatFruitNodes;
- (void)initFruitScene;
- (void)dealloc;
- (id)getUserMobileInput;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)getAlipayUserInfo:(id)arg1 openId:(id)arg2;
- (void)alipaySignInCallBack:(_Bool)arg1 accessToken:(id)arg2 openId:(id)arg3;
- (void)onAlipayAuthCallback:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)onAlipaySignInPressed:(id)arg1;
- (void)doAlipayAuth:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)prepareAlipayAuthWithSuccess:(CDUnknownBlockType)arg1;
- (void)getWeixinUserInfo:(id)arg1 access_token:(id)arg2;
- (void)requestOpenIdBasedOnWeixinCode:(id)arg1;
- (void)getOpenIdFromWeixin:(id)arg1 errorCode:(int)arg2;
- (void)onWeixinSignInPressed:(id)arg1;
- (void)tencentDidLogout;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)getUserInfoResponse:(id)arg1;
- (void)tencentDidLogin;
- (void)initilizeQQAuthorize;
- (void)onQQSignInPressed:(id)arg1;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)getWBUserInfo:(id)arg1 openID:(id)arg2;
- (void)didReceiveWeiboResponse:(id)arg1;
- (void)didReceiveWeiboRequest:(id)arg1;
- (void)onWeiboSignInPressed:(id)arg1;
- (void)oAuthSignin:(id)arg1 nickName:(id)arg2 userPhoto:(id)arg3 channel:(id)arg4;
- (id)getSignInChannel;
- (void)onRegisterPressed:(id)arg1;
- (void)onForgetPasswordPressed:(id)arg1;
- (void)userLogin;
- (_Bool)checkInputRequirement;
- (void)onSignInPress:(id)arg1;
- (void)initialActivityIndicator;
- (void)showHideBusyIndicator:(_Bool)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)hideKeyBoard;
- (void)onViewPressed:(id)arg1;
- (void)goBack;
- (void)onBackPressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

