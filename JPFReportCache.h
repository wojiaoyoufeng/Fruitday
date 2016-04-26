//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JPFMemoryCache.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>;

@interface JPFReportCache : JPFMemoryCache <NSCopying, NSCoding>
{
    NSMutableDictionary *_sendingPackageCache;
    NSObject<OS_dispatch_semaphore> *_cacheObjectSemaphore;
    NSObject<OS_dispatch_semaphore> *_sendingCacheSemaphore;
}

@property(retain, nonatomic) NSMutableDictionary *sendingPackageCache; // @synthesize sendingPackageCache=_sendingPackageCache;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)JPFEnumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)calculateCacheLength;
- (void)removeCacheObjectForKey:(id)arg1;
- (void)removeSendingObjectForKey:(id)arg1;
- (_Bool)checkReportFlag:(id)arg1;
- (void)changeSendingObjectFailedForKey:(id)arg1;
- (void)addSendingCacheObject:(id)arg1 forKey:(id)arg2;
- (void)addCacheObject:(id)arg1 forKey:(id)arg2;
- (void)transferSendingObjectToCache:(id)arg1 forKey:(id)arg2;
- (void)transferSendingCacheToCache;
- (void)resetCache;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;

@end

