/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSMutableArray, NSString;

@interface SYBatchSyncChunk : PBCodable <NSCopying> {

	unsigned _chunkIndex;
	SYMessageHeader* _header;
	NSMutableArray* _objects;
	NSString* _syncID;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                     //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) unsigned chunkIndex;                   //@synthesize chunkIndex=_chunkIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;              //@synthesize objects=_objects - In the implementation block
-(NSMutableArray *)objects;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSyncID:(NSString *)arg1 ;
-(NSString *)syncID;
-(void)setChunkIndex:(unsigned)arg1 ;
-(unsigned)chunkIndex;
-(void)addObjects:(id)arg1 ;
-(unsigned)objectsCount;
-(void)clearObjects;
-(id)objectsAtIndex:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(void)setObjects:(NSMutableArray *)arg1 ;
@end

