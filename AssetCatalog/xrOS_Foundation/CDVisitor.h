//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDClassDump;

@interface CDVisitor : NSObject
{
    CDClassDump *_classDump;
    BOOL _shouldShowStructureSection;
    BOOL _shouldShowProtocolSection;
}

@property BOOL shouldShowProtocolSection; // @synthesize shouldShowProtocolSection=_shouldShowProtocolSection;
@property BOOL shouldShowStructureSection; // @synthesize shouldShowStructureSection=_shouldShowStructureSection;
@property(retain) CDClassDump *classDump; // @synthesize classDump=_classDump;
- (void).cxx_destruct;
- (void)visitRemainingProperties:(id)arg1;
- (void)visitProperty:(id)arg1;
- (void)visitIvar:(id)arg1;
- (void)visitInstanceMethod:(id)arg1 propertyState:(id)arg2;
- (void)visitClassMethod:(id)arg1;
- (void)didVisitPropertiesOfCategory:(id)arg1;
- (void)willVisitPropertiesOfCategory:(id)arg1;
- (void)didVisitCategory:(id)arg1;
- (void)willVisitCategory:(id)arg1;
- (void)didVisitPropertiesOfClass:(id)arg1;
- (void)willVisitPropertiesOfClass:(id)arg1;
- (void)didVisitIvarsOfClass:(id)arg1;
- (void)willVisitIvarsOfClass:(id)arg1;
- (void)didVisitClass:(id)arg1;
- (void)willVisitClass:(id)arg1;
- (void)didVisitProtocol:(id)arg1;
- (void)willVisitProtocol:(id)arg1;
- (void)didVisitObjectiveCProcessor:(id)arg1;
- (void)didVisitOptionalMethods;
- (void)willVisitOptionalMethods;
- (void)didVisitPropertiesOfProtocol:(id)arg1;
- (void)willVisitPropertiesOfProtocol:(id)arg1;
- (void)visitObjectiveCProcessor:(id)arg1;
- (void)willVisitObjectiveCProcessor:(id)arg1;
- (void)didEndVisiting;
- (void)willBeginVisiting;
- (id)init;

@end

