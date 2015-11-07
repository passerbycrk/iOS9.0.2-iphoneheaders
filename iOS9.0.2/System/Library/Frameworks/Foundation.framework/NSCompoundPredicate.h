/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {

	void* _reserved2;
	unsigned _type;
	NSArray* _subpredicates;

}

@property (readonly) unsigned compoundPredicateType; 
@property (copy,readonly) NSArray * subpredicates; 
+(id)_operatorForType:(unsigned)arg1 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
-(id)br_watchedURL;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void)ab_bindJoinClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(char)ab_hasCallback;
-(id)ab_newQueryWithSortOrder:(unsigned)arg1 ranked:(char)arg2 addressBook:(void*)arg3 propertyIndices:(const _CFDictionary*)arg4 ;
-(void)ab_addCallbackContextToArray:(id)arg1 ;
-(void)ab_bindSelectClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)minimalFormInContext:(id)arg1 ;
-(id)generateMetadataDescription;
-(unsigned)compoundPredicateType;
-(NSArray *)subpredicates;
-(void)allowEvaluation;
-(id)predicateFormat;
-(id)predicateOperator;
-(void)acceptVisitor:(id)arg1 flags:(unsigned)arg2 ;
-(char)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)_predicateOperator;
-(id)_subpredicateDescription:(id)arg1 ;
-(void)_acceptSubpredicates:(id)arg1 flags:(unsigned)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(unsigned)arg1 subpredicates:(id)arg2 ;
@end
