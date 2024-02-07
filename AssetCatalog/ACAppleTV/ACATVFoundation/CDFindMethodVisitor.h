//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVisitor.h"

@class CDOCProtocol, NSMutableString, NSString;

@interface CDFindMethodVisitor : CDVisitor
{
    NSString *_searchString;
    NSMutableString *_resultString;
    CDOCProtocol *_context;
    BOOL _hasShownContext;
}

@property BOOL hasShownContext; // @synthesize hasShownContext=_hasShownContext;
@property(retain, nonatomic) CDOCProtocol *context; // @synthesize context=_context;
@property(readonly) NSMutableString *resultString; // @synthesize resultString=_resultString;
@property(retain) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (void)showContextIfNecessary;
- (void)visitIvar:(id)arg1;
- (void)visitInstanceMethod:(id)arg1 propertyState:(id)arg2;
- (void)visitClassMethod:(id)arg1;
- (void)didVisitCategory:(id)arg1;
- (void)willVisitCategory:(id)arg1;
- (void)didVisitIvarsOfClass:(id)arg1;
- (void)willVisitIvarsOfClass:(id)arg1;
- (void)didVisitClass:(id)arg1;
- (void)willVisitClass:(id)arg1;
- (void)didVisitProtocol:(id)arg1;
- (void)willVisitProtocol:(id)arg1;
- (void)writeResultToStandardOutput;
- (void)didEndVisiting;
- (void)visitObjectiveCProcessor:(id)arg1;
- (void)willBeginVisiting;
- (id)init;

@end

