/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RemindersColorPickerViewControllerDelegate;
@class UITableView, NSString;

@interface RemindersColorPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	int _selectedColor;
	id<RemindersColorPickerViewControllerDelegate> _delegate;
	UITableView* _tableView;

}

@property (assign) int selectedColor;                                                              //@synthesize selectedColor=_selectedColor - In the implementation block
@property (nonatomic,retain) id<RemindersColorPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSelectedListColor:(int)arg1 ;
-(void)setDelegate:(id<RemindersColorPickerViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<RemindersColorPickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(int)selectedColor;
-(void)setSelectedColor:(int)arg1 ;
@end

