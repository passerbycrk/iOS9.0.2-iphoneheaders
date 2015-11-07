/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CLGeocoderInternal;

@interface CLGeocoder : NSObject {

	CLGeocoderInternal* _internal;

}

@property (getter=isGeocoding,nonatomic,readonly) char geocoding; 
-(void)geocodeAddressDictionary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyNoResult;
-(void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3 ;
-(void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2 ;
-(void)_ensureMainThreadExecutionContextForBlock:(/*^block*/id)arg1 ;
-(void)_ticket:(id)arg1 didReturnError:(id)arg2 ;
-(void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyCancel;
-(void)_notifyResult:(id)arg1 error:(id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyPartialResult:(id)arg1 ;
-(void)cancelGeocode;
-(char)isGeocoding;
-(void)geocodeAddressString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyError:(id)arg1 ;
-(void)_notifyResult:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
