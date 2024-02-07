//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface CDTopoSortNode : NSObject
{
    id <CDTopologicalSort> _sortableObject;
    NSMutableSet *_dependancies;
    unsigned long long _color;
}

@property unsigned long long color; // @synthesize color=_color;
@property(readonly) id <CDTopologicalSort> sortableObject; // @synthesize sortableObject=_sortableObject;
- (void).cxx_destruct;
- (void)topologicallySortNodes:(id)arg1 intoArray:(id)arg2;
- (long long)ascendingCompareByIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *dependancyDescription;
- (void)addDependanciesFromArray:(id)arg1;
- (void)removeDependancy:(id)arg1;
- (void)addDependancy:(id)arg1;
- (id)dependancies;
@property(readonly, nonatomic) NSString *identifier;
- (id)description;
- (id)initWithObject:(id)arg1;

@end
