/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsDebugValuesViewController.h>

@interface MapsMapDisplayDebugController : MapsDebugValuesViewController
+(id)navigationDestinationTitle;
-(void)prepareContent;
-(id)valueForKeyInAllMapLayers:(id)arg1 ;
-(void)addAllMapsSwitchRowToSection:(id)arg1 title:(id)arg2 forVectorKitDebugKey:(id)arg3 ;
-(void)_setAllMapLayersNeedLayout;
-(void)setMapDisplayStyleForAllLayers:(SCD_Struct_St40)arg1 ;
-(void)setValue:(id)arg1 forKeyInAllMapLayers:(id)arg2 ;
-(void)addAllMapsSwitchRowToSection:(id)arg1 title:(id)arg2 key:(id)arg3 ;
-(SCD_Struct_St40)mapDisplayStyleInAllLayers;
-(id)init;
@end

