//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CMMotionManager, NSTimer, StaticWaveView, UIColor;

@interface XTWaveView : UIView
{
    UIColor *_currentWaterColor;
    struct CGRect _mRect;
    float _waveHeight;
    float _waveFrequency;
    float _latestAccY;
    float _tempDepth;
    NSTimer *_timer;
    CMMotionManager *_motionManager;
    StaticWaveView *_staticWaveView;
    _Bool _startAccelerometerUpdates;
    float _depth;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIColor *currentWaterColor; // @synthesize currentWaterColor=_currentWaterColor;
@property(nonatomic) float depth; // @synthesize depth=_depth;
- (void).cxx_destruct;
- (void)selfDelloc;
- (float)getWaveHeight;
- (void)drawWaveWithWaveHeight:(float)arg1 waveFrequency:(float)arg2 waveColor:(id)arg3;
- (void)updateWaveViewWithRect:(struct CGRect)arg1;
- (void)updateWareView;
- (void)drawRect:(struct CGRect)arg1;
- (void)animateWave;
- (void)stopGetDegress;
- (void)startGetDegress;
- (id)initWithFrame:(struct CGRect)arg1;

@end

