/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class AlarmScheduleLayoutAttributes, UIView, UILabel, NSString;

@interface AlarmScheduleCollectionCell : UICollectionViewCell {

	AlarmScheduleLayoutAttributes* _attributes;
	UIView* _tileView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) NSString * alarmID; 
+(float)height;
-(char)bodyContainsPoint:(CGPoint)arg1 ;
-(void)updateColor;
-(void)updateTitleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)description;
-(void)setSelected:(char)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(NSString *)alarmID;
@end
