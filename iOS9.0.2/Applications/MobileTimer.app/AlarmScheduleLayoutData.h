/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MobileTimer/MobileTimer-Structs.h>
@class NSString;

@interface AlarmScheduleLayoutData : NSObject {

	NSString* _alarmId;
	int _hour;
	int _minute;
	unsigned _daySetting;
	char _active;
	char _snoozed;
	NSString* _title;
	float _timePositionForItems;
	int _daysForItems[7];
	int _cellLayoutForItems[7];

}

@property (nonatomic,retain) NSString * alarmId;                         //@synthesize alarmId=_alarmId - In the implementation block
@property (nonatomic,readonly) int hour;                                 //@synthesize hour=_hour - In the implementation block
@property (nonatomic,readonly) int minute;                               //@synthesize minute=_minute - In the implementation block
@property (assign,nonatomic) unsigned daySetting;                        //@synthesize daySetting=_daySetting - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                //@synthesize active=_active - In the implementation block
@property (assign,getter=isSnoozed,nonatomic) char snoozed;              //@synthesize snoozed=_snoozed - In the implementation block
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
+(char)doesTimePosition:(float)arg1 overlapWithTimePosition:(float)arg2 overlapPercent:(float)arg3 ;
-(int)compareToHour:(int)arg1 minute:(int)arg2 ;
-(int)layout:(id)arg1 dayForItem:(int)arg2 ;
-(int)layout:(id)arg1 itemForDay:(int)arg2 ;
-(int)compareToTime:(id)arg1 ;
-(int)cellLayoutForDay:(int)arg1 ;
-(void)setCellLayout:(int)arg1 forDay:(int)arg2 ;
-(id)allDaysForLayout:(id)arg1 ;
-(char)doesOverlapWithLayoutData:(id)arg1 fullOverlapOnly:(char)arg2 ;
-(CGRect)layout:(id)arg1 frameForItem:(int)arg2 ;
-(id)layout:(id)arg1 itemsInDayRange:(SCD_Struct_Al5)arg2 ;
-(int)visualFirstItemWithLayout:(id)arg1 ;
-(void)setSnoozed:(char)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)debugDescription;
-(char)isActive;
-(NSString *)title;
-(void)reset;
-(void)setActive:(char)arg1 ;
-(int)hour;
-(int)minute;
-(void)setHour:(int)arg1 minute:(int)arg2 ;
-(void)setDaySetting:(unsigned)arg1 ;
-(char)isSnoozed;
-(unsigned)daySetting;
-(NSString *)alarmId;
-(void)setAlarmId:(NSString *)arg1 ;
@end
