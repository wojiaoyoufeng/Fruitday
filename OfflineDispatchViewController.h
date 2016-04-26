//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewController.h"

#import "BMKGeoCodeSearchDelegate.h"
#import "BMKLocationServiceDelegate.h"
#import "BMKMapViewDelegate.h"

@class BMKGeoCodeSearch, BMKLocationService, BMKMapView, NSMutableArray, NSString, OfflineBuildingHeaderView, OfflineBuildingListData, OfflineUserAddressData, OfflineViewControllerContainer, UIButton, UITableView, UIView, XTPresentCartView;

@interface OfflineDispatchViewController : FDBaseViewController <BMKMapViewDelegate, BMKLocationServiceDelegate, BMKGeoCodeSearchDelegate>
{
    UITableView *_mTableView;
    UIView *_alertBuildingView;
    UIView *_headerBgView;
    UIView *_listBgView;
    UIView *_mapBgView;
    UIView *_mainBgView;
    BMKLocationService *_locService;
    BMKGeoCodeSearch *_geocodesearch;
    _Bool _isFirstUsed;
    NSMutableArray *_constraintArray;
    _Bool _isNeedRequest;
    OfflineBuildingListData *_buildingListData;
    OfflineBuildingListData *_mapBuildingListData;
    int _storeShowType;
    NSString *_userAddress;
    OfflineBuildingHeaderView *_buildingHeaderView;
    NSMutableArray *_addressHistoryArray;
    double amount;
    OfflineUserAddressData *_userAddressData;
    BMKMapView *_mapView;
    UIButton *_showCurrentLocationButton;
    UIButton *_searchBuildingButton;
    OfflineViewControllerContainer *_containerVC;
    XTPresentCartView *_cartView;
}

@property(nonatomic) _Bool isFirstUsed; // @synthesize isFirstUsed=_isFirstUsed;
@property(retain, nonatomic) XTPresentCartView *cartView; // @synthesize cartView=_cartView;
@property(retain, nonatomic) BMKLocationService *locService; // @synthesize locService=_locService;
@property(retain, nonatomic) OfflineViewControllerContainer *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak UIButton *searchBuildingButton; // @synthesize searchBuildingButton=_searchBuildingButton;
@property(nonatomic) __weak UIButton *showCurrentLocationButton; // @synthesize showCurrentLocationButton=_showCurrentLocationButton;
@property(nonatomic) __weak BMKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) OfflineUserAddressData *userAddressData; // @synthesize userAddressData=_userAddressData;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onGetReverseGeoCodeResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (void)didFailToLocateUserWithError:(id)arg1;
- (void)didStopLocatingUser;
- (void)didUpdateBMKUserLocation:(id)arg1;
- (void)willStartLocatingUser;
- (void)mapView:(id)arg1 annotationViewForBubble:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapview:(id)arg1 onDoubleClick:(CDStruct_c3b9c2ee)arg2;
- (void)mapView:(id)arg1 onClickedMapBlank:(CDStruct_c3b9c2ee)arg2;
- (void)mapViewDidFinishLoading:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)selectAnnotationByAnnotationView:(id)arg1;
- (void)resetBuildingName;
- (void)resetBuildingDetail;
- (void)selectedBuildingData:(id)arg1;
- (void)selectedAddressInfo:(id)arg1;
- (void)addAnimatedAnnotationWithCoordinate:(CDStruct_c3b9c2ee)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)reverseGeocode:(CDStruct_c3b9c2ee)arg1;
- (void)setBMapViewRegion:(CDStruct_90e2a262)arg1;
- (void)stopLocation;
- (void)startLocation;
- (void)enterAddressInfoAction;
- (void)addNewAnnotationViewWithArray:(id)arg1;
- (void)initialVCStatus;
- (void)changeShowType;
- (void)initNavRightButton;
- (void)selectedBuildingWithBuildingData:(id)arg1;
- (void)initialBuildingHeaderView;
- (void)back2previousVCWithTarget:(id)arg1;
- (void)searchBuildingAction:(id)arg1;
- (void)closeAlertBuildingView:(id)arg1;
- (void)enterHistoryAction:(id)arg1;
- (void)listSearchAction:(id)arg1;
- (void)showCurrentLocationAction:(id)arg1;
- (void)requestGetAddressList;
- (void)requestGetNearbyBuildingByType:(id)arg1 WithUserLocation:(CDStruct_c3b9c2ee)arg2;
- (void)selfDelloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
