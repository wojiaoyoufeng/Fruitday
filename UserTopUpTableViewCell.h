//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface UserTopUpTableViewCell : UITableViewCell
{
    CDUnknownBlockType _go2ChargeBlock;
    UILabel *_commodityName;
    UIButton *_onlineGiftBtn;
    UIImageView *_onlineGiftImage;
    UILabel *_gg_nameLable;
    UILabel *_priceLabel;
    UILabel *_money_uptoLabel;
    UIView *_greenView;
    NSLayoutConstraint *_commodityNameHeightConstraint;
    UILabel *_expiredLabel;
}

@property(nonatomic) __weak UILabel *expiredLabel; // @synthesize expiredLabel=_expiredLabel;
@property(nonatomic) __weak NSLayoutConstraint *commodityNameHeightConstraint; // @synthesize commodityNameHeightConstraint=_commodityNameHeightConstraint;
@property(nonatomic) __weak UIView *greenView; // @synthesize greenView=_greenView;
@property(nonatomic) __weak UILabel *money_uptoLabel; // @synthesize money_uptoLabel=_money_uptoLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *gg_nameLable; // @synthesize gg_nameLable=_gg_nameLable;
@property(nonatomic) __weak UIImageView *onlineGiftImage; // @synthesize onlineGiftImage=_onlineGiftImage;
@property(nonatomic) __weak UIButton *onlineGiftBtn; // @synthesize onlineGiftBtn=_onlineGiftBtn;
@property(nonatomic) __weak UILabel *commodityName; // @synthesize commodityName=_commodityName;
@property(copy, nonatomic) CDUnknownBlockType go2ChargeBlock; // @synthesize go2ChargeBlock=_go2ChargeBlock;
- (void).cxx_destruct;
- (void)go2ChargeAction:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

