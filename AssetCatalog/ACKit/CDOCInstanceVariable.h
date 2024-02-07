//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDType, NSError, NSString;

@interface CDOCInstanceVariable : NSObject
{
    NSString *_name;
    NSString *_typeString;
    unsigned long long _offset;
    BOOL _hasParsedType;
    CDType *_type;
    NSError *_parseError;
}

@property BOOL hasParsedType; // @synthesize hasParsedType=_hasParsedType;
@property(readonly) NSError *parseError; // @synthesize parseError=_parseError;
@property(readonly) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)appendToString:(id)arg1 typeController:(id)arg2;
@property(readonly, nonatomic) CDType *type;
- (id)description;
- (id)initWithName:(id)arg1 typeString:(id)arg2 offset:(unsigned long long)arg3;

@end
