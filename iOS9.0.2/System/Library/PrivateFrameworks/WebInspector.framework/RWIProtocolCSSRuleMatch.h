/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolCSSRule, NSArray;

@interface RWIProtocolCSSRuleMatch : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolCSSRule * rule; 
@property (nonatomic,copy) NSArray * matchingSelectors; 
-(RWIProtocolCSSRule *)rule;
-(id)initWithRule:(id)arg1 matchingSelectors:(id)arg2 ;
-(void)setRule:(RWIProtocolCSSRule *)arg1 ;
-(void)setMatchingSelectors:(NSArray *)arg1 ;
-(NSArray *)matchingSelectors;
@end
