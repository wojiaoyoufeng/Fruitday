//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MobClickUtility : NSObject
{
}

+ (id)AES128DecryptData:(id)arg1 withKey:(const void *)arg2;
+ (id)AES128EncryptData:(id)arg1 withKey:(const void *)arg2;
+ (double)durationNowWith1970TimeInterval:(double)arg1;
+ (id)generateEnvelopeFileNameWithTS:(id)arg1;
+ (id)envelopeFiles;
+ (id)exchangeIdentityPath;
+ (void)sortFileWithCreatedTime:(id)arg1;
+ (id)itemsInAbsDir:(id)arg1;
+ (id)umengDirectory;
+ (id)cacheDirectory;
+ (id)envelopeFilePath;
+ (id)bgCacheFilePath;
+ (id)cacheFilePath;
+ (void)removeFile:(id)arg1;
+ (void)saveData:(id)arg1 inPath:(id)arg2;
+ (_Bool)makeAbsDir:(id)arg1;
+ (_Bool)isExistAtPath:(id)arg1;

@end

