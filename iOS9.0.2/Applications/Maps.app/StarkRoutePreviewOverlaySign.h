/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Maps/StarkRoutePreviewPlacePickingOverlayDelegate.h>
#import <Maps/StarkRoutePreviewAlternatesOverlayDelegate.h>
#import <Maps/StarkRoutePreviewAlternatesOverlayDelegate.h>

@protocol StarkRoutePreviewSign, StarkRoutePreviewOverlayDelegate, StarkRoutePreviewOverlayDataSource;
@class StarkRoutePreviewPlacePickingOverlaySign, StarkRoutePreviewAlternatesOverlaySign, UIView, StarkFocusableButton, NSString;

@interface StarkRoutePreviewOverlaySign : UIView <StarkRoutePreviewPlacePickingOverlayDelegate, StarkRoutePreviewAlternatesOverlayDelegate, StarkRoutePreviewAlternatesOverlayDelegate> {

	StarkRoutePreviewPlacePickingOverlaySign* _placePicker;
	StarkRoutePreviewAlternatesOverlaySign* _routePicker;
	UIView*<StarkRoutePreviewSign> _subsign;
	UIView* _signContainer;
	StarkFocusableButton* _startButton;
	UIView* _keyline;
	char _showingAlternateRoutes;
	id<StarkRoutePreviewOverlayDelegate> _delegate;
	id<StarkRoutePreviewOverlayDataSource> _dataSource;

}

@property (assign,getter=isShowingAlternateRoutes,nonatomic) char showingAlternateRoutes;              //@synthesize showingAlternateRoutes=_showingAlternateRoutes - In the implementation block
@property (nonatomic,__weak,readonly) id<StarkRoutePreviewOverlayDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<StarkRoutePreviewOverlayDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isStartButtonEnabled,nonatomic) char startButtonEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startButtonTapped:(id)arg1 ;
-(char)isStartButtonEnabled;
-(void)previousRoute;
-(void)setStartButtonEnabled:(char)arg1 ;
-(void)setCurrentSign:(id)arg1 animated:(char)arg2 ;
-(char)isShowingAlternateRoutes;
-(void)selectedRouteAtIndex:(unsigned)arg1 ;
-(void)nextRoute;
-(void)setShowingAlternateRoutes:(char)arg1 ;
-(void)_updateSignVisibility;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 ;
-(void)showAlternateRoutes;
-(void)_updateStyling;
-(void)reloadData;
-(void)layoutSubviews;
-(id<StarkRoutePreviewOverlayDataSource>)dataSource;
-(id<StarkRoutePreviewOverlayDelegate>)delegate;
-(id)preferredFocusedView;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
@end

