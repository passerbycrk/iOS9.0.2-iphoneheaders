/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <Diagnostics/Diagnostics-Structs.h>
@class NSObject, DAGyroSensorDataTest, NSOperationQueue;

@interface OSDBumpMonitor : NSObject {

	CLRunningVector3d<float>* _gyroFilter;
	NSObject*<OS_dispatch_queue> _monitorQueue;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	CFRunLoopRef _runloop;
	DAGyroSensorDataTest* _gyro;
	NSOperationQueue* _gyroDataOperationQueue;
	BOOL _activeBumpEvent;
	/*^block*/id _handler;
	NSOperationQueue* _handlerOperationQueue;
	BOOL _monitorStarted;
	float _gyroSampleInterval;
	float _varianceThreshold;
	unsigned _varianceBufferSize;
	unsigned _bumpsDetected;

}

@property (assign,nonatomic) BOOL monitorStarted;                        //@synthesize monitorStarted=_monitorStarted - In the implementation block
@property (nonatomic,readonly) float gyroSampleInterval;                 //@synthesize gyroSampleInterval=_gyroSampleInterval - In the implementation block
@property (nonatomic,readonly) float varianceThreshold;                  //@synthesize varianceThreshold=_varianceThreshold - In the implementation block
@property (nonatomic,readonly) unsigned varianceBufferSize;              //@synthesize varianceBufferSize=_varianceBufferSize - In the implementation block
@property (assign,nonatomic) unsigned bumpsDetected;                     //@synthesize bumpsDetected=_bumpsDetected - In the implementation block
-(BOOL)monitorStarted;
-(unsigned)varianceBufferSize;
-(void)setBumpsDetected:(unsigned)arg1 ;
-(void)_spinUpBumpMonitor;
-(void)setMonitorStarted:(BOOL)arg1 ;
-(float)varianceThreshold;
-(unsigned)bumpsDetected;
-(void)_gyroDataCallback:(id)arg1 ;
-(float)gyroSampleInterval;
-(id)initWithSampleInterval:(float)arg1 varianceThreshold:(float)arg2 varianceBufferSize:(unsigned)arg3 ;
-(BOOL)startMonitorOnQueue:(id)arg1 withHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)stopMonitor;
-(void)dealloc;
-(id)init;
@end
