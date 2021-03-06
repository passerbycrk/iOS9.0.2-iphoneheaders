/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate;
#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, NSMutableSet;

@interface CLLocationManagerInternal : NSObject {

	CLClientRef fClient;
	id<CLLocationManagerDelegate> fDelegate;
	double fDistanceFilter;
	double fDesiredAccuracy;
	char fUpdatingLocation;
	SCD_Struct_CL2 fLocation;
	NSString* fLocationEventType;
	char fRequestingLocation;
	CFRunLoopTimerRef fLocationRequestTimer;
	double fLocationRequestTimeout;
	char fCapabilitiesValid;
	SCD_Struct_CL4 fCapabilities;
	char fUpdatingHeading;
	double fHeadingFilter;
	int fHeadingOrientation;
	char fPersistentMonitoringEnabled;
	char fAllowsLocationPrompts;
	char fDynamicAccuracyReductionEnabled;
	char fPreviousAuthorizationStatusValid;
	int fPreviousAuthorizationStatus;
	int fActivityType;
	int fPausesLocationUpdatesAutomatically;
	char fPaused;
	char fAllowsBackgroundLocationUpdates;
	char fAllowsMapCorrection;
	char fBatchingLocation;
	char fUpdatingVehicleSpeed;
	char fUpdatingVehicleHeading;
	char fMatchInfoEnabled;
	char fCourtesyPromptNeeded;
	NSMutableSet* fRangedRegions;

}

@property (nonatomic,readonly) NSMutableSet * rangedRegions; 
-(id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3 ;
-(int)PausesLocationUpdatesAutomatically;
-(void)setAllowsBackgroundLocationUpdates:(char)arg1 ;
-(char)allowsBackgroundLocationUpdates;
-(void)stopUpdatingLocationAutoPaused;
-(void)cancelLocationRequest;
-(void)performCourtesyPromptIfNeeded;
-(NSMutableSet *)rangedRegions;
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(void)dealloc;
@end

