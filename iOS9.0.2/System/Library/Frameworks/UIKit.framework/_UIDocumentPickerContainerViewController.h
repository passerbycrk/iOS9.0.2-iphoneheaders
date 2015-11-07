/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol _UIDocumentPickerServiceViewController, _UIDocumentPickerContainedViewController;
@class _UIDocumentPickerContainerModel, UIViewController, _UIDocumentPickerSortOrderView, _UIDocumentPickerSearchPaletteView, NSArray, NSString;

@interface _UIDocumentPickerContainerViewController : UIViewController <UISearchControllerDelegate> {

	int _explicitDisplayMode;
	char _rootContainer;
	id<_UIDocumentPickerServiceViewController> _serviceViewController;
	_UIDocumentPickerContainerModel* _model;
	UIViewController*<_UIDocumentPickerContainedViewController> _childViewController;
	_UIDocumentPickerSortOrderView* _sortView;
	_UIDocumentPickerSearchPaletteView* _searchView;

}

@property (assign,nonatomic,__weak) id<_UIDocumentPickerServiceViewController> serviceViewController;                      //@synthesize serviceViewController=_serviceViewController - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerContainerModel * model;                                                      //@synthesize model=_model - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing; 
@property (nonatomic,retain) NSArray * indexPathsForSelectedItems; 
@property (assign,nonatomic) int explicitDisplayMode;                                                                      //@synthesize explicitDisplayMode=_explicitDisplayMode - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,retain) UIViewController*<_UIDocumentPickerContainedViewController> childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
@property (assign,getter=isRootContainer,nonatomic) char rootContainer;                                                    //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerSortOrderView * sortView;                                                    //@synthesize sortView=_sortView - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerSearchPaletteView * searchView;                                              //@synthesize searchView=_searchView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userDefaults;
-(void)dealloc;
-(CGPoint)contentOffset;
-(id)url;
-(void)viewDidLayoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 ;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setEditing:(char)arg1 ;
-(NSArray *)indexPathsForSelectedItems;
-(_UIDocumentPickerContainerModel *)model;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(id<_UIDocumentPickerServiceViewController>)serviceViewController;
-(void)setServiceViewController:(id<_UIDocumentPickerServiceViewController>)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)setExplicitDisplayMode:(int)arg1 ;
-(int)displayMode;
-(void)setIndexPathsForSelectedItems:(NSArray *)arg1 ;
-(void)displayModeChanged;
-(void)setModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(void)setRootContainer:(char)arg1 ;
-(void)_sortOrderViewChanged:(id)arg1 ;
-(void)ensureChildViewController;
-(UIViewController*<_UIDocumentPickerContainedViewController>)childViewController;
-(void)setChildViewController:(UIViewController*<_UIDocumentPickerContainedViewController>)arg1 ;
-(_UIDocumentPickerSortOrderView *)sortView;
-(void)setSortView:(_UIDocumentPickerSortOrderView *)arg1 ;
-(void)setupSearchController:(char)arg1 ;
-(void)setChildViewController:(id)arg1 animated:(char)arg2 ;
-(void)setDefaultDisplayMode:(int)arg1 ;
-(void)_updateForServiceView;
-(char)isRootContainer;
-(void)setupToolbar;
-(void)teardownToolbar;
-(void)_pickCurrentLocationForUpload:(id)arg1 ;
-(_UIDocumentPickerSearchPaletteView *)searchView;
-(int)defaultDisplayMode;
-(int)explicitDisplayMode;
-(void)setSearchView:(_UIDocumentPickerSearchPaletteView *)arg1 ;
@end
