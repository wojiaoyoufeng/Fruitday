//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMSocialSnsData.h"

@class NSString;

@interface UMSocialYXSessionData : UMSocialSnsData
{
    int _yxMessageType;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int yxMessageType; // @synthesize yxMessageType=_yxMessageType;
- (id)init;

@end

