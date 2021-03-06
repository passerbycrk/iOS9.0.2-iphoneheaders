/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileSafari/SafariExplanationViewControllerDelegate.h>
#import <MobileSafari/UniversalSearchFirstTimeExperienceViewDelegate.h>

@protocol UniversalSearchFirstTimeExperienceViewControllerDelegate;
@class UniversalSearchFirstTimeExperienceView, UIScrollView, WBSParsecSearchClient, NSString;

@interface UniversalSearchFirstTimeExperienceViewController : UIViewController <SafariExplanationViewControllerDelegate, UniversalSearchFirstTimeExperienceViewDelegate> {

	UniversalSearchFirstTimeExperienceView* _firstTimeExperienceView;
	UIScrollView* _scrollView;
	char _navigationBarVisibilityForRestore;
	id<UniversalSearchFirstTimeExperienceViewControllerDelegate> _delegate;
	WBSParsecSearchClient* _parsecSearchClient;

}

@property (assign,nonatomic,__weak) id<UniversalSearchFirstTimeExperienceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WBSParsecSearchClient * parsecSearchClient;                                              //@synthesize parsecSearchClient=_parsecSearchClient - In the implementation block
@property (assign,nonatomic) char navigationBarVisibilityForRestore;                                                    //@synthesize navigationBarVisibilityForRestore=_navigationBarVisibilityForRestore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)hasShownParsecFirstTimeUserExperience;
-(id)iconImageNamesForFirstTimeExperienceView:(id)arg1 ;
-(id)descriptionTextForFirstTimeExperienceView:(id)arg1 ;
-(id)learnMoreTextForFirstTimeExperienceView:(id)arg1 ;
-(void)didTapLearnMoreLinkForFirstTimeExperienceView:(id)arg1 ;
-(void)didInteractWithUniversalSearchFirstTimeExperienceView:(id)arg1 ;
-(void)_unifiedFieldDidLoseFocus:(id)arg1 ;
-(void)setUniversalSearchHasShownFirstTimeUserExperience;
-(id)initWithParsecSearchClient:(id)arg1 ;
-(void)unifiedFieldDidChange;
-(WBSParsecSearchClient *)parsecSearchClient;
-(char)navigationBarVisibilityForRestore;
-(void)setNavigationBarVisibilityForRestore:(char)arg1 ;
-(void)setDelegate:(id<UniversalSearchFirstTimeExperienceViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UniversalSearchFirstTimeExperienceViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(char)explanationViewController:(id)arg1 shouldLoadRequestInWebView:(id)arg2 ;
@end

