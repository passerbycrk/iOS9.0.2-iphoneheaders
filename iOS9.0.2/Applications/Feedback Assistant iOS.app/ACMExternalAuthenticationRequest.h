/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol ACMExternalAuthenticationRequest <ACMBaseAuthenticationRequest>
@property (assign) char useAlertView; 
@property (assign) char userNameFieldEditable; 
@property (retain) NSString * alertViewPrompt; 
@property (assign) char automaticallyCancelWhenSwitchingToBackground; 
@required
-(char)useAlertView;
-(char)automaticallyCancelWhenSwitchingToBackground;
-(void)setUserNameFieldEditable:(char)arg1;
-(void)setAlertViewPrompt:(id)arg1;
-(void)setUseAlertView:(char)arg1;
-(char)userNameFieldEditable;
-(NSString *)alertViewPrompt;
-(void)setAutomaticallyCancelWhenSwitchingToBackground:(char)arg1;

@end
