//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDLCDylib, CDMachOFile, CDSection, NSString;

@interface CDSymbol : NSObject
{
    struct nlist_64 _nlist;
    BOOL _is32Bit;
    NSString *_name;
    CDMachOFile *_machOFile;
}

@property(readonly) CDMachOFile *machOFile; // @synthesize machOFile=_machOFile;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *longTypeDescription;
@property(readonly, nonatomic) NSString *shortTypeDescription;
- (long long)compareByName:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSString *referenceTypeName;
@property(readonly, nonatomic) unsigned long long referenceType;
@property(readonly, nonatomic) BOOL isInBssSection;
@property(readonly, nonatomic) BOOL isInDataSection;
@property(readonly, nonatomic) BOOL isInTextSection;
@property(readonly, nonatomic) BOOL isCommon;
@property(readonly, nonatomic) BOOL isIndirect;
@property(readonly, nonatomic) BOOL isPrebound;
@property(readonly, nonatomic) BOOL isInSection;
@property(readonly, nonatomic) BOOL isAbsolute;
@property(readonly, nonatomic) BOOL isDefined;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) unsigned long long stab;
@property(readonly, nonatomic) BOOL isPrivateExternal;
@property(readonly, nonatomic) BOOL isExternal;
@property(readonly, nonatomic) CDLCDylib *dylibLoadCommand;
@property(readonly, nonatomic) CDSection *section;
@property(readonly, nonatomic) unsigned long long value;
- (id)description;
- (id)initWithName:(id)arg1 machOFile:(id)arg2 nlist64:(struct nlist_64)arg3;
- (id)initWithName:(id)arg1 machOFile:(id)arg2 nlist32:(struct nlist)arg3;

@end

