//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

@class NSLayoutConstraint, UIColor, UIImageView, UILabel, UIScrollView, UIView, UIWebView, UserRankData, XTCircleGaugeView, XTWaveView;

@interface MyLevelViewController : FDBaseViewController
{
    XTCircleGaugeView *_costMoneyCirvleView;
    XTCircleGaugeView *_costFrequencyCirvleView;
    XTWaveView *_waveView;
    UIColor *_levelTintColor;
    UIColor *_nextlevelTintColor;
    UserRankData *_userLevelData;
    UIScrollView *_mScrollView;
    UIWebView *_specWebView;
    UIImageView *_mainBgImageView;
    UIView *_levelBallBgView;
    UIView *_expCircleBgView;
    UIView *_costMoneyCircleBgView;
    UIView *_costFrequencyCircleBgView;
    UILabel *_costMoneyLabel;
    UILabel *_costFrequencyLabel;
    UILabel *_levelUpNeedMoneyLabel;
    UILabel *_levelUpNeedFrequencyLabel;
    UIImageView *_currentLevelImageView;
    UIImageView *_lastLevelImageView;
    UIImageView *_nextLevelImageView;
    NSLayoutConstraint *_expCircleBgViewHeightConstraint;
    NSLayoutConstraint *_levelBallBgViewWidthConstraint;
    NSLayoutConstraint *_levelBallBgViewHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *levelBallBgViewHeightConstraint; // @synthesize levelBallBgViewHeightConstraint=_levelBallBgViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *levelBallBgViewWidthConstraint; // @synthesize levelBallBgViewWidthConstraint=_levelBallBgViewWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *expCircleBgViewHeightConstraint; // @synthesize expCircleBgViewHeightConstraint=_expCircleBgViewHeightConstraint;
@property(nonatomic) __weak UIImageView *nextLevelImageView; // @synthesize nextLevelImageView=_nextLevelImageView;
@property(nonatomic) __weak UIImageView *lastLevelImageView; // @synthesize lastLevelImageView=_lastLevelImageView;
@property(nonatomic) __weak UIImageView *currentLevelImageView; // @synthesize currentLevelImageView=_currentLevelImageView;
@property(nonatomic) __weak UILabel *levelUpNeedFrequencyLabel; // @synthesize levelUpNeedFrequencyLabel=_levelUpNeedFrequencyLabel;
@property(nonatomic) __weak UILabel *levelUpNeedMoneyLabel; // @synthesize levelUpNeedMoneyLabel=_levelUpNeedMoneyLabel;
@property(nonatomic) __weak UILabel *costFrequencyLabel; // @synthesize costFrequencyLabel=_costFrequencyLabel;
@property(nonatomic) __weak UILabel *costMoneyLabel; // @synthesize costMoneyLabel=_costMoneyLabel;
@property(nonatomic) __weak UIView *costFrequencyCircleBgView; // @synthesize costFrequencyCircleBgView=_costFrequencyCircleBgView;
@property(nonatomic) __weak UIView *costMoneyCircleBgView; // @synthesize costMoneyCircleBgView=_costMoneyCircleBgView;
@property(nonatomic) __weak UIView *expCircleBgView; // @synthesize expCircleBgView=_expCircleBgView;
@property(nonatomic) __weak UIView *levelBallBgView; // @synthesize levelBallBgView=_levelBallBgView;
@property(nonatomic) __weak UIImageView *mainBgImageView; // @synthesize mainBgImageView=_mainBgImageView;
@property(retain, nonatomic) UIWebView *specWebView; // @synthesize specWebView=_specWebView;
@property(nonatomic) __weak UIScrollView *mScrollView; // @synthesize mScrollView=_mScrollView;
@property(retain, nonatomic) UserRankData *userLevelData; // @synthesize userLevelData=_userLevelData;
- (void).cxx_destruct;
- (void)go2LevelLogAction;
- (void)startLevelIconAnimation;
- (void)loadSpecView;
- (void)setupRefresh;
- (void)setWaveDepth:(float)arg1;
- (void)updateUI;
- (void)initUI;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

