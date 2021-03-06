/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@protocol SKUIReportAConcernTemplateViewDelegate;
@class NSArray, UITableView, UIView, UIFont, UITextView, NSString;

@interface SKUIReportAConcernTemplateView : SKUIViewReuseView <UITableViewDelegate, UITableViewDataSource, SKUIViewElementView> {

	NSArray* _concerns;
	UITableView* _concernsTable;
	UIView* _dividerTop;
	UIView* _dividerBottom;
	UIFont* _elementFont;
	UITextView* _headerView;
	int _selectedIndex;
	UITextView* _titleView;
	id<SKUIReportAConcernTemplateViewDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * concerns;                                                      //@synthesize concerns=_concerns - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIReportAConcernTemplateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int selectedIndex; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(void)setDelegate:(id<SKUIReportAConcernTemplateViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id<SKUIReportAConcernTemplateViewDelegate>)delegate;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(int)selectedIndex;
-(void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(char)updateWithItemState:(id)arg1 context:(id)arg2 animated:(char)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_reloadSubviews;
-(void)setConcerns:(NSArray *)arg1 ;
-(void)_reloadTextView:(id)arg1 withViewElement:(id)arg2 andInsets:(UIEdgeInsets)arg3 ;
-(id)_textForViewElement:(id)arg1 ;
-(NSArray *)concerns;
@end

