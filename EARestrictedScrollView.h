//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSArray, UIView;

@interface EARestrictedScrollView : UIScrollView
{
    UIView *_containerView;
    struct CGRect _restrictionArea;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) struct CGRect restrictionArea; // @synthesize restrictionArea=_restrictionArea;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=alignedContentOffset, setter=setAlignedContentOffset:) struct CGPoint contentOffset;
- (_Bool)checkIfScrollIndicator:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *containedSubviews;
- (id)viewWithTag:(long long)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)addSubview:(id)arg1;

@end

