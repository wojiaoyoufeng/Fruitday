//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIColor;

@interface XTCircleGaugeView : UIView
{
    _Bool _clockwise;
    _Bool _needCorner;
    _Bool _needGradient;
    _Bool _needDashLine;
    float _duration;
    CAShapeLayer *_trackCircleLayer;
    CAShapeLayer *_gaugeCircleLayer;
    double _cornerWidth;
    double _value;
    UIColor *_gaugeTintColor;
    long long _gaugeStyle;
}

@property(nonatomic) _Bool needDashLine; // @synthesize needDashLine=_needDashLine;
@property(nonatomic) _Bool needGradient; // @synthesize needGradient=_needGradient;
@property(nonatomic) _Bool needCorner; // @synthesize needCorner=_needCorner;
@property(nonatomic) long long gaugeStyle; // @synthesize gaugeStyle=_gaugeStyle;
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
@property(retain, nonatomic) UIColor *gaugeTintColor; // @synthesize gaugeTintColor=_gaugeTintColor;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) double cornerWidth; // @synthesize cornerWidth=_cornerWidth;
@property(retain, nonatomic) CAShapeLayer *gaugeCircleLayer; // @synthesize gaugeCircleLayer=_gaugeCircleLayer;
@property(retain, nonatomic) CAShapeLayer *trackCircleLayer; // @synthesize trackCircleLayer=_trackCircleLayer;
- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateGaugeWithValue:(double)arg1 animated:(_Bool)arg2;
- (id)circlePath;
- (id)outsideCirclePath;
- (id)middlesideCirclePath;
- (id)insideCirclePath;
- (id)circlPathForCurrentGaugeStyle;
- (void)setValue:(double)arg1 animated:(_Bool)arg2;
- (void)setGradientLayer;
- (void)setupGaugeCircleLayer;
- (void)drawDashLine;
- (id)initWithFrame:(struct CGRect)arg1 WithGagueStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
