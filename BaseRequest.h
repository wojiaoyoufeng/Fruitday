//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BaseRequest : NSObject
{
}

+ (id)sharedInstance;
- (void)requestByGET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)removeSpecialCharactors:(id)arg1;
- (void)payRequest:(id)arg1 orderInfo:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)request:(id)arg1 params:(id)arg2 imageParams:(id)arg3 needConnectId:(_Bool)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)request:(id)arg1 params:(id)arg2 imageParams:(id)arg3 connectIdRequired:(_Bool)arg4 fromViewController:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (_Bool)beforeRequest:(id)arg1;

@end

