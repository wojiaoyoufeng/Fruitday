//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseTableViewCell.h"

@class DataForBanner, UIButton;

@interface FDBannerHomeCell : FDBaseTableViewCell
{
    DataForBanner *_dataForBanner;
    CDUnknownBlockType _clickBannerBlock;
    UIButton *_bannerButton;
}

+ (double)heightForCellInTableView:(id)arg1 rowAtIndexPath:(id)arg2 dataSource:(id)arg3;
+ (id)cellForTableView:(id)arg1;
@property(nonatomic) __weak UIButton *bannerButton; // @synthesize bannerButton=_bannerButton;
@property(copy, nonatomic) CDUnknownBlockType clickBannerBlock; // @synthesize clickBannerBlock=_clickBannerBlock;
- (void).cxx_destruct;
- (void)clickBannerAction:(id)arg1;
- (void)cellForRowsAtIndexPath:(id)arg1 dataSource:(id)arg2 target:(id)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

