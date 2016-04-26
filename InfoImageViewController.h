//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIImageView, UIScrollView, UIView;

@interface InfoImageViewController : FDBaseViewController <UIScrollViewDelegate>
{
    NSString *infoType;
    UIScrollView *_infoImageScrollView;
    UIImageView *_infoImageView;
    UIView *_bottomActionView;
}

@property(nonatomic) __weak UIView *bottomActionView; // @synthesize bottomActionView=_bottomActionView;
@property(nonatomic) __weak UIImageView *infoImageView; // @synthesize infoImageView=_infoImageView;
@property(nonatomic) __weak UIScrollView *infoImageScrollView; // @synthesize infoImageScrollView=_infoImageScrollView;
@property(retain) NSString *infoType; // @synthesize infoType;
- (void).cxx_destruct;
- (void)onEnterStorePressed:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)showTitleAndImage:(id)arg1 title:(id)arg2 imageHeight:(int)arg3;
- (void)loadInfoImage;
- (void)showHideBusyIndicator:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

