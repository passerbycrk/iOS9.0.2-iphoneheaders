/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/DayNavigationViewCell.h>

@class TappableDayNumber, UILabel, UIView, NSString, EKUITodayCirclePulseView;

@interface LargeDayNavigationViewCell : DayNavigationViewCell {

	TappableDayNumber* _dayNumber;
	UILabel* _leftLabel;
	UILabel* _rightLabel;
	UILabel* _overlayLabel;
	UIView* _overlayUnderline;
	float _overlayUnderlineThickness;
	NSString* _leftString;
	NSString* _centerString;
	NSString* _rightString;
	char _hasOverlay;
	char _overlayShowsMonth;
	EKUITodayCirclePulseView* _pulseView;

}
+(id)_boldFont;
+(id)_leftStringForDate:(id)arg1 ;
+(id)_centerStringForDate:(id)arg1 ;
+(id)_rightStringForDate:(id)arg1 ;
+(char)_stringsIncludeSpacing;
+(float)_widthOfSpace;
+(void)_generateFormatStringsIfNeeded;
+(id)_leftDateFormatter;
+(id)_centerDateFormatter;
+(id)_rightDateFormatter;
+(id)_normalFont;
+(void)_updateFormatter;
+(NSRange)_rangeForFirstSequenceOfDCharacters:(id)arg1 ;
+(id)_findFormatForLocale:(id)arg1 usingExampleDate:(id)arg2 ;
+(void)localeChanged;
+(float)circleDiameter;
+(void)_localeChanged;
-(CGRect)circleFrame;
-(void)setCircled:(char)arg1 ;
-(void)setIsToday:(char)arg1 ;
-(void)setIsWeekend:(char)arg1 ;
-(void)touchDownOccurred:(id)arg1 ;
-(void)touchUpOccurred:(id)arg1 ;
-(void)setWeekendColor:(id)arg1 ;
-(id)weekendColor;
-(void)setCircled:(char)arg1 animated:(char)arg2 ;
-(void)setDate:(id)arg1 forceStringUpdate:(char)arg2 ;
-(void)updateOverlay;
-(float)yCenterForDayNumbers;
-(void)pulseToday;
-(void)setOverlayShowsMonth:(char)arg1 animated:(char)arg2 ;
-(void)_updateDisplayedStrings;
-(void)_createSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDate:(id)arg1 ;
-(void)touchCancelled:(id)arg1 ;
-(void)stopPulsing;
@end

