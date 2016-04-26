//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "DZNEmptyDataSetDelegate.h"
#import "DZNEmptyDataSetSource.h"

@class FavouriteProductListData, NSString, UITableView;

@interface MyFavouriteViewController : FDBaseViewController <DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>
{
    FavouriteProductListData *_favProductData;
    UITableView *_myFavouriteItemsTableView;
}

@property(nonatomic) __weak UITableView *myFavouriteItemsTableView; // @synthesize myFavouriteItemsTableView=_myFavouriteItemsTableView;
- (void).cxx_destruct;
- (void)emptyDataSetDidTapButton:(id)arg1;
- (double)verticalOffsetForEmptyDataSet:(id)arg1;
- (id)buttonTitleForEmptyDataSet:(id)arg1 forState:(unsigned long long)arg2;
- (id)descriptionForEmptyDataSet:(id)arg1;
- (id)titleForEmptyDataSet:(id)arg1;
- (id)imageForEmptyDataSet:(id)arg1;
- (void)goToHomePage;
- (void)removeFromFavourite:(long long)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)loadOnlineFavouriteItems;
- (void)loadFavouriteItems;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

