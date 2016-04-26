//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface SelectAddressCell : UITableViewCell
{
    UIView *_addressView;
    UILabel *_nameLabel;
    UILabel *_areaLabel;
    UILabel *_roadLabel;
    UILabel *_mobileLabel;
    UIImageView *_selectedTag;
    UIButton *_editAddressButton;
    UILabel *_addressTypeLabel;
    UIButton *_addressTypeButton;
    UIImageView *_defaultTag;
}

@property(nonatomic) __weak UIImageView *defaultTag; // @synthesize defaultTag=_defaultTag;
@property(nonatomic) __weak UIButton *addressTypeButton; // @synthesize addressTypeButton=_addressTypeButton;
@property(nonatomic) __weak UILabel *addressTypeLabel; // @synthesize addressTypeLabel=_addressTypeLabel;
@property(nonatomic) __weak UIButton *editAddressButton; // @synthesize editAddressButton=_editAddressButton;
@property(nonatomic) __weak UIImageView *selectedTag; // @synthesize selectedTag=_selectedTag;
@property(nonatomic) __weak UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(nonatomic) __weak UILabel *roadLabel; // @synthesize roadLabel=_roadLabel;
@property(nonatomic) __weak UILabel *areaLabel; // @synthesize areaLabel=_areaLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIView *addressView; // @synthesize addressView=_addressView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

