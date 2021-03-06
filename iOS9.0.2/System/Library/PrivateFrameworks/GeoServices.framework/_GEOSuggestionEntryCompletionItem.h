/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOCompletionItem.h>

@class NSArray, GEOSearchCategory, NSData, GEOSuggestionEntry, NSString, GEOMapServiceTraits;

@interface _GEOSuggestionEntryCompletionItem : NSObject <GEOCompletionItem> {

	GEOSuggestionEntry* _entry;
	NSString* _query;
	int _entryListIndex;
	int _entryIndex;
	GEOMapServiceTraits* _traits;
	NSData* _completionMetaData;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,readonly) GEOSearchCategory * searchCategory; 
@property (nonatomic,readonly) NSData * entryMetadata; 
@property (nonatomic,readonly) NSData * metadata; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)queryLine;
-(id)calloutTitle;
-(void)sendFeedback;
-(id)initWithSuggestionEntry:(id)arg1 query:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 completion:(id)arg5 traits:(id)arg6 ;
-(id<GEOMapItem>)geoMapItem;
-(GEOSearchCategory *)searchCategory;
-(NSData *)entryMetadata;
-(id)highlightsForLine:(unsigned)arg1 ;
-(char)getCoordinate:(SCD_Struct_GE16*)arg1 ;
-(NSArray *)displayLines;
-(NSData *)metadata;
@end

