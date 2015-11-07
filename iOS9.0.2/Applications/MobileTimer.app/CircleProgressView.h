/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface CircleProgressView : UIView {

	float _progress;
	float _animateNextPathChange;
	UIColor* _color;
	float _thickness;

}

@property (assign,nonatomic) float progress;                           //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) float animateNextPathChange;              //@synthesize animateNextPathChange=_animateNextPathChange - In the implementation block
@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float thickness;                          //@synthesize thickness=_thickness - In the implementation block
-(void)setAnimateNextPathChange:(float)arg1 ;
-(float)animateNextPathChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setProgress:(float)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(float)progress;
-(void)setThickness:(float)arg1 ;
-(float)thickness;
@end
