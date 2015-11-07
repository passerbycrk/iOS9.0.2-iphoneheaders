/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MSCLAccountStore, MSCLSettingsTableViewCell, NSMapTable, NSArray, UIImage, NSString, UITableView;

@interface MSCLFacebookPageSelectionViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate> {

	MSCLAccountStore* _accountStore;
	char _didRequestImages;
	MSCLSettingsTableViewCell* _removeAccountButtonCell;
	NSMapTable* _images;
	NSArray* _pages;
	UIImage* _placeholderImage;
	NSString* _selectedPageIdentifier;
	UITableView* _tableView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(id)_imageDataConsumer;
-(id)initWithAccountStore:(id)arg1 pages:(id)arg2 ;
-(void)setSelectedPage:(id)arg1 ;
-(id)_attributedExplanationString;
-(void)_requestImagesIfNecessary;
-(id)_facebookPageTableViewCellInTableView:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_removalConfirmationMessage;
-(void)_removeAccount;
-(id)_newImageOperationWithObjectIdentifier:(id)arg1 ;
-(void)_setImage:(id)arg1 forObject:(id)arg2 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
@end
