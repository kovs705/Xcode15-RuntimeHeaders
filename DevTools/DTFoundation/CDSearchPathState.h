//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CDSearchPathState : NSObject
{
    NSString *_executablePath;
    NSMutableArray *_searchPathStack;
}

@property(readonly) NSMutableArray *searchPathStack; // @synthesize searchPathStack=_searchPathStack;
@property(retain, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
- (void).cxx_destruct;
- (id)searchPaths;
- (void)popSearchPaths;
- (void)pushSearchPaths:(id)arg1;
- (id)init;

@end
