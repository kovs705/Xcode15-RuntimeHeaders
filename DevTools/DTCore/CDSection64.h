//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDSection.h"

@class CDLCSegment64;

@interface CDSection64 : CDSection
{
    CDLCSegment64 *_segment;
    struct section_64 _section;
}

@property(readonly) CDLCSegment64 *segment; // @synthesize segment=_segment;
- (void).cxx_destruct;
- (unsigned long long)fileOffsetForAddress:(unsigned long long)arg1;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (void)loadData;
- (unsigned long long)size;
- (unsigned long long)addr;
- (id)machOFile;
- (id)description;
- (id)initWithDataCursor:(id)arg1 segment:(id)arg2;

@end

