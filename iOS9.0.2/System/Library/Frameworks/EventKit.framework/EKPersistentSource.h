/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class CDBSourceConstraints, NSString, NSNumber;

@interface EKPersistentSource : EKPersistentObject {

	CDBSourceConstraints* _constraints;

}

@property (assign,nonatomic) NSString * UUID; 
@property (assign,nonatomic) int sourceType; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (assign,nonatomic) char onlyCreatorCanModify; 
@property (assign,nonatomic) int preferredEventPrivateValue; 
@property (assign,nonatomic) int strictestEventPrivateValue; 
@property (nonatomic,readonly) CDBSourceConstraints * constraints;              //@synthesize constraints=_constraints - In the implementation block
+(id)defaultPropertiesToLoad;
+(id)relations;
+(int)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg1 ;
+(int)_ekPrivacyLevelToCalEventPrivacyLevel:(int)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(int)strictestEventPrivateValue;
-(char)onlyCreatorCanModify;
-(NSNumber *)defaultAlarmOffset;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(void)setOnlyCreatorCanModify:(char)arg1 ;
-(void)setPreferredEventPrivateValue:(int)arg1 ;
-(void)setStrictestEventPrivateValue:(int)arg1 ;
-(NSString *)externalID;
-(int)preferredEventPrivateValue;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(void)reset;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(CDBSourceConstraints *)constraints;
-(NSString *)UUID;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(int)entityType;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(char)refresh;
@end

