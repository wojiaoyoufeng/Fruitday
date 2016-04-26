//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, UICollectionView, UILabel, UIScrollView;

@interface ItemDetailMoreItemCell : UITableViewCell
{
    UICollectionView *_itemCollectionView;
    CDUnknownBlockType _clickItemDetailEvent;
    CDUnknownBlockType _clickItemPlusEvent;
    UILabel *_contentLabel;
    UIScrollView *_moreItemScrollView;
    NSMutableArray *_productList;
}

+ (double)heightForRowAtIndexPath:(id)arg1 sourceData:(id)arg2;
@property(nonatomic) __weak NSMutableArray *productList; // @synthesize productList=_productList;
@property(nonatomic) __weak UIScrollView *moreItemScrollView; // @synthesize moreItemScrollView=_moreItemScrollView;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(copy, nonatomic) CDUnknownBlockType clickItemPlusEvent; // @synthesize clickItemPlusEvent=_clickItemPlusEvent;
@property(copy, nonatomic) CDUnknownBlockType clickItemDetailEvent; // @synthesize clickItemDetailEvent=_clickItemDetailEvent;
- (void).cxx_destruct;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)cellForRowAtIndexPath:(id)arg1 sourceData:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

