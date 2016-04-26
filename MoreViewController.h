//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "AVCaptureMetadataOutputObjectsDelegate.h"
#import "UIAlertViewDelegate.h"

@class AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, UILabel, UITableView;

@interface MoreViewController : UITableViewController <AVCaptureMetadataOutputObjectsDelegate, UIAlertViewDelegate>
{
    UITableView *_moreTableView;
    UILabel *_customerServiceNo;
    AVCaptureSession *_session;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UILabel *_appVersionLabel;
}

@property(nonatomic) __weak UILabel *appVersionLabel; // @synthesize appVersionLabel=_appVersionLabel;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) __weak UILabel *customerServiceNo; // @synthesize customerServiceNo=_customerServiceNo;
@property(retain, nonatomic) UITableView *moreTableView; // @synthesize moreTableView=_moreTableView;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)dialCustomerServiceNo;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)goAppStoreComment;
- (void)onCheckVersion;
- (id)getCurrentAppVersion;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

