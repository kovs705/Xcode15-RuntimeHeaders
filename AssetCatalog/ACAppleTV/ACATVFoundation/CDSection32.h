//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDSection.h"

@class CDLCSegment32;

@interface CDSection32 : CDSection
{
    CDLCSegment32 *_segment;
    struct section _section;
}

@property(readonly) CDLCSegment32 *segment; // @synthesize segment=_segment;
- (void).cxx_destruct;
- (unsigned long long)fileOffsetForAddress:(unsigned long long)arg1;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (void)loadData;
@property(readonly, nonatomic) unsigned int offset;
- (unsigned long long)size;
- (unsigned long long)addr;
- (id)machOFile;
- (id)description;
- (id)initWithDataCursor:(id)arg1 segment:(id)arg2;

@end

