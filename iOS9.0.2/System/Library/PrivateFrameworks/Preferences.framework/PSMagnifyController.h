/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol OS_dispatch_semaphore, PSMagnifyControllerDelegate;
@class PSMagnifyMode, UISegmentedControl, UIScrollView, UIPageControl, UIView, NSURL, NSMutableDictionary, NSObject, NSString;

@interface PSMagnifyController : PSListController <UIScrollViewDelegate, UIWebViewDelegate> {

	PSMagnifyMode* _originalMagnifyMode;
	PSMagnifyMode* _selectedMagnifyMode;
	UISegmentedControl* _magnifyModePicker;
	UIScrollView* _previewsScroller;
	int _scrolledPreviewPage;
	UIPageControl* _pageControl;
	UIView* _dividerLine;
	NSURL* _HTMLResourceBaseURL;
	NSMutableDictionary* _webViewsForMagnifyMode;
	NSObject*<OS_dispatch_semaphore> _firstLoadSemaphore;
	char _loaded;
	PSMagnifyMode* _initialMagnifyMode;
	char _doneButtonCommits;
	char _alwaysShowCancelButton;
	id<PSMagnifyControllerDelegate> _delegate;

}

@property (assign,nonatomic) char doneButtonCommits;                                       //@synthesize doneButtonCommits=_doneButtonCommits - In the implementation block
@property (assign,nonatomic,__weak) id<PSMagnifyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char alwaysShowCancelButton;                                  //@synthesize alwaysShowCancelButton=_alwaysShowCancelButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)commitMagnifyMode:(id)arg1 withRelaunchURL:(id)arg2 ;
+(char)shouldShowMagnify;
+(id)localizedMagnifyModeName;
+(id)currentMagnifyMode;
+(void)commitMagnifyMode:(id)arg1 ;
-(id)specifiers;
-(void)setDelegate:(id<PSMagnifyControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<PSMagnifyControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)updateNavigationButtons;
-(id)initWithZoomedSelected:(char)arg1 ;
-(id)currentWebViewSet;
-(id)arrayOfWebViewsWithCount:(unsigned)arg1 ;
-(id)localizedCSSStringFromUnlocalizedCSSString:(id)arg1 ;
-(void)magnifyModeSelectionChanged:(id)arg1 ;
-(void)setSelectedMagnifyMode:(id)arg1 ;
-(float)xOriginForPage:(int)arg1 ;
-(char)doneButtonCommits;
-(void)magnifyModeConfirmed:(id)arg1 ;
-(void)finishDone:(id)arg1 ;
-(void)finishCancel:(id)arg1 ;
-(void)setDoneButtonCommits:(char)arg1 ;
-(char)alwaysShowCancelButton;
-(void)setAlwaysShowCancelButton:(char)arg1 ;
@end
