//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BMAppTools : NSObject
{
}

+ (_Bool)Md5AndBase64Encode:(struct CVString *)arg1 withOutPut:(struct CVString *)arg2;
+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (CDStruct_c3b9c2ee)Baidu09LLEncrypt:(double)arg1 Latitude:(double)arg2 CoorType:(int)arg3;
+ (struct BMPoint)CoordinateEncrypt:(double)arg1 Latitude:(double)arg2 CoorType:(int)arg3;
+ (_Bool)TransGeoToPoints:(struct CVString *)arg1 points:(id)arg2;
+ (_Bool)TransPointToGeo:(struct BMPoint)arg1 outputGeo:(struct CVString *)arg2;
+ (_Bool)TransGeoToPoint:(struct CVString *)arg1 point:(struct BMPoint *)arg2;

@end

