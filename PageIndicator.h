//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface PageIndicator : UIView
{
    int _totlePageNumber;
    int _currentPageNumber;
    UIImageView *_backGroundImageView;
    UILabel *_currentPageLabel;
    UILabel *_totalPageLabel;
}

@property int currentPageNumber; // @synthesize currentPageNumber=_currentPageNumber;
@property int totlePageNumber; // @synthesize totlePageNumber=_totlePageNumber;
@property(retain, nonatomic) UILabel *totalPageLabel; // @synthesize totalPageLabel=_totalPageLabel;
@property(retain, nonatomic) UILabel *currentPageLabel; // @synthesize currentPageLabel=_currentPageLabel;
@property(retain, nonatomic) UIImageView *backGroundImageView; // @synthesize backGroundImageView=_backGroundImageView;
- (void).cxx_destruct;
- (void)setCurrentPageIndicator:(int)arg1;
- (void)setTotalPageIndicator:(int)arg1;
- (void)buildIndicatorBlock:(struct CGRect)arg1 withTotalNumber:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withTotalNumber:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

