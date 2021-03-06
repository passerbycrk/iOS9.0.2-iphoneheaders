/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class COSGetStartedView;

@interface COSGetStartedInternalViewController : UIViewController {

	char _wantsToAnimate;
	COSGetStartedView* _getStartedView;

}

@property (nonatomic,retain) COSGetStartedView * getStartedView;              //@synthesize getStartedView=_getStartedView - In the implementation block
@property (assign,nonatomic) char wantsToAnimate;                             //@synthesize wantsToAnimate=_wantsToAnimate - In the implementation block
-(COSGetStartedView *)getStartedView;
-(void)setGetStartedView:(COSGetStartedView *)arg1 ;
-(char)wantsToAnimate;
-(void)setWantsToAnimate:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_stopAnimating;
-(void)_startAnimating;
@end

