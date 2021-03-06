/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOQuickETARequest, GEOETARequest, GEODirectionsRouteRequest, NSString;

@interface GEOQuickETARequester : NSObject {

	GEOQuickETARequest* _request;
	GEOETARequest* _simpleETARequest;
	GEODirectionsRouteRequest* _directionsETARequest;
	NSString* _loggingFacility;

}

@property (nonatomic,copy) NSString * loggingFacility;              //@synthesize loggingFacility=_loggingFacility - In the implementation block
-(void)cancel;
-(void)dealloc;
-(id)initWithRequest:(id)arg1 ;
-(void)_calculateSimpleETAFromAPI:(char)arg1 WithHandler:(/*^block*/id)arg2 ;
-(NSString *)loggingFacility;
-(void)setLoggingFacility:(NSString *)arg1 ;
-(void)_calculateRoutingETAWithHandler:(/*^block*/id)arg1 ;
-(void)calculateETAWithResponseHandler:(/*^block*/id)arg1 ;
-(void)calculateETAFromAPI:(char)arg1 WithResponseHandler:(/*^block*/id)arg2 ;
@end

