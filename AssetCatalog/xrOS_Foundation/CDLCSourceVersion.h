//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDLoadCommand.h"

@class NSString;

@interface CDLCSourceVersion : CDLoadCommand
{
    struct source_version_command _sourceVersionCommand;
}

- (void)appendToString:(id)arg1 verbose:(BOOL)arg2;
@property(readonly, nonatomic) NSString *sourceVersionString;
- (unsigned int)cmdsize;
- (unsigned int)cmd;
- (id)initWithDataCursor:(id)arg1;

@end
