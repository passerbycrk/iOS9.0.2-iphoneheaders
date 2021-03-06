/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBMiniAlertController : NSObject {

	NSMutableDictionary* _identifierToPresenters;
	unsigned _sbMiniAlertVisible : 1;

}
+(id)sharedInstance;
-(char)miniAlertVisible;
-(void)deactivateAlertItemsForDisplay:(id)arg1 ;
-(void)displayDidDismissMiniAlert:(id)arg1 ;
-(void)noteMiniAlertStateChanged;
-(void)_setAlertVisibleNotifyState:(char)arg1 withFence:(char)arg2 ;
-(char)_applicationIsShowingAlert:(id)arg1 ;
-(void)_hideMiniAlertsForApp:(id)arg1 withTransition:(id)arg2 ;
-(void)_addApplicationShowingAlert:(id)arg1 ;
-(void)_removeApplicationShowingAlert:(id)arg1 ;
-(void)_showApplicationMiniAlertsIfNeededAndFence:(char)arg1 ;
-(void)showApplicationMiniAlertsIfNeeded;
-(void)hideApplicationMiniAlerts;
-(void)displayWillShowMiniAlert:(id)arg1 ;
-(void)displayWillDismissMiniAlert:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)canShowAlerts;
@end

