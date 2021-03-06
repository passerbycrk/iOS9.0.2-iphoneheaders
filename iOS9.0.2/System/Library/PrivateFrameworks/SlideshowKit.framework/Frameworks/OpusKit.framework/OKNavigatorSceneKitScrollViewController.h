/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorSceneKitScrollViewControllerProxy.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OKTimerAnimation, UIPanGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface OKNavigatorSceneKitScrollViewController : OKNavigatorSceneKitScrollViewControllerProxy <UIGestureRecognizerDelegate> {

	OKTimerAnimation* _animation;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)commonInit;
-(void)targetPan:(id)arg1 ;
-(void)targetLongPress:(id)arg1 ;
-(void)removeAnimation;
-(void)navigateToPathPosition:(SCNVector3)arg1 ;
@end

