/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSArray, NSDate, NSString, NSData;

@interface CPLMasterChange : CPLItemChange {

	NSArray* _resources;
	NSDate* _creationDate;
	NSString* _itemType;
	NSDate* _importDate;
	NSString* _filename;
	NSString* _importGroupIdentifier;
	NSString* _mediaMetaDataType;
	NSData* _mediaMetaData;
	int _originalOrientation;
	unsigned _fullSizeJPEGSource;

}

@property (nonatomic,copy) NSArray * resources;                           //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSString * itemType;                           //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) char isImage; 
@property (nonatomic,readonly) char isVideo; 
@property (nonatomic,copy) NSDate * importDate;                           //@synthesize importDate=_importDate - In the implementation block
@property (nonatomic,copy) NSString * filename;                           //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * importGroupIdentifier;              //@synthesize importGroupIdentifier=_importGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaMetaDataType;                  //@synthesize mediaMetaDataType=_mediaMetaDataType - In the implementation block
@property (nonatomic,retain) NSData * mediaMetaData;                      //@synthesize mediaMetaData=_mediaMetaData - In the implementation block
@property (assign,nonatomic) int originalOrientation;                     //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) unsigned fullSizeJPEGSource;                 //@synthesize fullSizeJPEGSource=_fullSizeJPEGSource - In the implementation block
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(char)isVideo;
-(int)dequeueOrder;
-(id)propertiesForChangeType:(unsigned)arg1 ;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(id)propertiesDescription;
-(void)prepareForStorage;
-(void)awakeFromStorage;
-(unsigned)dataClassType;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(char)isImage;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(int)originalOrientation;
-(void)setOriginalOrientation:(int)arg1 ;
-(void)setImportDate:(NSDate *)arg1 ;
-(void)setFullSizeJPEGSource:(unsigned)arg1 ;
-(unsigned)fullSizeJPEGSource;
-(NSDate *)importDate;
-(void)setMediaMetaData:(NSData *)arg1 ;
-(void)setMediaMetaDataType:(NSString *)arg1 ;
-(void)setImportGroupIdentifier:(NSString *)arg1 ;
-(char)supportsResources;
-(NSData *)mediaMetaData;
-(NSString *)mediaMetaDataType;
-(NSString *)importGroupIdentifier;
-(NSString *)itemType;
-(void)setItemType:(NSString *)arg1 ;
@end

