/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PeopleSuggester/PSESourceSettings.h>

@class NSSet;

@interface PSESuggesterSourceSettings : PSESourceSettings {

	char _useLocation;
	char _useOutgoingInteractionsOnly;
	NSSet* _interactionMechanisms;

}

@property (readonly) char useLocation;                              //@synthesize useLocation=_useLocation - In the implementation block
@property (readonly) char useOutgoingInteractionsOnly;              //@synthesize useOutgoingInteractionsOnly=_useOutgoingInteractionsOnly - In the implementation block
@property (readonly) NSSet * interactionMechanisms;                 //@synthesize interactionMechanisms=_interactionMechanisms - In the implementation block
+(id)_mechanismStringsToNumbers:(id)arg1 ;
-(char)useOutgoingInteractionsOnly;
-(NSSet *)interactionMechanisms;
-(id)initWithSettings:(id)arg1 ;
-(char)useLocation;
@end

