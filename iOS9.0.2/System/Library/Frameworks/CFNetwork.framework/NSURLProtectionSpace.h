/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLProtectionSpaceInternal, NSString;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying> {

	NSURLProtectionSpaceInternal* _internal;

}

@property (nonatomic,readonly) CFStringRef safari_protocolAsSecAttrProtocolValue; 
@property (copy,readonly) NSString * realm; 
@property (readonly) char receivesCredentialSecurely; 
@property (readonly) char isProxy; 
@property (copy,readonly) NSString * host; 
@property (readonly) int port; 
@property (copy,readonly) NSString * proxyType; 
@property (copy,readonly) NSString * protocol; 
@property (copy,readonly) NSString * authenticationMethod; 
+(id)safari_HTMLFormProtectionSpaceForURL:(id)arg1 ;
+(char)supportsSecureCoding;
-(CFStringRef)safari_protocolAsSecAttrProtocolValue;
-(int)safari_compareToHighLevelDomainFromProtectionSpace:(id)arg1 ;
-(id)safari_addressString;
-(id)safari_protectionSpaceByReplacingHostWithHighlevelDomain;
-(int)safari_compareToHighLevelDomainFromProtectionSpaceOrderingDecimalCharactersLast:(id)arg1 ;
-(id)safari_URL;
-(id)safari_creationDateOfCredentialWithUser:(id)arg1 ;
-(char)safari_allowsCredentialSaving;
-(id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)arg1 ;
-(CFURLProtectionSpaceRef)_cfurlprtotectionspace;
-(id)_internalInit;
-(id)initWithProxyHost:(id)arg1 port:(int)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(char)receivesCredentialSecurely;
-(id)distinguishedNames;
-(CFURLProtectionSpaceRef)_CFURLProtectionSpace;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(char)isProxy;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)host;
-(NSString *)authenticationMethod;
-(int)port;
-(NSString *)protocol;
-(id)initWithHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(NSString *)realm;
-(NSString *)proxyType;
-(SecTrustRef)serverTrust;
@end

