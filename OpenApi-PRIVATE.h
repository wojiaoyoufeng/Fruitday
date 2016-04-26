//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OpenApi.h"

@interface OpenApi (PRIVATE)
+ (id)dictionaryByParseUrlFromSeparator:(id)arg1 separator:(id)arg2;
+ (_Bool)isQZoneSupportGeneralPastboard;
+ (_Bool)isSupportGeneralPastboard;
+ (void)processMessage_Auth:(id)arg1;
+ (void)processMessage_Share:(id)arg1;
+ (void)processMessage_Other:(id)arg1 msgTypeStr:(id)arg2;
+ (_Bool)processMessage:(id)arg1;
+ (_Bool)openQZoneWithCommandStr:(id)arg1 andPasteBoardName:(id)arg2 data:(id)arg3;
+ (_Bool)openQZoneWithCommand:(int)arg1 andPasteBoardName:(id)arg2 data:(id)arg3;
+ (_Bool)openQQWithCommand:(int)arg1 andPasteBoardName:(id)arg2 data:(id)arg3;
+ (id)getDictionaryFromGeneralPasteBoard:(id)arg1;
+ (id)getDictionaryFromPasteBoard:(id)arg1;
+ (id)saveDictionaryByGeneralPastboard:(id)arg1;
+ (id)getGeneralPastboardNameKey;
+ (id)saveDictionary:(id)arg1 toPasteBoard:(id)arg2;
@end

