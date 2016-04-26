//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseViewModel.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface GSMeViewModel : FDBaseViewModel
{
    NSMutableDictionary *_mutableUserInfo;
    NSMutableArray *_mutableMyPostList;
    NSMutableArray *_mutableMyMarkList;
    NSMutableArray *_mutableMyCommentList;
    long long _currentMyPostPage;
    long long _currentMyMarkPage;
    long long _currentMyCommentPage;
    _Bool _hasMoreMyPostList;
    _Bool _hasMoreMyMarkList;
    _Bool _hasMoreMyCommentList;
    NSDictionary *_userInfo;
    NSArray *_myPostList;
    NSMutableArray *_myMarkList;
    NSMutableArray *_myCommentList;
}

@property(nonatomic) _Bool hasMoreMyCommentList; // @synthesize hasMoreMyCommentList=_hasMoreMyCommentList;
@property(nonatomic) _Bool hasMoreMyMarkList; // @synthesize hasMoreMyMarkList=_hasMoreMyMarkList;
@property(nonatomic) _Bool hasMoreMyPostList; // @synthesize hasMoreMyPostList=_hasMoreMyPostList;
@property(copy, nonatomic) NSMutableArray *myCommentList; // @synthesize myCommentList=_myCommentList;
@property(copy, nonatomic) NSMutableArray *myMarkList; // @synthesize myMarkList=_myMarkList;
@property(copy, nonatomic) NSArray *myPostList; // @synthesize myPostList=_myPostList;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)getMyCommentListQuery;
- (void)getMoreMyCommentList;
- (void)getFirstMyCommentList;
- (void)getMyMarkListQuery;
- (void)getMoreMyMarkList;
- (void)getFirstMyMarkList;
- (void)getMyPostListQuery;
- (void)getMoreMyPostList;
- (void)getFirstMyPostList;
- (void)getUserInfoQuery;
- (id)init;

@end
