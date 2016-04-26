//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TencentBaseMessageObj.h"

@class NSData, NSString;

@interface TencentImageMessageObjV1 : TencentBaseMessageObj
{
    NSData *_dataImage;
    NSString *_sUrl;
    NSData *_dataThumbImage;
    NSString *_sDescription;
    long long _nType;
    struct CGSize _szImage;
}

@property(readonly) long long nType; // @synthesize nType=_nType;
@property(nonatomic) struct CGSize szImage; // @synthesize szImage=_szImage;
@property(retain, nonatomic) NSString *sDescription; // @synthesize sDescription=_sDescription;
@property(retain, nonatomic) NSData *dataThumbImage; // @synthesize dataThumbImage=_dataThumbImage;
@property(retain, nonatomic) NSString *sUrl; // @synthesize sUrl=_sUrl;
@property(retain, nonatomic) NSData *dataImage; // @synthesize dataImage=_dataImage;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isVaild;
- (id)initWithType:(int)arg1;
- (id)initWithImageUrl:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

