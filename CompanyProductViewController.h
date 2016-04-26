//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "ProductListItemCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YKuImageInLoopScrollViewDelegate.h"

@class FDCurveImageView, FDProductItemListData, NSArray, NSDictionary, NSString, NSTimer, UILabel, UIScrollView, UITableView, YKuImageInLoopScrollView;

@interface CompanyProductViewController : FDBaseViewController <ProductListItemCellDelegate, UITableViewDataSource, UITableViewDelegate, YKuImageInLoopScrollViewDelegate>
{
    FDProductItemListData *_productListData;
    NSTimer *specialSlidingTimer;
    NSArray *specialRotation;
    NSDictionary *_specialDetail;
    NSDictionary *_cartItemToAdd;
    YKuImageInLoopScrollView *_rotationScrollView;
    UILabel *_hintLabel;
    UIScrollView *_specialDetailScrollView;
    FDCurveImageView *_specialDescImage;
    UITableView *_specialItemTable;
}

@property(nonatomic) __weak UITableView *specialItemTable; // @synthesize specialItemTable=_specialItemTable;
@property(nonatomic) __weak FDCurveImageView *specialDescImage; // @synthesize specialDescImage=_specialDescImage;
@property(nonatomic) __weak UIScrollView *specialDetailScrollView; // @synthesize specialDetailScrollView=_specialDetailScrollView;
@property(nonatomic) __weak UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) __weak YKuImageInLoopScrollView *rotationScrollView; // @synthesize rotationScrollView=_rotationScrollView;
@property(retain, nonatomic) NSDictionary *cartItemToAdd; // @synthesize cartItemToAdd=_cartItemToAdd;
@property(retain, nonatomic) NSDictionary *specialDetail; // @synthesize specialDetail=_specialDetail;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)addProduct2CartCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onAddToCartPress:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)backToPrevious;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollView:(id)arg1 didScrollPageIndex:(int)arg2;
- (void)scrollView:(id)arg1 didTapIndex:(int)arg2;
- (id)scrollView:(id)arg1 viewAtPageIndex:(int)arg2;
- (int)widthForScrollView:(id)arg1;
- (int)numOfPageForScrollView:(id)arg1;
- (void)loadRotationScrollView;
- (void)loadSpecialDetail;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

