//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDLoadCommand.h"

@class NSArray;

@interface CDLCDynamicSymbolTable : CDLoadCommand
{
    struct dysymtab_command _dysymtab;
    NSArray *_externalRelocationEntries;
}

- (void).cxx_destruct;
- (id)relocationEntryWithOffset:(unsigned long long)arg1;
- (void)loadSymbols;
- (unsigned int)cmdsize;
- (unsigned int)cmd;
- (id)initWithDataCursor:(id)arg1;

@end
