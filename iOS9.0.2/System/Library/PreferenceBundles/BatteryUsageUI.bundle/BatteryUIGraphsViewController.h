/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSDictionary, UIScrollView, UIActivityIndicatorView, BatteryUsageRadarComposeViewController;

@interface BatteryUIGraphsViewController : UIViewController {

	NSDictionary* _currentDictionary;
	UIScrollView* _rootScrollView;
	UIActivityIndicatorView* _activityIndicator;
	BatteryUsageRadarComposeViewController* _radarController;

}

@property (nonatomic,retain) UIScrollView * rootScrollView;                                         //@synthesize rootScrollView=_rootScrollView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                           //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) BatteryUsageRadarComposeViewController * radarController;              //@synthesize radarController=_radarController - In the implementation block
-(BatteryUsageRadarComposeViewController *)radarController;
-(void)reportIssue;
-(UIScrollView *)rootScrollView;
-(void)setRootScrollView:(UIScrollView *)arg1 ;
-(void)setUpModelingView:(id)arg1 ;
-(void)setRadarController:(BatteryUsageRadarComposeViewController *)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(char)validateDictionary:(id)arg1 ;
@end
