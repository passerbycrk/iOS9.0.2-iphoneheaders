/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPIdentifier, NSString, CKDPProtectionInfo, CKDPRecordIdentifier, CKDPShareIdentifier, CKDPDateStatistics, CKDPRecordType;

@interface CKDPRecord : PBCodable <NSCopying> {

	NSMutableArray* _conflictLoserEtags;
	CKDPIdentifier* _createdBy;
	NSString* _etag;
	NSMutableArray* _fields;
	CKDPIdentifier* _modifiedBy;
	NSString* _modifiedByDevice;
	int _permission;
	NSMutableArray* _pluginFields;
	CKDPProtectionInfo* _protectionInfo;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPShareIdentifier* _shareId;
	CKDPDateStatistics* _timeStatistics;
	CKDPRecordType* _type;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                                      //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) char hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) char hasType; 
@property (nonatomic,retain) CKDPRecordType * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasCreatedBy; 
@property (nonatomic,retain) CKDPIdentifier * createdBy;                           //@synthesize createdBy=_createdBy - In the implementation block
@property (nonatomic,readonly) char hasTimeStatistics; 
@property (nonatomic,retain) CKDPDateStatistics * timeStatistics;                  //@synthesize timeStatistics=_timeStatistics - In the implementation block
@property (nonatomic,retain) NSMutableArray * fields;                              //@synthesize fields=_fields - In the implementation block
@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                        //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) char hasModifiedBy; 
@property (nonatomic,retain) CKDPIdentifier * modifiedBy;                          //@synthesize modifiedBy=_modifiedBy - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictLoserEtags;                  //@synthesize conflictLoserEtags=_conflictLoserEtags - In the implementation block
@property (nonatomic,readonly) char hasModifiedByDevice; 
@property (nonatomic,retain) NSString * modifiedByDevice;                          //@synthesize modifiedByDevice=_modifiedByDevice - In the implementation block
@property (nonatomic,retain) NSMutableArray * pluginFields;                        //@synthesize pluginFields=_pluginFields - In the implementation block
@property (nonatomic,readonly) char hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                  //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (assign,nonatomic) char hasPermission; 
@property (assign,nonatomic) int permission;                                       //@synthesize permission=_permission - In the implementation block
+(id)recordFromData:(id)arg1 ;
-(id)dataRepresentation;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(CKDPRecordType *)arg1 ;
-(CKDPRecordType *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(char)hasProtectionInfo;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(char)hasRecordIdentifier;
-(CKDPRecordIdentifier *)recordIdentifier;
-(int)permission;
-(void)addFields:(id)arg1 ;
-(void)clearFields;
-(void)_inflateFieldsFromData:(id)arg1 ;
-(id)fieldData;
-(id)fieldForKey:(id)arg1 ;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(char)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(void)setTimeStatistics:(CKDPDateStatistics *)arg1 ;
-(char)hasTimeStatistics;
-(CKDPDateStatistics *)timeStatistics;
-(void)addConflictLoserEtags:(id)arg1 ;
-(void)addPluginFields:(id)arg1 ;
-(void)setCreatedBy:(CKDPIdentifier *)arg1 ;
-(unsigned)fieldsCount;
-(id)fieldsAtIndex:(unsigned)arg1 ;
-(void)setModifiedBy:(CKDPIdentifier *)arg1 ;
-(unsigned)conflictLoserEtagsCount;
-(void)clearConflictLoserEtags;
-(id)conflictLoserEtagsAtIndex:(unsigned)arg1 ;
-(void)setModifiedByDevice:(NSString *)arg1 ;
-(unsigned)pluginFieldsCount;
-(void)clearPluginFields;
-(id)pluginFieldsAtIndex:(unsigned)arg1 ;
-(char)hasCreatedBy;
-(char)hasModifiedBy;
-(char)hasModifiedByDevice;
-(void)setPermission:(int)arg1 ;
-(void)setHasPermission:(char)arg1 ;
-(char)hasPermission;
-(CKDPIdentifier *)createdBy;
-(NSMutableArray *)fields;
-(void)setFields:(NSMutableArray *)arg1 ;
-(CKDPIdentifier *)modifiedBy;
-(NSMutableArray *)conflictLoserEtags;
-(void)setConflictLoserEtags:(NSMutableArray *)arg1 ;
-(NSString *)modifiedByDevice;
-(NSMutableArray *)pluginFields;
-(void)setPluginFields:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(char)hasEtag;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
@end
