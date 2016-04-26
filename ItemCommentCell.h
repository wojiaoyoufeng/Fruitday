//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface ItemCommentCell : UITableViewCell
{
    UILabel *_name;
    UILabel *_content;
    UILabel *_timestamp;
    UIImageView *_starRate1;
    UIImageView *_starRate2;
    UIImageView *_starRate3;
    UIImageView *_starRate4;
    UIImageView *_starRate5;
}

@property(nonatomic) __weak UIImageView *starRate5; // @synthesize starRate5=_starRate5;
@property(nonatomic) __weak UIImageView *starRate4; // @synthesize starRate4=_starRate4;
@property(nonatomic) __weak UIImageView *starRate3; // @synthesize starRate3=_starRate3;
@property(nonatomic) __weak UIImageView *starRate2; // @synthesize starRate2=_starRate2;
@property(nonatomic) __weak UIImageView *starRate1; // @synthesize starRate1=_starRate1;
@property(nonatomic) __weak UILabel *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) __weak UILabel *content; // @synthesize content=_content;
@property(nonatomic) __weak UILabel *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

