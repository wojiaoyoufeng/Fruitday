//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface UMSocialOpAnalytics : NSObject
{
    NSMutableDictionary *_opDictionary;
    int _count;
}

+ (void)postSocialAnalytics:(id)arg1 snsName:(id)arg2;
+ (void)postSocialAnalytics:(id)arg1;
+ (void)postSocialAnalytics:(id)arg1 fromSourceOpType:(id)arg2;
+ (void)postSocialAnalytics:(id)arg1 fromSourceOpType:(id)arg2 snsName:(id)arg3;
+ (id)shareInstance;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableDictionary *opDictionary; // @synthesize opDictionary=_opDictionary;
- (void)dealloc;
- (id)init;

@end
