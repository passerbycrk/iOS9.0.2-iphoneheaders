/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MapsDebugTableRow.h>

@class NSString;

@interface MapsDebugSliderTableRow : MapsDebugTableRow {

	float _minimum;
	float _maximum;
	NSString* _subtitleFormatString;
	/*^block*/id _set;
	/*^block*/id _get;

}

@property (assign,nonatomic) float minimum; 
@property (assign,nonatomic) float maximum; 
@property (nonatomic,copy) id set;                                       //@synthesize set=_set - In the implementation block
@property (nonatomic,copy) id get;                                       //@synthesize get=_get - In the implementation block
@property (nonatomic,copy) NSString * subtitleFormatString;              //@synthesize subtitleFormatString=_subtitleFormatString - In the implementation block
-(NSString *)subtitleFormatString;
-(void)setSubtitleFormatString:(NSString *)arg1 ;
-(void)_sliderDidChangeValue:(id)arg1 ;
-(float)minimum;
-(void)setMinimum:(float)arg1 ;
-(float)maximum;
-(void)setMaximum:(float)arg1 ;
-(void)setSet:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(id)set;
-(id)reuseIdentifier;
-(void)configureCell:(id)arg1 ;
-(int)cellStyle;
-(id)get;
-(void)setGet:(id)arg1 ;
@end
