//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JPFReportResponse.h"

@class NSDictionary;

@interface JPFBadgeNumberReportResponse : JPFReportResponse
{
    NSDictionary *_distributeDictionary;
}

@property(retain, nonatomic) NSDictionary *distributeDictionary; // @synthesize distributeDictionary=_distributeDictionary;
- (void).cxx_destruct;
- (void)handleReceipt;
- (id)initWithData:(id)arg1 response:(id)arg2 delegate:(id)arg3 from:(id)arg4;

@end

