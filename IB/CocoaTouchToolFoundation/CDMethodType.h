//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDType, NSString;

@interface CDMethodType : NSObject
{
    CDType *_type;
    NSString *_offset;
}

@property(readonly) NSString *offset; // @synthesize offset=_offset;
@property(readonly) CDType *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(id)arg1 offset:(id)arg2;

@end

