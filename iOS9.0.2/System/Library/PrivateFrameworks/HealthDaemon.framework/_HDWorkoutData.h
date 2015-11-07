/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDServer;
@class _HKWorkoutSession, NSString;

@interface _HDWorkoutData : NSObject {

	char _isFirstParty;
	_HKWorkoutSession* _workoutSession;
	NSString* _clientIdentifier;
	id<HDServer> _server;

}

@property (nonatomic,retain) _HKWorkoutSession * workoutSession;              //@synthesize workoutSession=_workoutSession - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HDServer> server;                      //@synthesize server=_server - In the implementation block
@property (assign,nonatomic) char isFirstParty;                               //@synthesize isFirstParty=_isFirstParty - In the implementation block
-(id<HDServer>)server;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)initWithWorkoutSession:(id)arg1 clientIdentifier:(id)arg2 server:(id)arg3 isFirstParty:(char)arg4 ;
-(void)deliverError:(id)arg1 ;
-(void)deliverChangeToState:(int)arg1 fromState:(int)arg2 date:(id)arg3 ;
-(_HKWorkoutSession *)workoutSession;
-(void)setWorkoutSession:(_HKWorkoutSession *)arg1 ;
-(void)setServer:(id<HDServer>)arg1 ;
-(char)isFirstParty;
-(void)setIsFirstParty:(char)arg1 ;
-(NSString *)clientIdentifier;
@end
