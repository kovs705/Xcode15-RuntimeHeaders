//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDOCSymtab, NSString;

@interface CDOCModule : NSObject
{
    unsigned int _version;
    NSString *_name;
    CDOCSymtab *_symtab;
}

@property(retain) CDOCSymtab *symtab; // @synthesize symtab=_symtab;
@property(retain) NSString *name; // @synthesize name=_name;
@property unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)formattedString;
- (id)description;
- (id)init;

@end

