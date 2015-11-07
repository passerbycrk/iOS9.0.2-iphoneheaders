/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface VOTBrailleGestureInput : NSObject {

	NSArray* _seriesOfTouchPoints;
	NSString* _languageCode;

}

@property (nonatomic,retain) NSArray * seriesOfTouchPoints;              //@synthesize seriesOfTouchPoints=_seriesOfTouchPoints - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                      //@synthesize languageCode=_languageCode - In the implementation block
-(NSArray *)seriesOfTouchPoints;
-(void)setSeriesOfTouchPoints:(NSArray *)arg1 ;
-(id)description;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
@end
