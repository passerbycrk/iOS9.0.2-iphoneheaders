/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem {

	NSString* _title;
	NSString* _body;
	double _autoDismissInterval;

}
-(void)setAutoDismissInterval:(double)arg1 ;
-(id)dismissButtonText;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(void)performUnlockAction;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(id)initWithTitle:(id)arg1 body:(id)arg2 ;
-(double)autoDismissInterval;
@end
