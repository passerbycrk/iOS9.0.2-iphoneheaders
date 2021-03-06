/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, NSURL;

@interface PKPaymentRemoteCredential : PKPaymentCredential {

	NSString* _identifier;
	int _status;
	NSURL* _passURL;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int status;                       //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                    //@synthesize passURL=_passURL - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSURL *)passURL;
@end

