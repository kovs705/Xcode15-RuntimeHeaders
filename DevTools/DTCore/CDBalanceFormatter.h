//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCharacterSet, NSMutableString, NSScanner;

@interface CDBalanceFormatter : NSObject
{
    NSScanner *_scanner;
    NSCharacterSet *_openCloseSet;
    NSMutableString *_result;
}

- (void).cxx_destruct;
- (id)format;
- (void)parse:(id)arg1 index:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (id)initWithString:(id)arg1;

@end

