//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MapView, NSTimer;

@interface TapDetectingView : UIView
{
    NSTimer *longPressTimer;
    _Bool fireLongPressTimer;
    struct CGPoint tapLocation;
    _Bool multipleTouches;
    _Bool twoFingerTapIsPossible;
    _Bool _touching;
    int _lastTouchingTime;
    struct CGPoint _firstPoint;
    struct CGPoint _secondPoint;
    float _centerPointOffsetX;
    float _centerPointOffsetY;
    struct BMPoint _twoPointCenterGeo;
    double _length;
    int _mode;
    int _lookOverCount;
    struct CGPoint _center;
    _Bool _enterLookOverEnable;
    _Bool _enterRotateEnable;
    _Bool _enterRoate;
    unsigned int _filingStart;
    struct CGPoint _filingPointStart;
    int _speed;
    _Bool _isAlreadyCallregionWillChange;
    _Bool enableChangeWithTouchPointCenter;
    _Bool enableRotateWithTouchPointCenter;
    _Bool enableZoomWithTouchPointCenter;
    _Bool _isMove;
    _Bool _enableZoom;
    _Bool _enableZoomWithTap;
    _Bool _isTwoFingerMove;
    _Bool _isSecondFingerEnd;
    _Bool _enterMoveEnable;
    id <TapDetectingViewDelegate> delegate;
    MapView *_mapView;
}

@property(nonatomic) __weak MapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) _Bool enterMoveEnable; // @synthesize enterMoveEnable=_enterMoveEnable;
@property(nonatomic) _Bool enterRotateEnable; // @synthesize enterRotateEnable=_enterRotateEnable;
@property(nonatomic) _Bool enterLookOverEnable; // @synthesize enterLookOverEnable=_enterLookOverEnable;
@property(nonatomic) _Bool isSecondFingerEnd; // @synthesize isSecondFingerEnd=_isSecondFingerEnd;
@property(nonatomic) _Bool isTwoFingerMove; // @synthesize isTwoFingerMove=_isTwoFingerMove;
@property(nonatomic) _Bool enableZoomWithTap; // @synthesize enableZoomWithTap=_enableZoomWithTap;
@property(nonatomic) _Bool enableZoom; // @synthesize enableZoom=_enableZoom;
@property(nonatomic) _Bool isMove; // @synthesize isMove=_isMove;
@property(nonatomic) int lastTouchingTime; // @synthesize lastTouchingTime=_lastTouchingTime;
@property(nonatomic) _Bool touching; // @synthesize touching=_touching;
@property(nonatomic) _Bool enableZoomWithTouchPointCenter; // @synthesize enableZoomWithTouchPointCenter;
@property(nonatomic) _Bool enableRotateWithTouchPointCenter; // @synthesize enableRotateWithTouchPointCenter;
@property(nonatomic) _Bool enableChangeWithTouchPointCenter; // @synthesize enableChangeWithTouchPointCenter;
@property(nonatomic) __weak id <TapDetectingViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)resetParas;
- (void)handleChangMapState:(int)arg1;
- (void)handleDoubleEndTouchPoint;
- (void)handleEndTouchPoint;
- (void)handleScale:(double)arg1;
- (void)handleRoate:(double)arg1;
- (void)handleOverLook:(double)arg1;
- (void)handleFiling;
- (void)handleMoveTouchPoint;
- (void)handleBeginTouchPoint;
- (void)handleDoubleMoveTouchPoint;
- (void)handleDoubleBeginTouchPoint;
- (void)handleLongPress;
- (void)handleNormalPress;
- (void)handleTwoFingerTap;
- (void)handleDoubleTap;
- (void)handleSingleTap;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)addRegionWillChangeCallback;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)notifyZoom;
- (void)notifyDrag;
- (void)destroyLongPressTimer;
- (void)initLongPressTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

