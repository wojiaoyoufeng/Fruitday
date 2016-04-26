//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewModel.h"

@class CheckRedIndicatorResultDataModel, HomePageDataMode, RegionSiteListDataModel;

@interface FDHomePageViewModel : FDBaseViewModel
{
    HomePageDataMode *_homePageDataMode;
    RegionSiteListDataModel *_regionSiteListDataModel;
    CheckRedIndicatorResultDataModel *_checkRedIndicatorResultDataModel;
}

@property(retain, nonatomic) CheckRedIndicatorResultDataModel *checkRedIndicatorResultDataModel; // @synthesize checkRedIndicatorResultDataModel=_checkRedIndicatorResultDataModel;
@property(retain, nonatomic) RegionSiteListDataModel *regionSiteListDataModel; // @synthesize regionSiteListDataModel=_regionSiteListDataModel;
@property(retain, nonatomic) HomePageDataMode *homePageDataMode; // @synthesize homePageDataMode=_homePageDataMode;
- (void).cxx_destruct;
- (void)checkRedIndicator;
- (void)loadMarketingDataQuery;
- (void)loadRegionListQuery;

@end
