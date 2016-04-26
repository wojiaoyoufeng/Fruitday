//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JPFReportRequest.h"

@class JPFPageFlow;

@interface JPFUserActiveReportRequest : JPFReportRequest
{
    JPFPageFlow *_actives;
    double _sessionStartTime;
    double _sessionCloseTime;
}

@property(nonatomic) double sessionCloseTime; // @synthesize sessionCloseTime=_sessionCloseTime;
@property(nonatomic) double sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(copy, nonatomic) JPFPageFlow *actives; // @synthesize actives=_actives;
- (void).cxx_destruct;
- (void)setResponseBlock;
- (void)p_addActives;
- (_Bool)packData;
- (void)setReportActives:(id)arg1 sessionStartTime:(double)arg2 sessionCloseTime:(double)arg3;
- (id)init;

@end

