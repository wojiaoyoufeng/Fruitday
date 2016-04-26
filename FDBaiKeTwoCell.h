//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseTableViewCell.h"

@class NSArray, UICollectionView;

@interface FDBaiKeTwoCell : FDBaseTableViewCell
{
    UICollectionView *_collectionView;
    NSArray *_baiKeSections;
    CDUnknownBlockType _didSelectItemAtIndexPath;
}

+ (double)cellHeightByData:(id)arg1;
+ (id)cellForTableView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType didSelectItemAtIndexPath; // @synthesize didSelectItemAtIndexPath=_didSelectItemAtIndexPath;
- (void).cxx_destruct;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)displayCellByDataSources:(id)arg1 rowAtIndexPath:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)awakeFromNib;

@end

