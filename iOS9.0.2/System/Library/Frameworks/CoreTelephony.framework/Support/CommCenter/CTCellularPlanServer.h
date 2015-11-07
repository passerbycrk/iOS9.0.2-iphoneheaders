/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSString;

@interface CTCellularPlanServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* fXpcListener;
	NSMutableArray* fConnections;
	NSMutableArray* fConnectionsInPurchaseFlow;
	queue* fQueue;
	shared_ptr<ctu::Logger>* fLogger;
	char fIsDataPlanCapable;
	shared_ptr<CellularPlanBootstrapAssertion>* fBootstrapAssertion;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServerInstance;
+(void)initializeServer;
-(void)sendPlanInfoDidUpdateNotification;
-(void)logFn:(const char*)arg1 format:(id)arg2 ;
-(void)setUserInPurchaseFlow:(char)arg1 withConnection:(id)arg2 ;
-(void)fetchNewProfilesWithNewPlanCompletion:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 additionalParameters:(id)arg3 ;
-(id)initWithMachServiceName:(id)arg1 andQueue:(queue*)arg2 ;
-(void)dealloc;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)isNewDataPlanCapable:(/*^block*/id)arg1 ;
-(void)signIdMapForSessionId:(id)arg1 locationRequired:(char)arg2 withCompletion:(/*^block*/id)arg3 latitude:(id)arg4 longitude:(id)arg5 ;
-(void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(char)arg2 ;
-(void)getDeviceInfo:(/*^block*/id)arg1 ;
-(void)getCurrentPlanType:(/*^block*/id)arg1 ;
-(void)launchSequoia;
-(void)expirePlan;
-(void)updatePlansDatabase;
-(void)setActivePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerAddNewDataPlan:(/*^block*/id)arg1 ;
-(void)planItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)isMultipleDataPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)isRoamingPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)isAddButtonEnabled:(/*^block*/id)arg1 ;
-(void)shouldShowPlanList:(/*^block*/id)arg1 ;
-(void)willDisplayPlanItems;
-(void)didSelectPlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
