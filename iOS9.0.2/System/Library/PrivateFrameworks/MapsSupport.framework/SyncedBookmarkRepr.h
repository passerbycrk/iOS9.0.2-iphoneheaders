/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/mapspushd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mapspushd/mapspushd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface SyncedBookmarkRepr : PBCodable <NSCopying> {

	unsigned long long _businessID;
	double _latitude;
	double _longitude;
	double _regionLatitude;
	double _regionLatitudeDelta;
	double _regionLongitude;
	double _regionLongitudeDelta;
	NSString* _contactIdentifier;
	int _directionsMode;
	NSMutableArray* _places;
	unsigned _providerID;
	NSString* _singleLineAddress;
	NSString* _title;
	int _type;
	SCD_Struct_Sy1 _has;

}

@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char hasSingleLineAddress; 
@property (nonatomic,retain) NSString * singleLineAddress;               //@synthesize singleLineAddress=_singleLineAddress - In the implementation block
@property (assign,nonatomic) char hasLatitude; 
@property (assign,nonatomic) double latitude;                            //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) char hasLongitude; 
@property (assign,nonatomic) double longitude;                           //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) char hasRegionLatitude; 
@property (assign,nonatomic) double regionLatitude;                      //@synthesize regionLatitude=_regionLatitude - In the implementation block
@property (assign,nonatomic) char hasRegionLongitude; 
@property (assign,nonatomic) double regionLongitude;                     //@synthesize regionLongitude=_regionLongitude - In the implementation block
@property (assign,nonatomic) char hasRegionLatitudeDelta; 
@property (assign,nonatomic) double regionLatitudeDelta;                 //@synthesize regionLatitudeDelta=_regionLatitudeDelta - In the implementation block
@property (assign,nonatomic) char hasRegionLongitudeDelta; 
@property (assign,nonatomic) double regionLongitudeDelta;                //@synthesize regionLongitudeDelta=_regionLongitudeDelta - In the implementation block
@property (assign,nonatomic) char hasProviderID; 
@property (assign,nonatomic) unsigned providerID;                        //@synthesize providerID=_providerID - In the implementation block
@property (assign,nonatomic) char hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;              //@synthesize businessID=_businessID - In the implementation block
@property (nonatomic,readonly) char hasContactIdentifier; 
@property (nonatomic,retain) NSString * contactIdentifier;               //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) char hasDirectionsMode; 
@property (assign,nonatomic) int directionsMode;                         //@synthesize directionsMode=_directionsMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * places;                    //@synthesize places=_places - In the implementation block
-(void)setHasRegionLatitude:(char)arg1 ;
-(void)setRegionLatitude:(double)arg1 ;
-(char)hasDirectionsMode;
-(char)hasRegionLatitude;
-(void)setHasProviderID:(char)arg1 ;
-(void)setRegionLongitude:(double)arg1 ;
-(void)setHasRegionLongitude:(char)arg1 ;
-(id)placesAtIndex:(unsigned)arg1 ;
-(char)hasRegionLongitude;
-(void)setSingleLineAddress:(NSString *)arg1 ;
-(void)setRegionLatitudeDelta:(double)arg1 ;
-(void)setHasRegionLatitudeDelta:(char)arg1 ;
-(char)hasContactIdentifier;
-(char)hasRegionLatitudeDelta;
-(int)directionsMode;
-(double)regionLatitude;
-(char)hasSingleLineAddress;
-(void)addPlaces:(id)arg1 ;
-(double)regionLatitudeDelta;
-(void)setRegionLongitudeDelta:(double)arg1 ;
-(double)regionLongitude;
-(void)setHasRegionLongitudeDelta:(char)arg1 ;
-(void)setDirectionsMode:(int)arg1 ;
-(char)hasRegionLongitudeDelta;
-(double)regionLongitudeDelta;
-(void)setHasDirectionsMode:(char)arg1 ;
-(id)notificationMessage;
-(id)bulletinLaunchURL;
-(NSString *)contactIdentifier;
-(NSString *)singleLineAddress;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTitle;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)providerID;
-(void)setProviderID:(unsigned)arg1 ;
-(unsigned)placesCount;
-(NSMutableArray *)places;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(void)clearPlaces;
-(unsigned long long)businessID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(char)hasBusinessID;
-(void)setHasBusinessID:(char)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(char)hasLatitude;
-(void)setHasLatitude:(char)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(char)hasLongitude;
-(void)setHasLongitude:(char)arg1 ;
-(char)hasProviderID;
-(char)readFrom:(id)arg1 ;
@end

