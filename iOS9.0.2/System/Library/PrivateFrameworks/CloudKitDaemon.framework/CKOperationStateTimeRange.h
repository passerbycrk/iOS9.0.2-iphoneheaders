/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MMCSOperationStateTimeRange.h>

@class NSDate, NSString;

@interface CKOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange> {

	unsigned _operationState;
	NSDate* _startDate;
	double _duration;

}

@property (readonly) unsigned operationState;                       //@synthesize operationState=_operationState - In the implementation block
@property (retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (readonly) double queueing; 
@property (readonly) double executing; 
@property (readonly) double absoluteStart; 
@property (readonly) double relativeStart; 
@property (readonly) double absoluteStop; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)startDate;
-(NSString *)description;
-(double)duration;
-(id)CKPropertiesDescription;
-(double)queueing;
-(double)executing;
-(unsigned)operationState;
-(id)initWithOperationState:(unsigned)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(double)absoluteStart;
-(double)absoluteStop;
-(int)compareStartTime:(id)arg1 ;
-(int)compareStopTime:(id)arg1 ;
-(double)relativeStart;
-(void)setStartDate:(NSDate *)arg1 ;
@end
