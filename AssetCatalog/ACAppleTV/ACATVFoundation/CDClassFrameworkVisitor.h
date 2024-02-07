//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVisitor.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface CDClassFrameworkVisitor : CDVisitor
{
    NSMutableDictionary *_frameworkNamesByClassName;
    NSString *_frameworkName;
}

@property(retain) NSString *frameworkName; // @synthesize frameworkName=_frameworkName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *frameworkNamesByClassName;
- (void)addClassName:(id)arg1 referencedInFramework:(id)arg2;
- (void)willVisitClass:(id)arg1;
- (void)willVisitObjectiveCProcessor:(id)arg1;
- (id)init;

@end
