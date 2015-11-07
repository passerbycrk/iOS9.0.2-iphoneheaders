/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBDismissOnlyAlertItem, NSString;

@interface SBLockdownManager : NSObject {

	int _state;
	char _settingUpActivationState;
	char _isBricked;
	char _hasShownMismatchedSIM;
	SBDismissOnlyAlertItem* _activatingAlertItem;
	NSString* _unqiueDeviceIdentifier;

}
+(id)sharedInstance;
-(char)brickedDevice;
-(void)_postAlertsIfNeeded;
-(char)_shouldShowTelephonyAlerts;
-(char)_hasEverRegistered;
-(char)_isRegisteredToNetwork;
-(void)_setHasEverRegistered:(char)arg1 ;
-(void)_setCurrentAlertItem:(id)arg1 ;
-(void)_activationFailed;
-(char)isDeveloperDevice;
-(void)_serviceAvailabilityChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_setupActivationState;
-(int)lockdownState;
-(void)_resetActivationState;
@end
