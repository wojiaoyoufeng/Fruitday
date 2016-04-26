//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImage, UIImageView, UILabel, UIViewController;

@interface GoogleWearAlertViewObjc : UIView <UIGestureRecognizerDelegate>
{
    _Bool _messageIsFullyDisplayed;
    int _alertPosition;
    NSString *_title;
    UIViewController *_viewController;
    double _duration;
    UIImage *_iconImage;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) _Bool messageIsFullyDisplayed; // @synthesize messageIsFullyDisplayed=_messageIsFullyDisplayed;
@property(nonatomic) int alertPosition; // @synthesize alertPosition=_alertPosition;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)positionAlertForPosition:(int)arg1;
- (void)layoutSubviews;
- (_Bool)insideNavController;
- (void)dismissAlert;
- (id)initWithTitle:(id)arg1 andImage:(id)arg2 andWithType:(int)arg3 andWithDuration:(double)arg4 inViewController:(id)arg5 atPostion:(int)arg6 canBeDismissedByUser:(_Bool)arg7;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

