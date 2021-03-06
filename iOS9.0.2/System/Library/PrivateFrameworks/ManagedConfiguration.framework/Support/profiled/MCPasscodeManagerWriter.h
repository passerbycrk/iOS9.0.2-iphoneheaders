/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPasscodeManager.h>

@interface MCPasscodeManagerWriter : MCPasscodeManager
+(char)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 ;
+(id)sharedManager;
-(void)_setPrivatePasscodeDict:(id)arg1 ;
-(void)_sendPasscodeChangedNotification;
-(char)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3 ;
-(char)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3 ;
@end

