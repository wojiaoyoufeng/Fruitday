//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface CheckLogisticViewController : FDBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_logisticTableView;
    UIImageView *_logisticCompanyLogo;
    UILabel *_logisticCompanyName;
    UILabel *_logisticOrderName;
    UILabel *_logisticDriverName;
    UIButton *_driverContactButton;
    UIView *_orderNumberView;
    UIView *_driverView;
    NSString *_orderName;
    NSMutableArray *_logisticItems;
    NSString *_driverPhoneNumber;
}

@property(retain) NSString *driverPhoneNumber; // @synthesize driverPhoneNumber=_driverPhoneNumber;
@property(retain) NSMutableArray *logisticItems; // @synthesize logisticItems=_logisticItems;
@property(retain, nonatomic) NSString *orderName; // @synthesize orderName=_orderName;
@property(nonatomic) __weak UIView *driverView; // @synthesize driverView=_driverView;
@property(nonatomic) __weak UIView *orderNumberView; // @synthesize orderNumberView=_orderNumberView;
@property(nonatomic) __weak UIButton *driverContactButton; // @synthesize driverContactButton=_driverContactButton;
@property(nonatomic) __weak UILabel *logisticDriverName; // @synthesize logisticDriverName=_logisticDriverName;
@property(nonatomic) __weak UILabel *logisticOrderName; // @synthesize logisticOrderName=_logisticOrderName;
@property(nonatomic) __weak UILabel *logisticCompanyName; // @synthesize logisticCompanyName=_logisticCompanyName;
@property(nonatomic) __weak UIImageView *logisticCompanyLogo; // @synthesize logisticCompanyLogo=_logisticCompanyLogo;
@property(nonatomic) __weak UITableView *logisticTableView; // @synthesize logisticTableView=_logisticTableView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onContactDriverPressed:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)fillLogisticInfo:(id)arg1;
- (void)loadLogisticInfo;
- (void)alertErrorMessage:(id)arg1;
- (void)showHideBusyIndicator:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)setPageProperties;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

