/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol FBABugFormEditorDelegate;
@class FBAQuestion, FBAAnswer, UISearchController, NSArray, NSString;

@interface FBABugFormDetailTableViewController : UITableViewController <UISearchControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating> {

	id<FBABugFormEditorDelegate> _delegate;
	FBAQuestion* _question;
	FBAAnswer* _answer;
	UISearchController* _searchController;
	NSArray* _visibleChoices;
	NSArray* _searchResultChoices;

}

@property (assign,nonatomic,__weak) id<FBABugFormEditorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBAQuestion * question;                                    //@synthesize question=_question - In the implementation block
@property (nonatomic,retain) FBAAnswer * answer;                                        //@synthesize answer=_answer - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                     //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) NSArray * visibleChoices;                                  //@synthesize visibleChoices=_visibleChoices - In the implementation block
@property (nonatomic,retain) NSArray * searchResultChoices;                             //@synthesize searchResultChoices=_searchResultChoices - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQuestion:(FBAQuestion *)arg1 ;
-(FBAQuestion *)question;
-(NSArray *)visibleChoices;
-(id)getPathToScrollTo;
-(void)updateChoices;
-(void)setVisibleChoices:(NSArray *)arg1 ;
-(NSArray *)searchResultChoices;
-(void)setSearchResultChoices:(NSArray *)arg1 ;
-(void)setDelegate:(id<FBABugFormEditorDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<FBABugFormEditorDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(FBAAnswer *)answer;
-(void)setAnswer:(FBAAnswer *)arg1 ;
@end

