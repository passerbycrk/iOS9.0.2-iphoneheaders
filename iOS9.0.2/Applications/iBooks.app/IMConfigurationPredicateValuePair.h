/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IMConfigurationPredicate;

@interface IMConfigurationPredicateValuePair : NSObject {

	IMConfigurationPredicate* _predicate;
	id _value;

}

@property (nonatomic,retain) IMConfigurationPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) id value;                                          //@synthesize value=_value - In the implementation block
-(id)description;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setPredicate:(IMConfigurationPredicate *)arg1 ;
-(IMConfigurationPredicate *)predicate;
@end

