//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface TraceOrchardView : UIView
{
    UIImageView *_bgImageView;
    NSLayoutConstraint *_mapWidth;
    NSLayoutConstraint *_mapTop;
    UIImageView *_pinImageView;
    NSLayoutConstraint *_pinX;
    NSLayoutConstraint *_pinY;
    UILabel *_orchardNameLabel;
    UILabel *_orchardDescLabel;
}

@property(nonatomic) __weak UILabel *orchardDescLabel; // @synthesize orchardDescLabel=_orchardDescLabel;
@property(nonatomic) __weak UILabel *orchardNameLabel; // @synthesize orchardNameLabel=_orchardNameLabel;
@property(nonatomic) __weak NSLayoutConstraint *pinY; // @synthesize pinY=_pinY;
@property(nonatomic) __weak NSLayoutConstraint *pinX; // @synthesize pinX=_pinX;
@property(nonatomic) __weak UIImageView *pinImageView; // @synthesize pinImageView=_pinImageView;
@property(nonatomic) __weak NSLayoutConstraint *mapTop; // @synthesize mapTop=_mapTop;
@property(nonatomic) __weak NSLayoutConstraint *mapWidth; // @synthesize mapWidth=_mapWidth;
@property(nonatomic) __weak UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)scaledMapAndPin:(id)arg1;
- (void)displayWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

