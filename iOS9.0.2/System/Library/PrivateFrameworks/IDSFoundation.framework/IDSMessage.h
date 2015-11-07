/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying> {

	NSNumber* _wantsDeliveryStatus;
	NSDictionary* _deliveryStatusContext;
	NSNumber* _version;

}

@property (copy) NSNumber * wantsDeliveryStatus;                    //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (copy) NSDictionary * deliveryStatusContext;              //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (copy) NSNumber * version;                                //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(void)setWantsDeliveryStatus:(NSNumber *)arg1 ;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(NSNumber *)wantsDeliveryStatus;
-(NSDictionary *)deliveryStatusContext;
-(char)wantsAPSRetries;
-(char)wantsHTTPHeaders;
-(id)userAgentHeaderString;
-(char)wantsUserAgentInHeaders;
-(id)messageBody;
@end
