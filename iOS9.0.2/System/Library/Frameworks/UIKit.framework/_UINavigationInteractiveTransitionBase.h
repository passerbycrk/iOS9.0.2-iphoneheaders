/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UINavigationInteractiveTransitionBaseDelegate;
@class UIView, UIPanGestureRecognizer, UIViewController, CADisplayLink, _UINavigationParallaxTransition, UIGestureRecognizer, NSString;

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {

	UIView* _gestureRecognizerView;
	UIPanGestureRecognizer* _gestureRecognizer;
	int __interactionState;
	char __transitionWasStopped;
	char __stoppedTransitionWasCancelled;
	UIViewController* __parent;
	char __useAugmentedShouldPopDecisionProcedure;
	char __completesTransitionOnEnd;
	CADisplayLink* _displayLink;
	float _timestamps[3];
	float _velocities[3];
	float _accelerations[3];
	char _shouldReverseTranslation;
	char _springAnimationIsPending;
	char _inSpringAnimation;
	_UINavigationParallaxTransition* _animationController;
	id<_UINavigationInteractiveTransitionBaseDelegate> _delegate;
	unsigned _sampleCount;
	float _totalDistance;
	float _previousDisplacement;
	float _previousVelocity;
	float _previousAcceleration;
	float _averageVelocity;
	float _averageAcceleration;
	double _skipTimeStamp;
	double _previousTimeStamp;

}

@property (assign,nonatomic,__weak) UIPanGestureRecognizer * gestureRecognizer;                                                            //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) char shouldReverseTranslation;                                                                                //@synthesize shouldReverseTranslation=_shouldReverseTranslation - In the implementation block
@property (nonatomic,retain) _UINavigationParallaxTransition * animationController;                                                        //@synthesize animationController=_animationController - In the implementation block
@property (assign,setter=_setInteractionState:,nonatomic) int _interactionState;                                                           //@synthesize _interactionState=__interactionState - In the implementation block
@property (assign,setter=_setTransitionWasStopped:,nonatomic) char _transitionWasStopped;                                                  //@synthesize _transitionWasStopped=__transitionWasStopped - In the implementation block
@property (assign,setter=_setStoppedTransitionWasCancelled:,nonatomic) char _stoppedTransitionWasCancelled;                                //@synthesize _stoppedTransitionWasCancelled=__stoppedTransitionWasCancelled - In the implementation block
@property (assign,setter=_setParent:,nonatomic,__weak) UIViewController * _parent;                                                         //@synthesize _parent=__parent - In the implementation block
@property (assign,setter=_setUseAugmentedShouldPopDecisionProcedure:,nonatomic) char _useAugmentedShouldPopDecisionProcedure;              //@synthesize _useAugmentedShouldPopDecisionProcedure=__useAugmentedShouldPopDecisionProcedure - In the implementation block
@property (assign,setter=_setCompletesTransitionOnEnd:,nonatomic) char _completesTransitionOnEnd;                                          //@synthesize _completesTransitionOnEnd=__completesTransitionOnEnd - In the implementation block
@property (getter=_navigationGesture,nonatomic,readonly) UIGestureRecognizer * navigationGesture; 
@property (assign,nonatomic,__weak) id<_UINavigationInteractiveTransitionBaseDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char springAnimationIsPending;                                                                                //@synthesize springAnimationIsPending=_springAnimationIsPending - In the implementation block
@property (assign,nonatomic) char inSpringAnimation;                                                                                       //@synthesize inSpringAnimation=_inSpringAnimation - In the implementation block
@property (assign,nonatomic) unsigned sampleCount;                                                                                         //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) float totalDistance;                                                                                          //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign,nonatomic) double skipTimeStamp;                                                                                         //@synthesize skipTimeStamp=_skipTimeStamp - In the implementation block
@property (assign,nonatomic) double previousTimeStamp;                                                                                     //@synthesize previousTimeStamp=_previousTimeStamp - In the implementation block
@property (assign,nonatomic) float previousDisplacement;                                                                                   //@synthesize previousDisplacement=_previousDisplacement - In the implementation block
@property (assign,nonatomic) float previousVelocity;                                                                                       //@synthesize previousVelocity=_previousVelocity - In the implementation block
@property (assign,nonatomic) float previousAcceleration;                                                                                   //@synthesize previousAcceleration=_previousAcceleration - In the implementation block
@property (assign,nonatomic) float averageVelocity;                                                                                        //@synthesize averageVelocity=_averageVelocity - In the implementation block
@property (assign,nonatomic) float averageAcceleration;                                                                                    //@synthesize averageAcceleration=_averageAcceleration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<_UINavigationInteractiveTransitionBaseDelegate>)arg1 ;
-(void)dealloc;
-(id<_UINavigationInteractiveTransitionBaseDelegate>)delegate;
-(void)_resetInteractionController;
-(void)_setInteractionState:(int)arg1 ;
-(void)_setCompletesTransitionOnEnd:(char)arg1 ;
-(void)setAnimationController:(_UINavigationParallaxTransition *)arg1 ;
-(void)handleNavigationTransition:(id)arg1 ;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)_stopInteractiveTransition;
-(float)_translationCoefficient;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)startInteractiveTransition;
-(_UINavigationParallaxTransition *)animationController;
-(void)_updateStatistics:(id)arg1 firstSample:(char)arg2 finalSample:(char)arg3 ;
-(char)springAnimationIsPending;
-(char)popGesture:(id)arg1 withRemainingDuration:(float)arg2 shouldPopWithVelocity:(float*)arg3 ;
-(char)_completesTransitionOnEnd;
-(void)setNotInteractiveTransition;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)gestureRecognizerView;
-(id)initWithGestureRecognizerView:(id)arg1 animator:(id)arg2 delegate:(id)arg3 ;
-(id)_navigationGesture;
-(void)_completeStoppedInteractiveTransition;
-(char)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(char)shouldReverseTranslation;
-(void)setShouldReverseTranslation:(char)arg1 ;
-(int)_interactionState;
-(char)_transitionWasStopped;
-(void)_setTransitionWasStopped:(char)arg1 ;
-(char)_stoppedTransitionWasCancelled;
-(void)_setStoppedTransitionWasCancelled:(char)arg1 ;
-(UIViewController *)_parent;
-(void)_setParent:(id)arg1 ;
-(char)_useAugmentedShouldPopDecisionProcedure;
-(void)_setUseAugmentedShouldPopDecisionProcedure:(char)arg1 ;
-(void)setSpringAnimationIsPending:(char)arg1 ;
-(char)inSpringAnimation;
-(void)setInSpringAnimation:(char)arg1 ;
-(unsigned)sampleCount;
-(void)setSampleCount:(unsigned)arg1 ;
-(float)totalDistance;
-(void)setTotalDistance:(float)arg1 ;
-(double)skipTimeStamp;
-(void)setSkipTimeStamp:(double)arg1 ;
-(double)previousTimeStamp;
-(void)setPreviousTimeStamp:(double)arg1 ;
-(float)previousDisplacement;
-(void)setPreviousDisplacement:(float)arg1 ;
-(float)previousVelocity;
-(void)setPreviousVelocity:(float)arg1 ;
-(float)previousAcceleration;
-(void)setPreviousAcceleration:(float)arg1 ;
-(float)averageVelocity;
-(void)setAverageVelocity:(float)arg1 ;
-(float)averageAcceleration;
-(void)setAverageAcceleration:(float)arg1 ;
@end

