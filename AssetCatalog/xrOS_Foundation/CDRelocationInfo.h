//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CDRelocationInfo : NSObject
{
    struct relocation_info _rinfo;
}

@property(readonly, nonatomic) BOOL isExtern;
@property(readonly, nonatomic) unsigned int symbolnum;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) unsigned long long offset;
- (id)description;
- (id)initWithInfo:(struct relocation_info)arg1;

@end

