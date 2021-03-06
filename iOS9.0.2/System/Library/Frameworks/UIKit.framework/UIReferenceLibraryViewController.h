/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSString, NSArray, UINavigationController, UITableViewController, UIViewController, UIWindow;

@interface UIReferenceLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate> {

	NSString* _term;
	NSArray* _definitionValues;
	UINavigationController* _baseNavController;
	UITableViewController* _multiDefViewController;
	UIViewController* _longDefViewController;
	int _oldPopoverStyle;
	UIWindow* _rotationDecider;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;                                            //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (setter=_setRotationDecider:,nonatomic,retain) UIWindow * _rotationDecider;              //@synthesize rotationDecider=_rotationDecider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundColor;
+(char)_shouldShowDefineForTerm:(id)arg1 ;
+(id)_foregroundColor;
+(id)_colorAttributes;
+(id)_diddlyDoViewLineColor;
+(id)_defaultButtonImage;
+(id)_pressedButtonImage;
+(id)_localizedDictionaryTitleAttributes;
+(id)_dictionaryDefinitionAttributes;
+(char)_shouldShowDefineForTermOfLength:(int)arg1 ;
+(char)dictionaryHasDefinitionForTerm:(id)arg1 ;
+(id)_popoverControllerForReferenceLibraryWithString:(id)arg1 ;
+(id)_viewControllerForReferenceWithString:(id)arg1 options:(unsigned)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(id)_backgroundColor;
-(void)viewWillLayoutSubviews;
-(void)_setPopoverController:(id)arg1 ;
-(void)viewDidLoad;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)_foregroundColor;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(id)_colorAttributes;
-(id)initWithTerm:(id)arg1 ;
-(void)_dismissModalReferenceView:(id)arg1 ;
-(void)_setRotationDecider:(id)arg1 ;
-(void)pushDownloadManager:(id)arg1 ;
-(void)_searchWeb:(id)arg1 ;
-(void)_installDoneButtonOnViewControllerIfNeeded:(id)arg1 ;
-(void)_installRequiredElementsOnViewController:(id)arg1 ;
-(id)_diddlyDoViewLineColor;
-(id)_defaultButtonImage;
-(id)_pressedButtonImage;
-(id)_localizedDictionaryTitleAttributes;
-(id)_dictionaryDefinitionAttributes;
-(UIWindow *)_rotationDecider;
@end

