/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSString, NSObject;

@interface CNLoggingContext : NSObject {

	NSString* _subsystem;
	NSString* _category;
	asl_object_sRef _aslClient;
	NSObject*<OS_dispatch_queue> _aslQueue;

}

@property (nonatomic,copy,readonly) NSString * category;               //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * subsystem;              //@synthesize subsystem=_subsystem - In the implementation block
+(id)loggingContextWithSubsystem:(id)arg1 category:(id)arg2 ;
-(asl_object_sRef)aslClient;
-(void)dealloc;
-(NSString *)category;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 ;
-(void)setupASL;
-(NSString *)subsystem;
-(id)aslQueue;
-(id)loggingName;
@end

