//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface MyCommentedItemCell : UITableViewCell
{
    UILabel *_messageLabel;
    UILabel *_pubDateLabel;
    UIView *_postBGView;
    UIImageView *_postAuthorAvatar;
    UILabel *_postAuthorLabel;
    UIImageView *_authorLevelImageView;
    UILabel *_postTitleLabel;
    UIImageView *_postThumb;
    NSLayoutConstraint *_separatorHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(nonatomic) __weak UIImageView *postThumb; // @synthesize postThumb=_postThumb;
@property(nonatomic) __weak UILabel *postTitleLabel; // @synthesize postTitleLabel=_postTitleLabel;
@property(nonatomic) __weak UIImageView *authorLevelImageView; // @synthesize authorLevelImageView=_authorLevelImageView;
@property(nonatomic) __weak UILabel *postAuthorLabel; // @synthesize postAuthorLabel=_postAuthorLabel;
@property(nonatomic) __weak UIImageView *postAuthorAvatar; // @synthesize postAuthorAvatar=_postAuthorAvatar;
@property(nonatomic) __weak UIView *postBGView; // @synthesize postBGView=_postBGView;
@property(nonatomic) __weak UILabel *pubDateLabel; // @synthesize pubDateLabel=_pubDateLabel;
@property(nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
