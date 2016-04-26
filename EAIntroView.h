//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class EARestrictedScrollView, NSArray, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UIPageControl;

@interface EAIntroView : UIView <UIScrollViewDelegate>
{
    _Bool _swipeToExit;
    _Bool _tapToNext;
    _Bool _hideOffscreenPages;
    _Bool _easeOutCrossDisolves;
    _Bool _useMotionEffects;
    _Bool _showSkipButtonOnlyOnLastPage;
    _Bool _scrollingEnabled;
    UIPageControl *_pageControl;
    UIButton *_skipButton;
    id <EAIntroDelegate> _delegate;
    double _motionEffectsRelativeValue;
    UIView *_titleView;
    double _titleViewY;
    UIImage *_bgImage;
    long long _bgViewContentMode;
    double _pageControlY;
    unsigned long long _currentPageIndex;
    double _skipButtonY;
    double _skipButtonSideMargin;
    unsigned long long _skipButtonAlignment;
    EARestrictedScrollView *_scrollView;
    NSArray *_pages;
    UIImageView *_bgImageView;
    UIImageView *_pageBgBack;
    UIImageView *_pageBgFront;
    NSMutableArray *_footerConstraints;
    NSMutableArray *_titleViewConstraints;
}

@property(retain, nonatomic) NSMutableArray *titleViewConstraints; // @synthesize titleViewConstraints=_titleViewConstraints;
@property(retain, nonatomic) NSMutableArray *footerConstraints; // @synthesize footerConstraints=_footerConstraints;
@property(retain, nonatomic) UIImageView *pageBgFront; // @synthesize pageBgFront=_pageBgFront;
@property(retain, nonatomic) UIImageView *pageBgBack; // @synthesize pageBgBack=_pageBgBack;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(nonatomic) _Bool scrollingEnabled; // @synthesize scrollingEnabled=_scrollingEnabled;
@property(retain, nonatomic) EARestrictedScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool showSkipButtonOnlyOnLastPage; // @synthesize showSkipButtonOnlyOnLastPage=_showSkipButtonOnlyOnLastPage;
@property(nonatomic) unsigned long long skipButtonAlignment; // @synthesize skipButtonAlignment=_skipButtonAlignment;
@property(nonatomic) double skipButtonSideMargin; // @synthesize skipButtonSideMargin=_skipButtonSideMargin;
@property(nonatomic) double skipButtonY; // @synthesize skipButtonY=_skipButtonY;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) double pageControlY; // @synthesize pageControlY=_pageControlY;
@property(nonatomic) long long bgViewContentMode; // @synthesize bgViewContentMode=_bgViewContentMode;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(nonatomic) double titleViewY; // @synthesize titleViewY=_titleViewY;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) double motionEffectsRelativeValue; // @synthesize motionEffectsRelativeValue=_motionEffectsRelativeValue;
@property(nonatomic) _Bool useMotionEffects; // @synthesize useMotionEffects=_useMotionEffects;
@property(nonatomic) _Bool easeOutCrossDisolves; // @synthesize easeOutCrossDisolves=_easeOutCrossDisolves;
@property(nonatomic) _Bool hideOffscreenPages; // @synthesize hideOffscreenPages=_hideOffscreenPages;
@property(nonatomic) _Bool tapToNext; // @synthesize tapToNext=_tapToNext;
@property(nonatomic) _Bool swipeToExit; // @synthesize swipeToExit=_swipeToExit;
@property(nonatomic) __weak id <EAIntroDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)limitScrollingToPage:(unsigned long long)arg1;
- (void)goToNext:(id)arg1;
- (void)setCurrentPageIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)hideWithFadeOutDuration:(double)arg1;
- (void)showInView:(id)arg1 animateDuration:(double)arg2 withInitialPageIndex:(unsigned long long)arg3;
- (void)showInView:(id)arg1 animateDuration:(double)arg2;
- (void)showInView:(id)arg1;
- (void)showFullscreenWithAnimateDuration:(double)arg1 andInitialPageIndex:(unsigned long long)arg2;
- (void)showFullscreenWithAnimateDuration:(double)arg1;
- (void)showFullscreen;
- (void)removeMotionEffectsOnBg;
- (void)addMotionEffectsOnBg;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
- (void)crossDissolveForOffset:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)buildFooterView;
- (void)buildTitleView;
- (void)removeCloseViewAtXIndex:(double *)arg1;
- (void)appendCloseViewAtXIndex:(double *)arg1;
- (id)viewForPage:(id)arg1 atXIndex:(double)arg2;
- (void)buildScrollView;
- (void)buildBackgroundImage;
- (void)applyDefaultsToSkipButton;
- (void)applyDefaultsToPageControl;
@property(readonly, nonatomic) unsigned long long visiblePageIndex;
- (void)notifyDelegateWithPreviousPage:(unsigned long long)arg1 andCurrentPage:(unsigned long long)arg2;
- (void)skipIntroduction;
- (void)finishIntroductionAndRemoveSelf;
- (void)checkIndexForScrollView:(id)arg1;
- (void)showPanelAtPageControl;
- (id)bgColorForPage:(unsigned long long)arg1;
- (id)bgImageForPage:(unsigned long long)arg1;
- (id)viewForPageIndex:(unsigned long long)arg1;
- (_Bool)showTitleViewForPage:(unsigned long long)arg1;
- (double)alphaForPageIndex:(unsigned long long)arg1;
- (id)pageForIndex:(unsigned long long)arg1;
- (void)makePanelVisibleAtIndex:(unsigned long long)arg1;
- (void)applyDefaultsToBackgroundImageView:(id)arg1;
- (void)applyDefaultsToSelfDuringInitializationWithFrame:(struct CGRect)arg1 pages:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andPages:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
