/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoRemoteAdminPerformResponse : PBCodable <NSCopying> {

	NSData* _responseDictionary;
	unsigned _resultCode;

}

@property (assign,nonatomic) unsigned resultCode;                       //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) char hasResponseDictionary; 
@property (nonatomic,retain) NSData * responseDictionary;               //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasResponseDictionary;
-(char)readFrom:(id)arg1 ;
-(NSData *)responseDictionary;
-(void)setResponseDictionary:(NSData *)arg1 ;
-(void)setResultCode:(unsigned)arg1 ;
-(unsigned)resultCode;
@end

