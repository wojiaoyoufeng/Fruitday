//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperation, NSOperationQueue, NSString;

@interface SDWebImageDownloader : NSObject
{
    _Bool _shouldDecompressImages;
    double _downloadTimeout;
    long long _executionOrder;
    NSString *_username;
    NSString *_password;
    CDUnknownBlockType _headersFilter;
    NSOperationQueue *_downloadQueue;
    NSOperation *_lastAddedOperation;
    Class _operationClass;
    NSMutableDictionary *_URLCallbacks;
    NSMutableDictionary *_HTTPHeaders;
    struct dispatch_queue_s *_barrierQueue;
}

+ (id)sharedDownloader;
+ (void)initialize;
@property(nonatomic) struct dispatch_queue_s *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(retain, nonatomic) NSMutableDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(retain, nonatomic) NSMutableDictionary *URLCallbacks; // @synthesize URLCallbacks=_URLCallbacks;
@property(nonatomic) Class operationClass; // @synthesize operationClass=_operationClass;
@property(nonatomic) __weak NSOperation *lastAddedOperation; // @synthesize lastAddedOperation=_lastAddedOperation;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(copy, nonatomic) CDUnknownBlockType headersFilter; // @synthesize headersFilter=_headersFilter;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long executionOrder; // @synthesize executionOrder=_executionOrder;
@property(nonatomic) double downloadTimeout; // @synthesize downloadTimeout=_downloadTimeout;
@property(nonatomic) _Bool shouldDecompressImages; // @synthesize shouldDecompressImages=_shouldDecompressImages;
- (void).cxx_destruct;
- (void)setSuspended:(_Bool)arg1;
- (void)addProgressCallback:(CDUnknownBlockType)arg1 andCompletedBlock:(CDUnknownBlockType)arg2 forURL:(id)arg3 createCallback:(CDUnknownBlockType)arg4;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
@property(nonatomic) long long maxConcurrentDownloads;
@property(readonly, nonatomic) unsigned long long currentDownloadCount;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)dealloc;
- (id)init;

@end

