//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CDTypeName, NSArray, NSMutableArray, NSString;

@interface CDType : NSObject <NSCopying>
{
    int _primitiveType;
    NSArray *_protocols;
    CDType *_subtype;
    CDTypeName *_typeName;
    NSMutableArray *_members;
    NSString *_bitfieldSize;
    NSString *_arraySize;
    NSString *_variableName;
    NSArray *_types;
}

@property(readonly, nonatomic) NSArray *types; // @synthesize types=_types;
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) CDTypeName *typeName; // @synthesize typeName=_typeName;
@property(readonly, nonatomic) CDType *subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) int primitiveType; // @synthesize primitiveType=_primitiveType;
@property(retain) NSString *variableName; // @synthesize variableName=_variableName;
- (void).cxx_destruct;
- (void)phase3MergeWithTypeController:(id)arg1;
- (void)phase3RegisterMembersWithTypeController:(id)arg1;
- (void)phase3RegisterWithTypeController:(id)arg1;
- (void)_phase2MergeWithTypeController:(id)arg1 debug:(BOOL)arg2;
- (void)phase2MergeWithTypeController:(id)arg1 debug:(BOOL)arg2;
- (void)phase1RegisterStructuresWithObject:(id)arg1;
- (void)phase0RecursivelyFixStructureNames:(BOOL)arg1;
- (void)phase0RegisterStructuresWithObject:(id)arg1 usedInMethod:(BOOL)arg2;
- (void)phase:(unsigned long long)arg1 registerTypesWithObject:(id)arg2 usedInMethod:(BOOL)arg3;
- (id)blockSignatureString;
- (void)generateMemberNames;
@property(readonly, nonatomic) NSArray *memberVariableNames;
- (void)_recursivelyMergeWithType:(id)arg1;
- (void)mergeWithType:(id)arg1;
- (BOOL)canMergeWithType:(id)arg1;
- (id)_typeStringForMembersWithVariableNamesToLevel:(long long)arg1 showObjectTypes:(BOOL)arg2;
- (id)_typeStringWithVariableNamesToLevel:(unsigned long long)arg1 showObjectTypes:(BOOL)arg2;
@property(readonly, nonatomic) NSString *keyTypeString;
@property(readonly, nonatomic) NSString *reallyBareTypeString;
@property(readonly, nonatomic) NSString *bareTypeString;
@property(readonly, nonatomic) NSString *typeString;
@property(readonly, nonatomic) NSString *formattedStringForSimpleType;
- (id)formattedStringForMembersAtLevel:(unsigned long long)arg1 formatter:(id)arg2;
- (id)formattedString:(id)arg1 formatter:(id)arg2 level:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long structureDepth;
@property(readonly, nonatomic) int typeIgnoringModifiers;
- (BOOL)isModifierType;
@property(readonly, nonatomic) BOOL isTemplateType;
@property(readonly, nonatomic) BOOL isNamedObject;
@property(readonly, nonatomic) BOOL isIDType;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initModifier:(int)arg1 type:(id)arg2;
- (id)initBlockTypeWithTypes:(id)arg1;
- (id)initFunctionPointerType;
- (id)initPointerType:(id)arg1;
- (id)initArrayType:(id)arg1 count:(id)arg2;
- (id)initBitfieldType:(id)arg1;
- (id)initUnionType:(id)arg1 members:(id)arg2;
- (id)initStructType:(id)arg1 members:(id)arg2;
- (id)initIDTypeWithProtocols:(id)arg1;
- (id)initIDType:(id)arg1;
- (id)initSimpleType:(int)arg1;
- (id)init;

@end

