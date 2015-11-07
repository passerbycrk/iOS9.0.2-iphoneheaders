/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIAlertControllerSystemProvidedPresentationDelegate <NSObject>
@optional
-(void)_didPerformSystemProvidedPresentationOfAlertController:(id)arg1 wasSuccessful:(char)arg2;
-(void)_willBeginSystemProvidedDismissalOfAlertController:(id)arg1;
-(void)_didBeginSystemProvidedDismissalOfAlertController:(id)arg1;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;
-(void)_willPerformSystemProvidedPresentationOfAlertController:(id)arg1;
-(char)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(CGPoint)arg2;
-(void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1;
-(void)_didEndSystemProvidedPresentationOfAlertController:(id)arg1 wasSuccessful:(char)arg2;

@required
-(id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1;

@end
