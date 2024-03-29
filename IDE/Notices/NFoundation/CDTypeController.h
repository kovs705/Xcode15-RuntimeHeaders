//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDClassDump, CDStructureTable, CDTypeFormatter;

@interface CDTypeController : NSObject
{
    CDClassDump *_classDump;
    id <CDTypeControllerDelegate> _delegate;
    CDTypeFormatter *_ivarTypeFormatter;
    CDTypeFormatter *_methodTypeFormatter;
    CDTypeFormatter *_propertyTypeFormatter;
    CDTypeFormatter *_structDeclarationTypeFormatter;
    CDStructureTable *_structureTable;
    CDStructureTable *_unionTable;
    BOOL _hasUnknownFunctionPointers;
    BOOL _hasUnknownBlocks;
}

@property(readonly) CDStructureTable *unionTable; // @synthesize unionTable=_unionTable;
@property(readonly) CDStructureTable *structureTable; // @synthesize structureTable=_structureTable;
@property(readonly) CDClassDump *classDump; // @synthesize classDump=_classDump;
@property(nonatomic) BOOL hasUnknownBlocks; // @synthesize hasUnknownBlocks=_hasUnknownBlocks;
@property(nonatomic) BOOL hasUnknownFunctionPointers; // @synthesize hasUnknownFunctionPointers=_hasUnknownFunctionPointers;
@property(readonly) CDTypeFormatter *structDeclarationTypeFormatter; // @synthesize structDeclarationTypeFormatter=_structDeclarationTypeFormatter;
@property(readonly) CDTypeFormatter *propertyTypeFormatter; // @synthesize propertyTypeFormatter=_propertyTypeFormatter;
@property(readonly) CDTypeFormatter *methodTypeFormatter; // @synthesize methodTypeFormatter=_methodTypeFormatter;
@property(readonly) CDTypeFormatter *ivarTypeFormatter; // @synthesize ivarTypeFormatter=_ivarTypeFormatter;
@property __weak id <CDTypeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)typedefNameForType:(id)arg1;
- (BOOL)shouldExpandType:(id)arg1;
- (BOOL)shouldShowName:(id)arg1;
- (id)phase3ReplacementForType:(id)arg1;
- (void)phase3RegisterStructure:(id)arg1;
- (id)phase2ReplacementForType:(id)arg1;
- (void)startPhase3;
- (void)startPhase2;
- (void)phase1RegisterStructure:(id)arg1;
- (void)startPhase1;
- (void)endPhase:(unsigned long long)arg1;
- (void)phase0RegisterStructure:(id)arg1 usedInMethod:(BOOL)arg2;
- (void)workSomeMagic;
- (void)generateMemberNames;
- (void)generateTypedefNames;
- (void)appendStructuresToString:(id)arg1;
- (void)typeFormatter:(id)arg1 didReferenceClassName:(id)arg2;
- (id)typeFormatter:(id)arg1 typedefNameForStructure:(id)arg2 level:(unsigned long long)arg3;
- (id)typeFormatter:(id)arg1 replacementForType:(id)arg2;
@property(readonly, nonatomic) BOOL targetArchUses64BitABI;
@property(readonly, nonatomic) BOOL shouldShowMethodAddresses;
@property(readonly, nonatomic) BOOL shouldShowIvarOffsets;
- (id)initWithClassDump:(id)arg1;

@end

