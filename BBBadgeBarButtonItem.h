//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class NSString, UIColor, UIFont, UILabel;

@interface BBBadgeBarButtonItem : UIBarButtonItem
{
    _Bool _shouldHideBadgeAtZero;
    _Bool _shouldAnimateBadge;
    NSString *_badgeValue;
    UIColor *_badgeBGColor;
    UIColor *_badgeTextColor;
    UIFont *_badgeFont;
    double _badgePadding;
    double _badgeMinSize;
    double _badgeOriginX;
    double _badgeOriginY;
    UILabel *_badge;
}

@property(retain, nonatomic) UILabel *badge; // @synthesize badge=_badge;
@property _Bool shouldAnimateBadge; // @synthesize shouldAnimateBadge=_shouldAnimateBadge;
@property _Bool shouldHideBadgeAtZero; // @synthesize shouldHideBadgeAtZero=_shouldHideBadgeAtZero;
@property(nonatomic) double badgeOriginY; // @synthesize badgeOriginY=_badgeOriginY;
@property(nonatomic) double badgeOriginX; // @synthesize badgeOriginX=_badgeOriginX;
@property(nonatomic) double badgeMinSize; // @synthesize badgeMinSize=_badgeMinSize;
@property(nonatomic) double badgePadding; // @synthesize badgePadding=_badgePadding;
@property(retain, nonatomic) UIFont *badgeFont; // @synthesize badgeFont=_badgeFont;
@property(retain, nonatomic) UIColor *badgeTextColor; // @synthesize badgeTextColor=_badgeTextColor;
@property(retain, nonatomic) UIColor *badgeBGColor; // @synthesize badgeBGColor=_badgeBGColor;
@property(retain, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
- (void).cxx_destruct;
- (void)removeBadge;
- (id)duplicateLabel:(id)arg1;
- (void)updateBadgeValueAnimated:(_Bool)arg1;
- (void)updateBadgeFrame;
- (void)refreshBadge;
- (void)initializer;
- (id)initWithCustomUIButton:(id)arg1;

@end
