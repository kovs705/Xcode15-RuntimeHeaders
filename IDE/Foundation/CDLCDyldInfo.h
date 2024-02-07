//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDLoadCommand.h"

@class NSMutableDictionary;

@interface CDLCDyldInfo : CDLoadCommand
{
    struct dyld_info_command _dyldInfoCommand;
    unsigned long long _ptrSize;
    NSMutableDictionary *_symbolNamesByAddress;
}

- (void).cxx_destruct;
- (void)printSymbols:(const char *)arg1 end:(const char *)arg2 prefix:(id)arg3 offset:(unsigned long long)arg4;
- (void)logExportedSymbols;
- (void)bindAddress:(unsigned long long)arg1 type:(unsigned char)arg2 symbolName:(const char *)arg3 flags:(unsigned char)arg4 addend:(long long)arg5 libraryOrdinal:(long long)arg6;
- (void)logBindOps:(const char *)arg1 end:(const char *)arg2 isLazy:(BOOL)arg3;
- (void)logLazyBindInfo;
- (void)parseWeakBindInfo;
- (void)parseBindInfo;
- (void)rebaseAddress:(unsigned long long)arg1 type:(unsigned char)arg2;
- (void)logRebaseInfo;
- (id)symbolNameForAddress:(unsigned long long)arg1;
- (unsigned int)cmdsize;
- (unsigned int)cmd;
- (void)machOFileDidReadLoadCommands:(id)arg1;
- (id)initWithDataCursor:(id)arg1;

@end

