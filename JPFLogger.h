//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JPFAppenderAttachable, JPFLevel, NSString;

@interface JPFLogger : NSObject
{
    JPFAppenderAttachable *appdenderAttach;
    _Bool _additivity;
    JPFLevel *_level;
    NSString *_name;
    JPFLogger *_parent;
    id <JPFLoggerRepository> _repository;
}

+ (void)shutdown;
+ (id)rootLogger;
+ (id)currentLoggers;
+ (id)loggerForName:(id)arg1;
+ (id)loggerForClass:(Class)arg1;
+ (id)loggerAllClass;
+ (id)loggerRepository;
@property(retain, nonatomic) id <JPFLoggerRepository> repository; // @synthesize repository=_repository;
@property(nonatomic) _Bool additivity; // @synthesize additivity=_additivity;
@property(retain, nonatomic) JPFLogger *parent; // @synthesize parent=_parent;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) JPFLevel *level; // @synthesize level=_level;
- (void).cxx_destruct;
- (_Bool)isEnabledFor:(id)arg1;
- (_Bool)isErrorEnabled;
- (_Bool)isWarnEnabled;
- (_Bool)isInfoEnabled;
- (_Bool)isDebugEnabled;
- (_Bool)isTestENabled;
- (void)callAppenders:(id)arg1;
- (void)logMessage:(id)arg1 andInternalMessage:(id)arg2 withLevel:(id)arg3;
- (id)effectiveLevel;
- (id)initWithName:(id)arg1;
- (id)init;

@end

