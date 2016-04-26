//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface EmptyDataHintView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_actionButton;
    id <EmptyDataHintViewDelegate> _delegate;
}

@property(retain, nonatomic) id <EmptyDataHintViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)action:(id)arg1;
- (id)initWithImage:(id)arg1 title:(id)arg2 desc:(id)arg3 actionTitle:(id)arg4 delegate:(id)arg5;
- (id)init;

@end
