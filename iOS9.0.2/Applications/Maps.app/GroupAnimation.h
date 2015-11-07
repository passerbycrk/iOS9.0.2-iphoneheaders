/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface GroupAnimation : NSObject {

	NSMutableArray* _preparations;
	NSMutableArray* _animations;
	NSMutableArray* _completions;
	char _didPrepare;
	char _didAnimate;
	char _didComplete;
	char _preventsAnimationDuringPreparation;
	char _animated;

}

@property (assign,getter=isAnimated,nonatomic) char animated;                      //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) char preventsAnimationDuringPreparation;              //@synthesize preventsAnimationDuringPreparation=_preventsAnimationDuringPreparation - In the implementation block
+(id)animationForImplicitAnimationState;
+(id)animationForAnimatedFlag:(char)arg1 ;
+(double)defaultAnimationDuration;
+(id)animation;
-(void)runWithDefaultOptions;
-(void)addPreparation:(/*^block*/id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPreventsAnimationDuringPreparation:(char)arg1 ;
-(void)runWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned)arg3 ;
-(void)addAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(char)preventsAnimationDuringPreparation;
-(char)_hasPrepared;
-(void)prepare;
-(id)init;
-(void)animate;
-(char)isAnimated;
-(void)setAnimated:(char)arg1 ;
-(void)complete:(char)arg1 ;
@end
