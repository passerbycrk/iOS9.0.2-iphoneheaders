/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HMDCharacteristicRequest, NSError;

@interface HMDCharacteristicResponse : NSObject {

	HMDCharacteristicRequest* _request;
	id _value;
	NSError* _error;

}

@property (nonatomic,readonly) HMDCharacteristicRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
+(id)responseWithRequest:(id)arg1 error:(id)arg2 ;
-(NSError *)error;
-(HMDCharacteristicRequest *)request;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
@end
