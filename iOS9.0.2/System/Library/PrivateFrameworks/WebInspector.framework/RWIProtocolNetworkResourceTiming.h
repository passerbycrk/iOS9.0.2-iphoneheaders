/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject

@property (assign,nonatomic) double navigationStart; 
@property (assign,nonatomic) double domainLookupStart; 
@property (assign,nonatomic) double domainLookupEnd; 
@property (assign,nonatomic) double connectStart; 
@property (assign,nonatomic) double connectEnd; 
@property (assign,nonatomic) double secureConnectionStart; 
@property (assign,nonatomic) double requestStart; 
@property (assign,nonatomic) double responseStart; 
-(void)setNavigationStart:(double)arg1 ;
-(id)initWithNavigationStart:(double)arg1 domainLookupStart:(double)arg2 domainLookupEnd:(double)arg3 connectStart:(double)arg4 connectEnd:(double)arg5 secureConnectionStart:(double)arg6 requestStart:(double)arg7 responseStart:(double)arg8 ;
-(double)navigationStart;
-(void)setDomainLookupStart:(double)arg1 ;
-(void)setDomainLookupEnd:(double)arg1 ;
-(void)setConnectStart:(double)arg1 ;
-(void)setSecureConnectionStart:(double)arg1 ;
-(void)setConnectEnd:(double)arg1 ;
-(void)setRequestStart:(double)arg1 ;
-(void)setResponseStart:(double)arg1 ;
-(double)domainLookupStart;
-(double)domainLookupEnd;
-(double)connectStart;
-(double)secureConnectionStart;
-(double)connectEnd;
-(double)requestStart;
-(double)responseStart;
@end
