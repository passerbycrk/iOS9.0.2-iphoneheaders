/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class BWDroppedSample;

@interface BWNodeDroppedSampleMessage : BWNodeMessage {

	BWDroppedSample* _droppedSample;

}

@property (readonly) BWDroppedSample * droppedSample; 
+(id)newMessageWithDroppedSample:(id)arg1 ;
-(void)dealloc;
-(BWDroppedSample *)droppedSample;
-(id)_initWithDroppedSample:(id)arg1 ;
@end

