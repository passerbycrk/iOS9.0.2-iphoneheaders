/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class COSRestoreHeaderView, NSMutableArray, UIView, NSArray, NSString;

@interface COSRestoreSelectionViewController : UITableViewController <COSBuddyController> {

	id<COSBuddyControllerDelegate> _delegate;
	COSRestoreHeaderView* _headerView;
	NSMutableArray* _restoreInstances;
	UIView* _navBlackoutView;
	NSArray* _backups;

}

@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) COSRestoreHeaderView * headerView;                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSMutableArray * restoreInstances;                           //@synthesize restoreInstances=_restoreInstances - In the implementation block
@property (nonatomic,retain) UIView * navBlackoutView;                                    //@synthesize navBlackoutView=_navBlackoutView - In the implementation block
@property (nonatomic,retain) NSArray * backups;                                           //@synthesize backups=_backups - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)controllerAllowsNavigatingBackTo;
-(NSArray *)backups;
-(NSMutableArray *)restoreInstances;
-(void)setRestoreInstances:(NSMutableArray *)arg1 ;
-(UIView *)navBlackoutView;
-(void)setNavBlackoutView:(UIView *)arg1 ;
-(void)setBackups:(NSArray *)arg1 ;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<COSBuddyControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(COSRestoreHeaderView *)headerView;
-(void)setHeaderView:(COSRestoreHeaderView *)arg1 ;
@end
