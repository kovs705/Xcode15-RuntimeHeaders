//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDLoadCommand.h"

@class NSString;

@interface CDLCUUID : CDLoadCommand
{
    struct uuid_command _uuidCommand;
    struct __CFUUID *_uuid;
}

- (void)appendToString:(id)arg1 verbose:(BOOL)arg2;
@property(readonly, nonatomic) NSString *uuidString;
- (unsigned int)cmdsize;
- (unsigned int)cmd;
- (void)dealloc;
- (id)initWithDataCursor:(id)arg1;

@end

