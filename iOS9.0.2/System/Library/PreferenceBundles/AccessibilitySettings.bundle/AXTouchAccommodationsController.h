/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <AccessibilitySettings/AXEditableTableCellWithStepperDelegate.h>

@class NSArray, PSSpecifier, NSString;

@interface AXTouchAccommodationsController : AccessibilityBaseListController <AXEditableTableCellWithStepperDelegate> {

	char _shouldIgnoreNextEnabledChangedNotification;
	NSArray* _tapTimeoutSpecifiers;
	PSSpecifier* _holdDurationPickerSpecifier;
	PSSpecifier* _ignoreRepeatPickerSpecifier;

}

@property (nonatomic,retain) NSArray * tapTimeoutSpecifiers;                               //@synthesize tapTimeoutSpecifiers=_tapTimeoutSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * holdDurationPickerSpecifier;                    //@synthesize holdDurationPickerSpecifier=_holdDurationPickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * ignoreRepeatPickerSpecifier;                    //@synthesize ignoreRepeatPickerSpecifier=_ignoreRepeatPickerSpecifier - In the implementation block
@property (assign,nonatomic) char shouldIgnoreNextEnabledChangedNotification;              //@synthesize shouldIgnoreNextEnabledChangedNotification=_shouldIgnoreNextEnabledChangedNotification - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activationMethod:(id)arg1 ;
-(char)shouldIgnoreNextEnabledChangedNotification;
-(void)setHoldDurationPickerSpecifier:(PSSpecifier *)arg1 ;
-(void)setIgnoreRepeatPickerSpecifier:(PSSpecifier *)arg1 ;
-(void)setTapTimeoutSpecifiers:(NSArray *)arg1 ;
-(void)_updateMasterSwitchFooterTextForSpecifier:(id)arg1 shouldReload:(char)arg2 ;
-(void)setTouchAccommodationsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)touchAccommodationsEnabled:(id)arg1 ;
-(id)_holdDurationSpecifiers;
-(id)_ignoreRepeatSpecifiers;
-(id)_tapActivationMethodSpecifiers;
-(void)_updateMasterSwitchFooterText;
-(void)_showOrHideTapTimeoutAnimated:(char)arg1 ;
-(PSSpecifier *)ignoreRepeatPickerSpecifier;
-(PSSpecifier *)holdDurationPickerSpecifier;
-(NSArray *)tapTimeoutSpecifiers;
-(void)_updateDelayPickerSpecifier:(id)arg1 afterSpecifierWithIdentifier:(id)arg2 enabled:(char)arg3 ;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(id)stringValueForSpecifier:(id)arg1 ;
-(void)_setIgnoreRepeatEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_ignoreRepeatEnabled:(id)arg1 ;
-(id)_durationSpecifiersWithName:(id)arg1 footerText:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 previousSpecifierIdentifier:(id)arg5 pickerSpecifier:(id)arg6 ;
-(void)_setHoldDurationEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_holdDurationEnabled:(id)arg1 ;
-(void)setShouldIgnoreNextEnabledChangedNotification:(char)arg1 ;
-(id)ignoreRepeat:(id)arg1 ;
-(id)holdDuration:(id)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(double)valueForSpecifier:(id)arg1 ;
@end

