/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FLLogController : NSObject {

	char _logToFile;
	char _logToSyslog;
	unsigned _maxLogLevel;

}
+(id)sharedLogger;
-(id)init;
-(void)_reloadLogPreferences;
-(void)logMessageWithLevel:(unsigned)arg1 format:(id)arg2 args:(void*)arg3 ;
@end

