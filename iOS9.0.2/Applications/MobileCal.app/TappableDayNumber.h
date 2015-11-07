/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, DayCircleView, UIView, UIColor, NSString;

@interface TappableDayNumber : UIControl {

	UILabel* _number;
	UILabel* _numberCircled;
	UILabel* _overlay;
	UILabel* _overlayCircled;
	DayCircleView* _circle;
	DayCircleView* _pressCircle;
	UIView* _underline;
	char _needsToForceLayout;
	char _isToday;
	char _isWeekend;
	char _circled;
	char _pressed;
	float _underlineThickness;
	UIColor* _weekendColor;

}

@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSString * overlayText; 
@property (assign,nonatomic) float underlineThickness;                                  //@synthesize underlineThickness=_underlineThickness - In the implementation block
@property (nonatomic,retain) UIColor * weekendColor;                                    //@synthesize weekendColor=_weekendColor - In the implementation block
@property (assign,nonatomic) char isToday;                                              //@synthesize isToday=_isToday - In the implementation block
@property (assign,nonatomic) char isWeekend;                                            //@synthesize isWeekend=_isWeekend - In the implementation block
@property (assign,nonatomic) char circled;                                              //@synthesize circled=_circled - In the implementation block
@property (assign,nonatomic) char pressed;                                              //@synthesize pressed=_pressed - In the implementation block
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) CGRect numberFrame; 
@property (nonatomic,readonly) float firstLineBaselineOffsetFromBoundsTop; 
+(id)normalFont;
+(id)circledOverlayFont;
+(id)overlayFont;
-(void)setCircled:(char)arg1 ;
-(void)setIsToday:(char)arg1 ;
-(void)setIsWeekend:(char)arg1 ;
-(char)isWeekend;
-(void)setWeekendColor:(UIColor *)arg1 ;
-(UIColor *)weekendColor;
-(void)setCircled:(char)arg1 animated:(char)arg2 ;
-(char)circled;
-(void)setOverlayText:(NSString *)arg1 ;
-(void)setUnderlineThickness:(float)arg1 ;
-(NSString *)overlayText;
-(void)_updateCircleColor;
-(void)_loadCircledNumberIfNeeded;
-(void)_loadCircledOverlayIfNeeded;
-(id)_pressColor;
-(void)_loadOverlayIfNeeded;
-(void)_loadUnderlineIfNeeded;
-(void)_updateSubviewAlpha;
-(void)_loadCircleIfNeeded;
-(void)_loadPressIfNeeded;
-(void)_forceLayoutIfNeeded;
-(CGSize)_cachedSizeForLabel:(id)arg1 ;
-(CGRect)numberFrame;
-(float)firstLineBaselineOffsetFromBoundsTop;
-(void)_createSubviews;
-(void)_updateTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)_textColor;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)tintColorDidChange;
-(void)setPressed:(char)arg1 ;
-(char)pressed;
-(UILabel *)titleLabel;
-(void)setPressed:(char)arg1 animated:(char)arg2 ;
-(char)isToday;
-(float)underlineThickness;
-(CGRect)contentFrame;
@end
