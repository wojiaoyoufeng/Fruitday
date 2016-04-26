//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class FBKVOController, NSString, UIBarButtonItem, UIButton, UIImageView;

@interface FDBaseViewController : UIViewController <UIGestureRecognizerDelegate>
{
    FBKVOController *_kvoController;
    _Bool _isFirstViewDidLayoutSubviews;
    UIImageView *_loadingImageView;
    NSString *_regionId;
    NSString *_regionName;
    UIButton *_navCartButton;
    UIBarButtonItem *_cartNegativeSpacer;
}

@property(retain, nonatomic) UIBarButtonItem *cartNegativeSpacer; // @synthesize cartNegativeSpacer=_cartNegativeSpacer;
@property(retain, nonatomic) UIButton *navCartButton; // @synthesize navCartButton=_navCartButton;
@property(retain, nonatomic) NSString *regionName; // @synthesize regionName=_regionName;
@property(retain, nonatomic) NSString *regionId; // @synthesize regionId=_regionId;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
- (void).cxx_destruct;
- (void)goBack:(id)arg1;
- (void)goBackDelaySecond:(float)arg1;
- (_Bool)isSuccessful:(id)arg1 needAlert:(_Bool)arg2;
- (_Bool)isSuccessful:(id)arg1;
- (void)alertMessage:(id)arg1;
- (void)alertWithTitle:(id)arg1 message:(id)arg2 cancelText:(id)arg3 okText:(id)arg4 tag:(unsigned long long)arg5 delegate:(id)arg6;
- (void)showAlertWithMessage:(id)arg1 cancelTitle:(id)arg2 okTitle:(id)arg3 tag:(unsigned long long)arg4 delegate:(id)arg5;
- (void)setNavRightBarWithTitle:(id)arg1 withAction:(SEL)arg2;
- (void)setNavRightBarWithImageName:(id)arg1 withAction:(SEL)arg2;
- (void)setNavCartCountBadge:(long long)arg1;
- (void)goCart:(id)arg1;
- (void)setNavCartButton;
- (void)showNavigationBar;
- (void)hideNavigationBar;
- (void)setNavLeftBarWithImageName:(id)arg1 withAction:(SEL)arg2;
- (void)setNavLeftBarWithTitle:(id)arg1 withAction:(SEL)arg2;
- (void)setNavBackButtonWithAction:(SEL)arg1;
- (void)setNavBackButton;
- (void)onViewPressed:(id)arg1;
- (void)initViewTap;
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)bindViewModel;
- (void)initialActivityIndicator;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
