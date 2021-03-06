/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying> {

	int _level;
	NSMutableArray* _localizedNames;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) char hasLevel; 
@property (assign,nonatomic) int level;                                    //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
+(char)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(id)categoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)localizedNames;
-(void)clearLocalizedNames;
-(unsigned)localizedNamesCount;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(void)setHasLevel:(char)arg1 ;
-(id)localizedNameAtIndex:(unsigned)arg1 ;
-(void)addLocalizedName:(id)arg1 ;
-(char)hasLevel;
-(char)readFrom:(id)arg1 ;
@end

