//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UILabel, UIPickerView;

@interface XTPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <XTPickerViewDelegate> _delegate;
    UIButton *_mFinishButton;
    UIPickerView *_mPickerView;
    NSMutableArray *_dataSourceArray;
    UIView *_masterView;
    UILabel *_mTitleLabel;
}

@property(nonatomic) __weak UILabel *mTitleLabel; // @synthesize mTitleLabel=_mTitleLabel;
@property(retain, nonatomic) UIView *masterView; // @synthesize masterView=_masterView;
@property(retain, nonatomic) NSMutableArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
@property(nonatomic) __weak UIPickerView *mPickerView; // @synthesize mPickerView=_mPickerView;
@property(nonatomic) __weak UIButton *mFinishButton; // @synthesize mFinishButton=_mFinishButton;
@property(nonatomic) id <XTPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)finishPick;
- (void)cancelPicker;
- (void)showPickerInView:(id)arg1;
- (void)reloadPickerView:(id)arg1 component:(long long)arg2;
- (void)reloadPickerView:(id)arg1;
- (void)finishPickAction:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

