/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@class CAMediaTimingFunction, IMAnimationFloatFunction;

@interface IMAnimationPointFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	float _speed;
	IMAnimationFloatFunction* _xFunction;
	IMAnimationFloatFunction* _yFunction;
	CGPoint _startValue;
	CGPoint _endValue;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGPoint startValue;                                  //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGPoint endValue;                                    //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) float speed;                                         //@synthesize speed=_speed - In the implementation block
@property (nonatomic,retain) IMAnimationFloatFunction * xFunction;                //@synthesize xFunction=_xFunction - In the implementation block
@property (nonatomic,retain) IMAnimationFloatFunction * yFunction;                //@synthesize yFunction=_yFunction - In the implementation block
-(void)_reloadFunctions;
-(id)initWithTimingFunction:(id)arg1 startRect:(CGPoint)arg2 endRect:(CGPoint)arg3 speed:(float)arg4 ;
-(IMAnimationFloatFunction *)xFunction;
-(IMAnimationFloatFunction *)yFunction;
-(void)setXFunction:(IMAnimationFloatFunction *)arg1 ;
-(void)setYFunction:(IMAnimationFloatFunction *)arg1 ;
-(CGPoint)solveForTime:(float)arg1 ;
-(CGPoint)endValue;
-(CGPoint)startValue;
-(void)setSpeed:(float)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(float)speed;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setStartValue:(CGPoint)arg1 ;
-(void)setEndValue:(CGPoint)arg1 ;
@end

