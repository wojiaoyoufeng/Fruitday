//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMPOIInfo.h"

@class NSArray, NSDictionary, NSString;

@interface BMPOIDetail : BMPOIInfo
{
    long long _resultType;
    long long _cityID;
    NSArray *_busLines;
    int _detailType;
    NSDictionary *_detailInfos;
    NSDictionary *_detailTitleLinks;
    NSArray *_detailPictureLinks;
    NSString *_detailPrice;
    NSArray *_detailLines;
    NSArray *_detailAroundInfos;
    NSDictionary *_detailHouseAros;
}

@property(retain, nonatomic) NSDictionary *detailHouseAros; // @synthesize detailHouseAros=_detailHouseAros;
@property(retain, nonatomic) NSArray *detailAroundInfos; // @synthesize detailAroundInfos=_detailAroundInfos;
@property(retain, nonatomic) NSArray *detailLines; // @synthesize detailLines=_detailLines;
@property(retain, nonatomic) NSString *detailPrice; // @synthesize detailPrice=_detailPrice;
@property(retain, nonatomic) NSArray *detailPictureLinks; // @synthesize detailPictureLinks=_detailPictureLinks;
@property(retain, nonatomic) NSDictionary *detailTitleLinks; // @synthesize detailTitleLinks=_detailTitleLinks;
@property(retain, nonatomic) NSDictionary *detailInfos; // @synthesize detailInfos=_detailInfos;
@property(nonatomic) int detailType; // @synthesize detailType=_detailType;
@property(retain, nonatomic) NSArray *busLines; // @synthesize busLines=_busLines;
@property(nonatomic) long long cityID; // @synthesize cityID=_cityID;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

