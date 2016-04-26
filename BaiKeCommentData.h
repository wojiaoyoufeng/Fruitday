//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseDataModel.h"

@class BaiKeReplyData<Optional>, NSString<Optional>;

@interface BaiKeCommentData : FDBaseDataModel
{
    NSString<Optional> *_id;
    NSString<Optional> *_ctime;
    NSString<Optional> *_content;
    NSString<Optional> *_uid;
    NSString<Optional> *_username;
    NSString<Optional> *_userrank;
    NSString<Optional> *_userface;
    NSString<Optional> *_stime;
    NSString<Optional> *_is_replay;
    NSString<Optional> *_is_edit;
    BaiKeReplyData<Optional> *_replay;
}

@property(retain, nonatomic) BaiKeReplyData<Optional> *replay; // @synthesize replay=_replay;
@property(copy, nonatomic) NSString<Optional> *is_edit; // @synthesize is_edit=_is_edit;
@property(copy, nonatomic) NSString<Optional> *is_replay; // @synthesize is_replay=_is_replay;
@property(copy, nonatomic) NSString<Optional> *stime; // @synthesize stime=_stime;
@property(copy, nonatomic) NSString<Optional> *userface; // @synthesize userface=_userface;
@property(copy, nonatomic) NSString<Optional> *userrank; // @synthesize userrank=_userrank;
@property(copy, nonatomic) NSString<Optional> *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString<Optional> *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString<Optional> *ctime; // @synthesize ctime=_ctime;
@property(copy, nonatomic) NSString<Optional> *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end
