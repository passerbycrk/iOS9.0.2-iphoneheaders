/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPointUtility : NSObject
+(void*)controlPoints:(id)arg1 usesZilch:(char)arg2 ;
+(unsigned)pointCount:(id)arg1 usesZilch:(char)arg2 ;
+(char)zilchPointsSupported;
+(id)unpackBasicPoints:(id)arg1 ;
+(id)unpackPoints:(id)arg1 usesZilch:(char)arg2 ;
+(id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned)arg2 usesZilch:(char)arg3 ;
+(id)unpackZilchPoints:(id)arg1 ;
+(id)zilchData:(id)arg1 fromPointIndex:(unsigned)arg2 ;
+(SCD_Struct_GE16)pointAt:(unsigned)arg1 pointData:(id)arg2 usesZilch:(char)arg3 ;
@end
