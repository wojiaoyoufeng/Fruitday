//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface LocalMapImport : NSObject
{
    int _threadState;
    int _zipFilesCount;
    NSArray *_zipFilesNameArray;
    int _errUnzipfileCount;
}

@property(nonatomic) int errUnzipfileCount; // @synthesize errUnzipfileCount=_errUnzipfileCount;
@property(nonatomic) int threadState; // @synthesize threadState=_threadState;
- (void).cxx_destruct;
- (void)uncompressLocalMapZipData:(id)arg1 zipFilesNumber:(int)arg2 zipFileName:(id)arg3;
- (_Bool)waitUICommon:(int)arg1;
- (void)importLocalMap;
- (void)dealloc;

@end

