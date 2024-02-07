//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDFile.h"

@class CDLCDyldInfo, CDLCDylib, CDLCDynamicSymbolTable, CDLCSourceVersion, CDLCSymbolTable, CDLCVersionMinimum, NSArray, NSString;

@interface CDMachOFile : CDFile
{
    unsigned long long _byteOrder;
    NSArray *_loadCommands;
    NSArray *_dylibLoadCommands;
    NSArray *_segments;
    CDLCSymbolTable *_symbolTable;
    CDLCDynamicSymbolTable *_dynamicSymbolTable;
    CDLCDyldInfo *_dyldInfo;
    CDLCDylib *_dylibIdentifier;
    CDLCVersionMinimum *_minVersionMacOSX;
    CDLCVersionMinimum *_minVersionIOS;
    CDLCSourceVersion *_sourceVersion;
    NSArray *_runPaths;
    NSArray *_runPathCommands;
    NSArray *_dyldEnvironment;
    NSArray *_reExportedDylibs;
    unsigned int _magic;
    int _cputype;
    int _cpusubtype;
    unsigned int _filetype;
    unsigned int _ncmds;
    unsigned int _sizeofcmds;
    unsigned int _flags;
    unsigned int _reserved;
    BOOL _uses64BitABI;
}

@property(readonly) BOOL uses64BitABI; // @synthesize uses64BitABI=_uses64BitABI;
@property(retain) CDLCSourceVersion *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain) CDLCVersionMinimum *minVersionIOS; // @synthesize minVersionIOS=_minVersionIOS;
@property(retain) CDLCVersionMinimum *minVersionMacOSX; // @synthesize minVersionMacOSX=_minVersionMacOSX;
@property(retain) CDLCDylib *dylibIdentifier; // @synthesize dylibIdentifier=_dylibIdentifier;
@property(retain) CDLCDyldInfo *dyldInfo; // @synthesize dyldInfo=_dyldInfo;
@property(retain) CDLCDynamicSymbolTable *dynamicSymbolTable; // @synthesize dynamicSymbolTable=_dynamicSymbolTable;
@property(retain) CDLCSymbolTable *symbolTable; // @synthesize symbolTable=_symbolTable;
@property(readonly) NSArray *reExportedDylibs; // @synthesize reExportedDylibs=_reExportedDylibs;
@property(readonly) NSArray *dyldEnvironment; // @synthesize dyldEnvironment=_dyldEnvironment;
@property(readonly) NSArray *runPathCommands; // @synthesize runPathCommands=_runPathCommands;
@property(readonly) NSArray *runPaths; // @synthesize runPaths=_runPaths;
@property(readonly) NSArray *segments; // @synthesize segments=_segments;
@property(readonly) NSArray *dylibLoadCommands; // @synthesize dylibLoadCommands=_dylibLoadCommands;
@property(readonly) NSArray *loadCommands; // @synthesize loadCommands=_loadCommands;
@property(readonly) unsigned int flags; // @synthesize flags=_flags;
@property(readonly) unsigned int filetype; // @synthesize filetype=_filetype;
@property int cpusubtype; // @synthesize cpusubtype=_cpusubtype;
@property int cputype; // @synthesize cputype=_cputype;
@property(readonly) unsigned int magic; // @synthesize magic=_magic;
@property(readonly) unsigned long long byteOrder; // @synthesize byteOrder=_byteOrder;
- (void).cxx_destruct;
- (id)architectureNameDescription;
@property(readonly, nonatomic) Class processorClass;
@property(readonly, nonatomic) BOOL hasObjectiveC2Data;
@property(readonly, nonatomic) BOOL hasObjectiveC1Data;
- (id)externalClassNameForAddress2:(unsigned long long)arg1;
- (BOOL)hasRelocationEntryForAddress2:(unsigned long long)arg1;
- (BOOL)hasRelocationEntryForAddress:(unsigned long long)arg1;
- (id)externalClassNameForAddress:(unsigned long long)arg1;
- (void)logInfoForAddress:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *archName;
@property(readonly, nonatomic) NSString *uuidString;
- (id)headerString:(BOOL)arg1;
- (id)loadCommandString:(BOOL)arg1;
@property(readonly, nonatomic) BOOL canDecryptAllSegments;
@property(readonly, nonatomic) BOOL hasProtectedSegments;
@property(readonly, nonatomic) BOOL isEncrypted;
@property(readonly, nonatomic) NSString *importBaseName;
- (const void *)bytesAtOffset:(unsigned long long)arg1;
- (const void *)bytes;
- (unsigned long long)dataOffsetForAddress:(unsigned long long)arg1;
- (id)stringAtAddress:(unsigned long long)arg1;
- (void)showWarning:(id)arg1;
- (id)segmentContainingAddress:(unsigned long long)arg1;
- (id)segmentWithName:(id)arg1;
- (id)flagDescription;
- (id)filetypeDescription;
- (BOOL)bestMatchForArch:(CDStruct_7a118b40 *)arg1;
- (unsigned long long)ptrSize;
@property(readonly, nonatomic) int maskedCPUSubtype;
@property(readonly, nonatomic) int maskedCPUType;
- (id)machOFileWithArch:(CDStruct_7a118b40)arg1;
- (id)description;
- (void)_readLoadCommands:(id)arg1 count:(unsigned int)arg2;
- (id)initWithData:(id)arg1 filename:(id)arg2 searchPathState:(id)arg3;
- (id)init;

@end
