//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface MobClickSocialAnalytics : NSObject
{
    CDUnknownBlockType _completion;
    NSOperationQueue *_operationQueue;
}

+ (void)postWeiboCounts:(id)arg1 appKey:(id)arg2 topic:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)dealloc;
- (void)MobClickOperate_Finish:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)postPlatform:(id)arg1 appKey:(id)arg2 users:(id)arg3 weiboId:(id)arg4 topic:(id)arg5 paramData:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)postWeiboCounts:(id)arg1 appKey:(id)arg2 topic:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (id)convertArrayToString:(id)arg1;

@end

