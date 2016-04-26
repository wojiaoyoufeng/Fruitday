//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CountDownView, FDCurveImageView, NSLayoutConstraint, UILabel, UIView;

@interface TodayFreshSaleCell : UITableViewCell
{
    CountDownView *_countDownView;
    UIView *_freshSaleLeftContainerView;
    UIView *_freshSaleRightContainerView;
    NSLayoutConstraint *_freshSaleLeftViewHeightConstraint;
    NSLayoutConstraint *_freshSaleRightViewHeightConstraint;
    FDCurveImageView *_freshSaleLeftImageView;
    FDCurveImageView *_freshSaleRightImageView;
    UILabel *_freshSaleLeftNameLabel;
    UILabel *_freshSaleRightNameLabel;
    UILabel *_freshSaleLeftUnitLabel;
    UILabel *_freshSaleRightUnitLabel;
    UILabel *_freshSaleLeftPriceLabel;
    UILabel *_freshSaleRightPriceLabel;
    UILabel *_freshSaleLeftOldPriceLabel;
    UILabel *_freshSaleRightOldPriceLabel;
    UIView *_leftSaleOutBgView;
    UIView *_rightSaleOutBgView;
    CDUnknownBlockType _leftClickAction;
    CDUnknownBlockType _rightClickAction;
}

@property(copy, nonatomic) CDUnknownBlockType rightClickAction; // @synthesize rightClickAction=_rightClickAction;
@property(copy, nonatomic) CDUnknownBlockType leftClickAction; // @synthesize leftClickAction=_leftClickAction;
@property(nonatomic) __weak UIView *rightSaleOutBgView; // @synthesize rightSaleOutBgView=_rightSaleOutBgView;
@property(nonatomic) __weak UIView *leftSaleOutBgView; // @synthesize leftSaleOutBgView=_leftSaleOutBgView;
@property(nonatomic) __weak UILabel *freshSaleRightOldPriceLabel; // @synthesize freshSaleRightOldPriceLabel=_freshSaleRightOldPriceLabel;
@property(nonatomic) __weak UILabel *freshSaleLeftOldPriceLabel; // @synthesize freshSaleLeftOldPriceLabel=_freshSaleLeftOldPriceLabel;
@property(nonatomic) __weak UILabel *freshSaleRightPriceLabel; // @synthesize freshSaleRightPriceLabel=_freshSaleRightPriceLabel;
@property(nonatomic) __weak UILabel *freshSaleLeftPriceLabel; // @synthesize freshSaleLeftPriceLabel=_freshSaleLeftPriceLabel;
@property(nonatomic) __weak UILabel *freshSaleRightUnitLabel; // @synthesize freshSaleRightUnitLabel=_freshSaleRightUnitLabel;
@property(nonatomic) __weak UILabel *freshSaleLeftUnitLabel; // @synthesize freshSaleLeftUnitLabel=_freshSaleLeftUnitLabel;
@property(nonatomic) __weak UILabel *freshSaleRightNameLabel; // @synthesize freshSaleRightNameLabel=_freshSaleRightNameLabel;
@property(nonatomic) __weak UILabel *freshSaleLeftNameLabel; // @synthesize freshSaleLeftNameLabel=_freshSaleLeftNameLabel;
@property(nonatomic) __weak FDCurveImageView *freshSaleRightImageView; // @synthesize freshSaleRightImageView=_freshSaleRightImageView;
@property(nonatomic) __weak FDCurveImageView *freshSaleLeftImageView; // @synthesize freshSaleLeftImageView=_freshSaleLeftImageView;
@property(nonatomic) __weak NSLayoutConstraint *freshSaleRightViewHeightConstraint; // @synthesize freshSaleRightViewHeightConstraint=_freshSaleRightViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *freshSaleLeftViewHeightConstraint; // @synthesize freshSaleLeftViewHeightConstraint=_freshSaleLeftViewHeightConstraint;
@property(nonatomic) __weak UIView *freshSaleRightContainerView; // @synthesize freshSaleRightContainerView=_freshSaleRightContainerView;
@property(nonatomic) __weak UIView *freshSaleLeftContainerView; // @synthesize freshSaleLeftContainerView=_freshSaleLeftContainerView;
@property(retain, nonatomic) CountDownView *countDownView; // @synthesize countDownView=_countDownView;
- (void).cxx_destruct;
- (void)loadTodayFreshSaleLeftData:(id)arg1 rightData:(id)arg2;
- (void)rightTapAction:(id)arg1;
- (void)leftTapAction:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

