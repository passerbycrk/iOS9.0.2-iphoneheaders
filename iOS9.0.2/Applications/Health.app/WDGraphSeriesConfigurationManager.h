/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface WDGraphSeriesConfigurationManager : NSObject {

	NSDictionary* _zoomLevelConfigurationManagers;

}
-(id)_configurationManagerForZoom:(int)arg1 ;
-(int)_zoomLevelForGraphZoom:(int)arg1 ;
-(void)addConfiguration:(id)arg1 zoomLevel:(int)arg2 ;
-(void)removeConfigurationsForDataUnitGroup:(id)arg1 ;
-(id)configurationForDataUnitGroup:(id)arg1 zoom:(int)arg2 ;
-(id)configurationForGraphSeries:(id)arg1 zoom:(int)arg2 ;
-(id)allGraphSeriesForZoom:(int)arg1 ;
-(id)init;
-(void)reset;
-(id)allDataUnitGroups;
@end

