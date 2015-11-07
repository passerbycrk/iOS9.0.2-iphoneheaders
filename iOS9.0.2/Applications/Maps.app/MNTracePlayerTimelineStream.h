/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MNTracePlayerTimelineStreamDelegate;
@class NSArray, NSString, NSTimer;

@interface MNTracePlayerTimelineStream : NSObject {

	id<MNTracePlayerTimelineStreamDelegate> _delegate;
	/*^block*/id _handler;
	NSArray* _data;
	NSString* _timestampKey;
	NSTimer* _timer;
	unsigned _lastReportedIndex;
	unsigned _nextIndex;
	double _timeUntilNextUpdate;

}

@property (assign,nonatomic,__weak) id<MNTracePlayerTimelineStreamDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id handler;                                                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) unsigned lastReportedIndex;                                         //@synthesize lastReportedIndex=_lastReportedIndex - In the implementation block
@property (nonatomic,readonly) unsigned nextIndex;                                                 //@synthesize nextIndex=_nextIndex - In the implementation block
-(void)scheduleUpdateFromCurrentTime:(double)arg1 ;
-(id)initWithData:(id)arg1 timestampKey:(id)arg2 ;
-(unsigned)lastReportedIndex;
-(void)setDelegate:(id<MNTracePlayerTimelineStreamDelegate>)arg1 ;
-(id<MNTracePlayerTimelineStreamDelegate>)delegate;
-(void)stop;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_timerFired;
-(unsigned)nextIndex;
@end
