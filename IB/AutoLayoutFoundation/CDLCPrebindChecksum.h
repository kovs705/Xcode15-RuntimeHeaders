//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDLoadCommand.h"

@interface CDLCPrebindChecksum : CDLoadCommand
{
    struct prebind_cksum_command _prebindChecksumCommand;
}

@property(readonly, nonatomic) unsigned int cksum;
- (unsigned int)cmdsize;
- (unsigned int)cmd;
- (id)initWithDataCursor:(id)arg1;

@end
