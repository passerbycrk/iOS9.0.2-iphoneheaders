/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MKMapViewDelegatePrivate.h>
#import <Maps/DirectionsManagerObserver.h>
#import <Maps/StarkRoutePreviewOverlayDelegate.h>
#import <Maps/StarkRoutePreviewOverlayDataSource.h>
#import <Maps/StarkChromeModeController.h>

@class StarkRoutePreviewOverlaySign, UIBarButtonItem, UINavigationItem, StarkRouteLoadingLabel, StarkWaypointsController, UILabel, StarkFocusableButton, MapsChromeViewController, NSString, ChromeViewController, UIView;

@interface StarkRoutePreviewModeController : NSObject <MKMapViewDelegatePrivate, DirectionsManagerObserver, StarkRoutePreviewOverlayDelegate, StarkRoutePreviewOverlayDataSource, StarkChromeModeController> {

	StarkRoutePreviewOverlaySign* _sign;
	UIEdgeInsets _edgePadding;
	/*^block*/id _completionBlock;
	UIBarButtonItem* _shareItem;
	UINavigationItem* _navigationItem;
	StarkRouteLoadingLabel* _routeLoading;
	StarkWaypointsController* _waypointsController;
	UILabel* _advisoryLabel;
	StarkFocusableButton* _zoomButton;
	unsigned _selectedRouteIndex;
	char _zoomToDestination;
	MapsChromeViewController* _chromeViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) ChromeViewController * chromeViewController; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
+(void)pushRoutePreviewScreenForItem:(id)arg1 ;
-(id)searchPinsManager;
-(id)directionsAnnotationsManager;
-(id)initWithAddressBookAddress:(id)arg1 ;
-(char)shouldTimeoutAfterDisconnect;
-(ChromeViewController *)chromeViewController;
-(void)setChromeViewController:(ChromeViewController *)arg1 ;
-(id)visuallySelectedItem;
-(id)overlayItemsForState:(id)arg1 ;
-(char)starkTopBarModifiesInsets;
-(id)parentFocusEnvironment;
-(void)resignCurrentModeAnimated:(char)arg1 toMode:(id)arg2 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(char)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)directionsManagerDidStartLoad:(id)arg1 ;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2 ;
-(void)directionsManagerDidUpdateUserLocation:(id)arg1 ;
-(void)directionsManagerDidReset:(id)arg1 ;
-(void)directionsManagerDidFailToLoadMoreRoutes:(id)arg1 withError:(id)arg2 ;
-(void)directionsManagerDidFailToLoadInitialRoutes:(id)arg1 withError:(id)arg2 ;
-(UIEdgeInsets)_mapViewInsets;
-(void)_updateAnnotationsForLoadedRoute;
-(unsigned)selectedRouteIndexForPreviewSign:(id)arg1 ;
-(id)titleForPreviewSign:(id)arg1 ;
-(id)subtitleForPreviewSign:(id)arg1 ;
-(CGRect)_mapAreaBoundsWithOverlayInset;
-(id)initWithSearchResults:(id)arg1 selectedIndex:(unsigned)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateZoomButton;
-(void)_hideAdvisories;
-(id)initWithExistingRouteLoading;
-(void)_handoffButtonTapped:(id)arg1 ;
-(void)routePreviewSignSelectedNext:(id)arg1 ;
-(void)_showPinsAnimated:(char)arg1 ;
-(void)_updateRouteAdvisories;
-(void)_disableZoomForRouteChangeRecenteringMap:(char)arg1 ;
-(void)_toggleZoom:(id)arg1 ;
-(void)routePreviewSignSelectedPrevious:(id)arg1 ;
-(id)currentRoutesForPreviewSign:(id)arg1 ;
-(id)initWithAddressBookAddress:(id)arg1 overridingTitle:(id)arg2 ;
-(void)routePreviewSignSelectedStart:(id)arg1 ;
-(void)routePreviewSign:(id)arg1 selectedAlternateRouteAtIndex:(unsigned)arg2 ;
-(id)_currentRoute;
-(void)_recenterOnRouteAnimated:(char)arg1 ;
-(void)_centerOnRouteOrPinsAnimated:(char)arg1 ;
-(void)routePreviewSign:(id)arg1 isShowingAlternates:(char)arg2 ;
-(unsigned)selectedIndexForPreviewSign:(id)arg1 ;
-(unsigned)numberOfResultsForPreviewSign:(id)arg1 ;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2 ;
-(void)_updateLoading;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)dealloc;
-(id)navigationItem;
-(void)setNeedsFocusUpdate;
-(UIView *)preferredFocusedView;
-(void)updateFocusIfNeeded;
-(void)_start;
-(char)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithDestination:(id)arg1 ;
@end
