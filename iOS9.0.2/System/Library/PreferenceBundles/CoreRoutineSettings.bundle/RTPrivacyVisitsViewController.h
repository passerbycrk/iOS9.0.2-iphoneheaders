/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutineSettings/RTMapAndTableViewController.h>

@class RTPrivacyLOI;

@interface RTPrivacyVisitsViewController : RTMapAndTableViewController {

	RTPrivacyLOI* _privacyLOI;

}

@property (nonatomic,retain) RTPrivacyLOI * privacyLOI;              //@synthesize privacyLOI=_privacyLOI - In the implementation block
-(void)setPrivacyLOI:(RTPrivacyLOI *)arg1 ;
-(RTPrivacyLOI *)privacyLOI;
-(void)_removePrivacyLOI:(id)arg1 ;
-(void)_displayPrivacyLOI:(id)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

