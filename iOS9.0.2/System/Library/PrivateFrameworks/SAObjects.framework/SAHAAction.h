/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAHAAttributeValue;

@interface SAHAAction : SADomainObject

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,retain) SAHAAttributeValue * value; 
+(id)action;
+(id)actionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)shortDescription;
-(NSString *)attribute;
-(void)setAttribute:(NSString *)arg1 ;
-(NSString *)actionType;
-(SAHAAttributeValue *)value;
-(void)setValue:(SAHAAttributeValue *)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end
