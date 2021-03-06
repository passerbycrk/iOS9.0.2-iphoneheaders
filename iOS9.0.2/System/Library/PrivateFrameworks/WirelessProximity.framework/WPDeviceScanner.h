/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/XPCClientDelegate.h>

@protocol WPDeviceScannerDelegate, OS_dispatch_queue;
@class XPCClient, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface WPDeviceScanner : NSObject <XPCClientDelegate> {

	id<WPDeviceScannerDelegate> _delegate;
	XPCClient* _xpcClient;
	int _state;
	NSMutableArray* _liveDevices;
	NSMutableDictionary* _activeScans;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign) int state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * liveDevices;                   //@synthesize liveDevices=_liveDevices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeScans;              //@synthesize activeScans=_activeScans - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)connectionInterrupted;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)changeState:(int)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)unregisterAllDeviceChanges;
-(void)timerFinished:(id)arg1 ;
-(NSMutableDictionary *)activeScans;
-(NSMutableArray *)liveDevices;
-(void)postDevice:(id)arg1 ;
-(void)postDevices:(id)arg1 ;
-(void)registerForDevicesMatching:(id)arg1 options:(id)arg2 ;
-(void)unregisterForDevices:(id)arg1 ;
-(void)setLiveDevices:(NSMutableArray *)arg1 ;
-(void)setActiveScans:(NSMutableDictionary *)arg1 ;
@end

