//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSIndexPath, NSString, UICollectionView, UITableView;

@interface DoubleDeckTableView : UIView <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UITableView *_tableView;
    UIView *_collectionViewSuperView;
    UICollectionView *_collectionView;
    UIView *_rightTableViewLine;
    UIView *_failedLoadView;
    NSIndexPath *_selectedCellIndexPath;
    NSArray *_subLevelDataSource;
    NSArray *_dataScource;
    CDUnknownBlockType _tapCategoryAction;
    CDUnknownBlockType _tapFailedViewAction;
    UITableView *_tableView2;
}

@property(retain, nonatomic) UITableView *tableView2; // @synthesize tableView2=_tableView2;
@property(copy, nonatomic) CDUnknownBlockType tapFailedViewAction; // @synthesize tapFailedViewAction=_tapFailedViewAction;
@property(copy, nonatomic) CDUnknownBlockType tapCategoryAction; // @synthesize tapCategoryAction=_tapCategoryAction;
@property(retain, nonatomic) NSArray *dataScource; // @synthesize dataScource=_dataScource;
- (void).cxx_destruct;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tapFailedView:(id)arg1;
- (void)setTableViewCuttingLine;
- (void)showFailedLoadView;
- (void)creatCollectionView;
- (void)creatCollectionViewSuperView;
- (void)creatRightTableViewLine;
- (void)creatTableView;
- (void)creatDoubleDeckTableView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

