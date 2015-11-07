/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOVLabelLanguage : PBCodable <NSCopying> {

	unsigned _endOffset;
	NSString* _languageLocale;
	unsigned _startOffset;

}

@property (assign,nonatomic) unsigned startOffset;                   //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) unsigned endOffset;                     //@synthesize endOffset=_endOffset - In the implementation block
@property (nonatomic,retain) NSString * languageLocale;              //@synthesize languageLocale=_languageLocale - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)endOffset;
-(unsigned)startOffset;
-(id)dictionaryRepresentation;
-(void)setStartOffset:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEndOffset:(unsigned)arg1 ;
-(NSString *)languageLocale;
-(void)setLanguageLocale:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end
