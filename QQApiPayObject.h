//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSString;

@interface QQApiPayObject : QQApiObject
{
    NSString *_OrderNo;
    NSString *_AppInfo;
}

+ (id)objectWithOrderNo:(id)arg1 AppInfo:(id)arg2;
@property(retain, nonatomic) NSString *AppInfo; // @synthesize AppInfo=_AppInfo;
@property(retain, nonatomic) NSString *OrderNo; // @synthesize OrderNo=_OrderNo;
- (void)dealloc;
- (id)initWithOrderNo:(id)arg1 AppInfo:(id)arg2;

@end

