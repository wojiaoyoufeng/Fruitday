//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewModel.h"

@class NSArray, NSMutableArray;

@interface GSMessageCenterViewModel : FDBaseViewModel
{
    NSMutableArray *_mutableMessageList;
    long long _currentPage;
    _Bool _hasMoreMessageList;
    long long _messageCount;
    NSArray *_messageList;
}

@property(nonatomic) _Bool hasMoreMessageList; // @synthesize hasMoreMessageList=_hasMoreMessageList;
@property(copy, nonatomic) NSArray *messageList; // @synthesize messageList=_messageList;
@property(nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
- (void).cxx_destruct;
- (void)setRead:(long long)arg1 target:(id)arg2;
- (void)getMessageListQuery;
- (void)getMoreMessageList;
- (void)getFirstMessageList;
- (id)init;

@end

