/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _UIFallbackPresentationWindow, UIWindow;

@interface _UIFallbackPresentationViewController : UIViewController {

	_UIFallbackPresentationWindow* _presentationWindow;
	char _hasPreservedKeyboardInputViews;
	UIWindow* _rotationDecider;

}

@property (nonatomic,retain) UIWindow * rotationDecider;                       //@synthesize rotationDecider=_rotationDecider - In the implementation block
@property (assign,nonatomic) char hasPreservedKeyboardInputViews;              //@synthesize hasPreservedKeyboardInputViews=_hasPreservedKeyboardInputViews - In the implementation block
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidLoad;
-(void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_preserveInputViewsAnimated:(char)arg1 ;
-(void)_restoreInputViewsAnimated:(char)arg1 ;
-(void)setRotationDecider:(UIWindow *)arg1 ;
-(void)setHasPreservedKeyboardInputViews:(char)arg1 ;
-(char)hasPreservedKeyboardInputViews;
-(void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(char)arg3 ;
-(UIWindow *)rotationDecider;
@end

