//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDObjectiveCProcessor.h"

@class NSMutableArray;

@interface CDObjectiveC1Processor : CDObjectiveCProcessor
{
    NSMutableArray *_modules;
}

- (void).cxx_destruct;
- (id)objcImageInfoSection;
- (void)loadProtocols;
- (id)protocolAtAddress:(unsigned int)arg1;
- (id)processCategoryDefinitionAtAddress:(unsigned int)arg1;
- (id)processMethodsAtAddress:(unsigned int)arg1 isFromProtocolDefinition:(BOOL)arg2;
- (id)processMethodsAtAddress:(unsigned int)arg1;
- (id)protocolAddressListAtAddress:(unsigned long long)arg1;
- (id)processClassDefinitionAtAddress:(unsigned int)arg1;
- (id)processSymtabAtAddress:(unsigned int)arg1;
- (void)processModules;
- (void)process;
- (id)initWithMachOFile:(id)arg1;

@end

