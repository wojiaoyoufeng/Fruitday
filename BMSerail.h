//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BMSerail : NSObject
{
}

+ (id)getAddressInfoSerailResult:(id)arg1;
+ (id)getCurrentCitySerailResult:(id)arg1;
+ (id)getPlaceParameterSerailResult:(id)arg1;
+ (id)getCarOrFootRouteSerailResult:(id)arg1;
+ (id)getBusRouteSerailResult:(id)arg1;
+ (void)parsingPOIInfoWithJsonString:(id)arg1 Result:(id)arg2;
+ (void)parsingPOIListWithBundle:(CVArray_1b92041a *)arg1 Result:(id)arg2;
+ (void)parsingAddressInfoWithBundle:(struct CVBundle *)arg1 Result:(id)arg2;
+ (void)parsingCurrentCityBundle:(struct CVBundle *)arg1 Result:(id)arg2;
+ (_Bool)parseEspecialQuerySearchResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parseCityListSearchResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parsePOIListSearchResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parseAreaSearchResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parseReverseGEOSearchResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parseGeoCodeResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parsePOIDetailSearchResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parsePoiBkgDataResult:(id)arg1 poiBkgDat:(id)arg2;
+ (_Bool)parseUpdateCurrentCityResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parseSuggestionResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parseBusLineDetailResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parseRouteAddrResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parseCarOrFootRouteResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parseBusRouteResult:(id)arg1 outPutResult:(id)arg2;
+ (_Bool)parseOnlineResult:(id)arg1 outPutResult:(id)arg2;

@end
