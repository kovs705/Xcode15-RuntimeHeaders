//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDLoadCommand.h"

@class NSString;

@interface CDLCSubClient : CDLoadCommand
{
    struct sub_client_command _command;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned int)cmdsize;
- (unsigned int)cmd;
- (id)initWithDataCursor:(id)arg1;

@end
