//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer, UIView, UMSocialiToastSettings;

@interface UMSocialiToast : NSObject
{
    UMSocialiToastSettings *_settings;
    long long offsetLeft;
    long long offsetTop;
    NSTimer *timer;
    UIView *view;
    NSString *text;
}

+ (id)makeText:(id)arg1;
- (id)theSettings;
- (id)setPostion:(struct CGPoint)arg1;
- (id)setGravity:(int)arg1;
- (id)setGravity:(int)arg1 offsetLeft:(long long)arg2 offsetTop:(long long)arg3;
- (id)setDuration:(long long)arg1;
- (void)removeToast:(id)arg1;
- (void)hideToast:(id)arg1;
- (struct CGRect)_frameForImage:(int)arg1 inToastFrame:(struct CGRect)arg2;
- (struct CGRect)_toastFrameForImageSize:(struct CGSize)arg1 withLocation:(int)arg2 andTextSize:(struct CGSize)arg3;
- (void)show:(int)arg1;
- (void)show;
- (id)initWithText:(id)arg1;

@end
