//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface GiftsHistoryCellTableViewCell : UITableViewCell
{
    CDUnknownBlockType _add2CartEvent;
    UIImageView *_recIconImageView;
    UIButton *_add2cartButton;
    UILabel *_redActionLabel;
    UILabel *_recContentLabel;
    UILabel *_recDateLabel;
}

+ (double)heightForRowAtIndexPath:(id)arg1;
@property(nonatomic) __weak UILabel *recDateLabel; // @synthesize recDateLabel=_recDateLabel;
@property(nonatomic) __weak UILabel *recContentLabel; // @synthesize recContentLabel=_recContentLabel;
@property(nonatomic) __weak UILabel *redActionLabel; // @synthesize redActionLabel=_redActionLabel;
@property(nonatomic) __weak UIButton *add2cartButton; // @synthesize add2cartButton=_add2cartButton;
@property(nonatomic) __weak UIImageView *recIconImageView; // @synthesize recIconImageView=_recIconImageView;
@property(copy, nonatomic) CDUnknownBlockType add2CartEvent; // @synthesize add2CartEvent=_add2CartEvent;
- (void).cxx_destruct;
- (void)cellForRowAtIndexPath:(id)arg1 SourceData:(id)arg2;
- (void)add2CartAction:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
