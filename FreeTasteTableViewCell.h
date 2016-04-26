//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface FreeTasteTableViewCell : UITableViewCell
{
    UIImageView *_productImage;
    UILabel *_activityName;
    UILabel *_activityStatus;
    UIButton *_submitReportButton;
    UIButton *_termButton;
}

@property(nonatomic) __weak UIButton *termButton; // @synthesize termButton=_termButton;
@property(nonatomic) __weak UIButton *submitReportButton; // @synthesize submitReportButton=_submitReportButton;
@property(nonatomic) __weak UILabel *activityStatus; // @synthesize activityStatus=_activityStatus;
@property(nonatomic) __weak UILabel *activityName; // @synthesize activityName=_activityName;
@property(nonatomic) __weak UIImageView *productImage; // @synthesize productImage=_productImage;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
