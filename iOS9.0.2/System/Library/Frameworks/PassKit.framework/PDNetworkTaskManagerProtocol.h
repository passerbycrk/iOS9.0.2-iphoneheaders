/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PDNetworkTaskManagerProtocol <NSObject>
@required
-(void)task:(id)arg1 gotResult:(id)arg2;
-(void)taskSucceeded:(id)arg1;
-(void)taskFailed:(id)arg1;
-(void)task:(id)arg1 encounteredError:(id)arg2;
-(void)task:(id)arg1 encounteredWarnings:(id)arg2;
-(void)taskChangedState:(id)arg1;
-(void)taskFailedForAuthentication:(id)arg1;

@end

