/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>

@class UIButton;

@interface WLMigrationCompletedViewController : WLWelcomeGroupViewController {

	UIButton* _continueButton;
	UIButton* _continueView;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;              //@synthesize continueHandler=_continueHandler - In the implementation block
-(void)loadView;
-(void)_continueTapped:(id)arg1 ;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
@end
