//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UMSocialSnsHandlerDelegate.h"
#import "WXApiDelegate.h"

@class NSMutableString, NSOperationQueue, NSString, UMSocialControllerService, UMSocialHTTPSessionManager;

@interface UMSocialWechatHandler : NSObject <WXApiDelegate, UMSocialSnsHandlerDelegate>
{
    NSMutableString *_shareToWXType;
    UMSocialControllerService *_socialControllerService;
    CDUnknownBlockType _completion;
    NSString *_wxAppId;
    NSString *_wxAppSecrete;
    NSString *_wxUrl;
    NSString *_shareText;
    UMSocialHTTPSessionManager *_httpClient;
    NSOperationQueue *_queue;
}

+ (id)scaleAndComplessImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (void)setWXAppId:(id)arg1 appSecret:(id)arg2 url:(id)arg3;
+ (id)shareInstance;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) UMSocialHTTPSessionManager *httpClient; // @synthesize httpClient=_httpClient;
@property(copy, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(copy, nonatomic) NSString *wxUrl; // @synthesize wxUrl=_wxUrl;
@property(copy, nonatomic) NSString *wxAppSecrete; // @synthesize wxAppSecrete=_wxAppSecrete;
@property(copy, nonatomic) NSString *wxAppId; // @synthesize wxAppId=_wxAppId;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *shareToWXType; // @synthesize shareToWXType=_shareToWXType;
@property(retain, nonatomic) UMSocialControllerService *socialControllerService; // @synthesize socialControllerService=_socialControllerService;
- (void)clickHandlerWithSnsName:(id)arg1 controller:(id)arg2 socialControllerService:(id)arg3;
- (void)onResp:(id)arg1;
- (_Bool)checkUrlSchema;
- (_Bool)isClientInstall:(id)arg1;
- (void)loginWithController:(id)arg1 completion:(CDUnknownBlockType)arg2 snsName:(id)arg3;
- (id)getWechatPlatform:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
