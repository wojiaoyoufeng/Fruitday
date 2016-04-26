//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewModel.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface GSFriendViewModel : FDBaseViewModel
{
    NSMutableDictionary *_mutableUserInfo;
    NSMutableArray *_mutableMyPostList;
    long long _currentMyPostPage;
    _Bool _hasMoreMyPostList;
    NSString *_uid;
    NSDictionary *_userInfo;
    NSArray *_myPostList;
}

@property(nonatomic) _Bool hasMoreMyPostList; // @synthesize hasMoreMyPostList=_hasMoreMyPostList;
@property(copy, nonatomic) NSArray *myPostList; // @synthesize myPostList=_myPostList;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)getMyPostListQuery;
- (void)getMoreMyPostList;
- (void)getFirstMyPostList;
- (void)getUserInfoQuery;
- (id)init;

@end
