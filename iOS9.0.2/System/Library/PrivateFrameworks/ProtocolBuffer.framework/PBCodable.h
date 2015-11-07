/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
#import <libobjc.A.dylib/PQLValuable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PBCodable : NSObject <PQLValuable, NSSecureCoding>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * data; 
+(id)newFromSqliteValue:(MemRef)arg1 ;
+(char)supportsSecureCoding;
+(id)options;
-(id)nmr_valueForPotentiallyUndefinedKey:(id)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)redact;
-(id)_redact:(id)arg1 ;
-(char)_isRedactable:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(id)formattedText;
-(char)readFrom:(id)arg1 ;
@end
