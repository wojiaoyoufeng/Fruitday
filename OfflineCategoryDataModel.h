//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface OfflineCategoryDataModel : JSONModel
{
    NSString<Optional> *_type_id;
    NSString<Optional> *_name;
    NSString<Optional> *_photo;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString<Optional> *type_id; // @synthesize type_id=_type_id;
- (void).cxx_destruct;

@end

