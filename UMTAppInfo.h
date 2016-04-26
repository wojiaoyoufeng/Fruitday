//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "UMTBase.h"

@class NSString;

@interface UMTAppInfo : NSObject <UMTBase, NSCoding>
{
    NSString *__key;
    NSString *__version;
    int __version_index;
    NSString *__package_name;
    int __sdk_type;
    NSString *__sdk_version;
    NSString *__channel;
    NSString *__wrapper_type;
    NSString *__wrapper_version;
    int __vertical_type;
    _Bool __key_isset;
    _Bool __version_isset;
    _Bool __version_index_isset;
    _Bool __package_name_isset;
    _Bool __sdk_type_isset;
    _Bool __sdk_version_isset;
    _Bool __channel_isset;
    _Bool __wrapper_type_isset;
    _Bool __wrapper_version_isset;
    _Bool __vertical_type_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetVertical_type;
- (_Bool)vertical_typeIsSet;
@property(nonatomic, getter=vertical_type, setter=setVertical_type:) int vertical_type;
- (void)unsetWrapper_version;
- (_Bool)wrapper_versionIsSet;
@property(retain, nonatomic, getter=wrapper_version, setter=setWrapper_version:) NSString *wrapper_version;
- (void)unsetWrapper_type;
- (_Bool)wrapper_typeIsSet;
@property(retain, nonatomic, getter=wrapper_type, setter=setWrapper_type:) NSString *wrapper_type;
- (void)unsetChannel;
- (_Bool)channelIsSet;
@property(retain, nonatomic, getter=channel, setter=setChannel:) NSString *channel;
- (void)unsetSdk_version;
- (_Bool)sdk_versionIsSet;
@property(retain, nonatomic, getter=sdk_version, setter=setSdk_version:) NSString *sdk_version;
- (void)unsetSdk_type;
- (_Bool)sdk_typeIsSet;
@property(nonatomic, getter=sdk_type, setter=setSdk_type:) int sdk_type;
- (void)unsetPackage_name;
- (_Bool)package_nameIsSet;
@property(retain, nonatomic, getter=package_name, setter=setPackage_name:) NSString *package_name;
- (void)unsetVersion_index;
- (_Bool)version_indexIsSet;
@property(nonatomic, getter=version_index, setter=setVersion_index:) int version_index;
- (void)unsetVersion;
- (_Bool)versionIsSet;
@property(retain, nonatomic, getter=version, setter=setVersion:) NSString *version;
- (void)unsetKey;
- (_Bool)keyIsSet;
@property(retain, nonatomic, getter=key, setter=setKey:) NSString *key;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 version:(id)arg2 version_index:(int)arg3 package_name:(id)arg4 sdk_type:(int)arg5 sdk_version:(id)arg6 channel:(id)arg7 wrapper_type:(id)arg8 wrapper_version:(id)arg9 vertical_type:(int)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

