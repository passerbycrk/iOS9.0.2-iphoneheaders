/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLPreviewTransitionAnimator.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface QLPreviewZoomTransitionAnimator : QLPreviewTransitionAnimator <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)cropView:(id)arg1 toAvoidNavigationControllerInViewController:(id)arg2 animationDuration:(float)arg3 ;
+(id)firstChildNavigationControllerFromViewController:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
@end
