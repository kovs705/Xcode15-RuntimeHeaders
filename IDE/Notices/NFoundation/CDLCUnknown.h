//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDLoadCommand.h"

@class NSData;

@interface CDLCUnknown : CDLoadCommand
{
    struct load_command _loadCommand;
    NSData *_commandData;
}

- (void).cxx_destruct;
- (unsigned int)cmdsize;
- (unsigned int)cmd;
- (id)initWithDataCursor:(id)arg1;

@end

