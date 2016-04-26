//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBJsonBase.h"

#import "SBJsonWriter.h"

@interface SBJsonWriter : SBJsonBase <SBJsonWriter>
{
    _Bool sortKeys;
    _Bool humanReadable;
}

@property _Bool humanReadable; // @synthesize humanReadable;
@property _Bool sortKeys; // @synthesize sortKeys;
- (_Bool)appendString:(id)arg1 into:(id)arg2;
- (_Bool)appendDictionary:(id)arg1 into:(id)arg2;
- (_Bool)appendArray:(id)arg1 into:(id)arg2;
- (_Bool)appendValue:(id)arg1 into:(id)arg2;
- (id)indent;
- (id)stringWithObject:(id)arg1;
- (id)stringWithFragment:(id)arg1;

@end

