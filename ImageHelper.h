//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ImageHelper : NSObject
{
}

+ (id)convertBitmapRGBA8ToUIImage:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3;
+ (struct CGContext *)newBitmapRGBA8ContextFromImage:(struct CGImage *)arg1;
+ (char *)convertUIImageToBitmapRGBA8:(id)arg1 length:(unsigned long long *)arg2;

@end

