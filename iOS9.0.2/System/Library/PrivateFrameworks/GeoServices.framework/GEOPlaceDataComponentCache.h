/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOPlaceDataDBWriter, GEOPlaceDataDBReader, NSObject;

@interface GEOPlaceDataComponentCache : NSObject {

	GEOPlaceDataDBWriter* _writer;
	GEOPlaceDataDBReader* _reader;
	NSObject*<OS_dispatch_queue> _queue;
	int _resultProviderID;

}

@property (nonatomic,readonly) int resultProviderID;              //@synthesize resultProviderID=_resultProviderID - In the implementation block
-(void)dealloc;
-(id)init;
-(void)deletePhoneNumberMapping;
-(void)shrinkBySize:(unsigned long long)arg1 callback:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)componentsForKeys:(id)arg1 finished:(/*^block*/id)arg2 ;
-(id)componentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(void)rememberComponent:(id)arg1 forKey:(_GEOPlaceDataComponentKey)arg2 ;
-(void)forgetComponentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(void)evictAllEntries;
-(id)initWithPath:(id)arg1 resultProviderID:(int)arg2 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(int)resultProviderID;
-(id)allCacheEntries;
-(unsigned long long)muidForPhoneNumber:(unsigned long long)arg1 ;
-(id)placeDataForMUID:(unsigned long long)arg1 ;
-(id)placeDataForPhoneNumber:(unsigned long long)arg1 ;
-(id)placeDataForKey:(GEOTileKey)arg1 ;
-(void)setPlaceData:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2 ;
-(void)rememberPlaceData:(id)arg1 ;
-(void)evictPlaceDataForMUID:(unsigned long long)arg1 ;
-(void)evictPlaceDataForKey:(GEOTileKey)arg1 ;
@end

