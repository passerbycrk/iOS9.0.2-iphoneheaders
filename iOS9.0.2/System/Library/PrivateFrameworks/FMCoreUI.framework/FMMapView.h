/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKit/UIView.h>
#import <FMCoreUI/FMMapGestureRecognizerDelegate.h>
#import <FMCoreUI/FMMapAnnotationGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/MKUserTrackingView.h>

@protocol FMMapViewDelegate, FMAnnotationMKAnnotation, MKAnnotation;
@class MKMapView, _MKUserTrackingButton, FMMapGestureRecognizer, MKMapCamera, NSTimer, CADisplayLink, FMAnnotationView, MKUserLocationView, MKUserLocation, NSMutableArray, NSString;

@interface FMMapView : UIView <FMMapGestureRecognizerDelegate, FMMapAnnotationGestureRecognizerDelegate, MKMapViewDelegate, MKUserTrackingView> {

	char _isAllAnnotationsShown;
	char _isMapPositioningDisabled;
	char _isSwipeGestureEnabled;
	char _isMapAnimating;
	char _isUserSwiping;
	char _isNearbyModeDisabled;
	char _showUserLocationCallout;
	char _isPreventingMapUpdates;
	char _isPreviewing;
	char _isUserLocationUpdated;
	char _canChangeUserTrackingMode;
	char _isGoingBackToAllAnnotation;
	char _isSwitchingTrackingMode;
	char _shouldDisplayOverlay;
	char _canSelectUserAnnotation;
	char _isFingerOnMap;
	char _isFingerOnAnnotation;
	char _isMapMoved;
	id<FMMapViewDelegate> _delegate;
	MKMapView* _mapView;
	_MKUserTrackingButton* _userTrackingButton;
	int _currentTrackingMode;
	int _doubleSelectionMode;
	int _renderingMode;
	id<FMAnnotation><MKAnnotation> _selectedAnnotation;
	FMMapGestureRecognizer* _mapGesture;
	id<FMAnnotation><MKAnnotation> _lastSelectedAnnotationBeforeTracking;
	MKMapCamera* _cameraBefore3DRendering;
	NSTimer* _layoutTimer;
	float _maxZoomLevel;
	CADisplayLink* _displayLink;
	NSTimer* _userSelectionTimer;
	FMAnnotationView* _potentiallySelectedAnnotationView;
	FMAnnotationView* _selectedAnnotationView;
	MKUserLocationView* _userLocationView;
	MKUserLocation* _userLocation;
	id<FMAnnotation><MKAnnotation> _currentDeviceAnnotation;
	id<MKAnnotation> _otherSelectedAnnotation;
	int _currentSelectedState;
	NSMutableArray* _accuracyOverlays;
	UIEdgeInsets _lastVisibleInsets;
	SCD_Struct_FM2 _lastVisibleMapRect;

}

@property (assign,nonatomic,__weak) id<FMMapViewDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MKMapView * mapView;                                                                   //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) _MKUserTrackingButton * userTrackingButton;                                              //@synthesize userTrackingButton=_userTrackingButton - In the implementation block
@property (assign,nonatomic) int currentTrackingMode;                                                                 //@synthesize currentTrackingMode=_currentTrackingMode - In the implementation block
@property (assign,nonatomic) int doubleSelectionMode;                                                                 //@synthesize doubleSelectionMode=_doubleSelectionMode - In the implementation block
@property (assign,nonatomic) int renderingMode;                                                                       //@synthesize renderingMode=_renderingMode - In the implementation block
@property (assign,nonatomic) char isAllAnnotationsShown;                                                              //@synthesize isAllAnnotationsShown=_isAllAnnotationsShown - In the implementation block
@property (assign,nonatomic) char isMapPositioningDisabled;                                                           //@synthesize isMapPositioningDisabled=_isMapPositioningDisabled - In the implementation block
@property (assign,nonatomic) char isSwipeGestureEnabled;                                                              //@synthesize isSwipeGestureEnabled=_isSwipeGestureEnabled - In the implementation block
@property (assign,nonatomic) char isMapAnimating;                                                                     //@synthesize isMapAnimating=_isMapAnimating - In the implementation block
@property (assign,nonatomic) char isUserSwiping;                                                                      //@synthesize isUserSwiping=_isUserSwiping - In the implementation block
@property (assign,nonatomic) char isNearbyModeDisabled;                                                               //@synthesize isNearbyModeDisabled=_isNearbyModeDisabled - In the implementation block
@property (assign,nonatomic) char showUserLocationCallout;                                                            //@synthesize showUserLocationCallout=_showUserLocationCallout - In the implementation block
@property (assign,nonatomic) char isPreventingMapUpdates;                                                             //@synthesize isPreventingMapUpdates=_isPreventingMapUpdates - In the implementation block
@property (assign,nonatomic,__weak) id<FMAnnotation><MKAnnotation> selectedAnnotation;                                //@synthesize selectedAnnotation=_selectedAnnotation - In the implementation block
@property (assign,nonatomic) char isPreviewing;                                                                       //@synthesize isPreviewing=_isPreviewing - In the implementation block
@property (nonatomic,retain) FMMapGestureRecognizer * mapGesture;                                                     //@synthesize mapGesture=_mapGesture - In the implementation block
@property (assign,nonatomic) SCD_Struct_FM2 lastVisibleMapRect;                                                       //@synthesize lastVisibleMapRect=_lastVisibleMapRect - In the implementation block
@property (assign,nonatomic,__weak) id<FMAnnotation><MKAnnotation> lastSelectedAnnotationBeforeTracking;              //@synthesize lastSelectedAnnotationBeforeTracking=_lastSelectedAnnotationBeforeTracking - In the implementation block
@property (nonatomic,retain) MKMapCamera * cameraBefore3DRendering;                                                   //@synthesize cameraBefore3DRendering=_cameraBefore3DRendering - In the implementation block
@property (nonatomic,retain) NSTimer * layoutTimer;                                                                   //@synthesize layoutTimer=_layoutTimer - In the implementation block
@property (assign,nonatomic) float maxZoomLevel;                                                                      //@synthesize maxZoomLevel=_maxZoomLevel - In the implementation block
@property (assign,nonatomic) UIEdgeInsets lastVisibleInsets;                                                          //@synthesize lastVisibleInsets=_lastVisibleInsets - In the implementation block
@property (assign,nonatomic) char isUserLocationUpdated;                                                              //@synthesize isUserLocationUpdated=_isUserLocationUpdated - In the implementation block
@property (assign,nonatomic) char canChangeUserTrackingMode;                                                          //@synthesize canChangeUserTrackingMode=_canChangeUserTrackingMode - In the implementation block
@property (assign,nonatomic) char isGoingBackToAllAnnotation;                                                         //@synthesize isGoingBackToAllAnnotation=_isGoingBackToAllAnnotation - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                             //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) char isSwitchingTrackingMode;                                                            //@synthesize isSwitchingTrackingMode=_isSwitchingTrackingMode - In the implementation block
@property (assign,nonatomic) char shouldDisplayOverlay;                                                               //@synthesize shouldDisplayOverlay=_shouldDisplayOverlay - In the implementation block
@property (assign,nonatomic) char canSelectUserAnnotation;                                                            //@synthesize canSelectUserAnnotation=_canSelectUserAnnotation - In the implementation block
@property (nonatomic,retain) NSTimer * userSelectionTimer;                                                            //@synthesize userSelectionTimer=_userSelectionTimer - In the implementation block
@property (nonatomic,retain) FMAnnotationView * potentiallySelectedAnnotationView;                                    //@synthesize potentiallySelectedAnnotationView=_potentiallySelectedAnnotationView - In the implementation block
@property (nonatomic,retain) FMAnnotationView * selectedAnnotationView;                                               //@synthesize selectedAnnotationView=_selectedAnnotationView - In the implementation block
@property (assign,nonatomic,__weak) MKUserLocationView * userLocationView;                                            //@synthesize userLocationView=_userLocationView - In the implementation block
@property (assign,nonatomic,__weak) MKUserLocation * userLocation;                                                    //@synthesize userLocation=_userLocation - In the implementation block
@property (assign,nonatomic,__weak) id<FMAnnotation><MKAnnotation> currentDeviceAnnotation;                           //@synthesize currentDeviceAnnotation=_currentDeviceAnnotation - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotation> otherSelectedAnnotation;                                         //@synthesize otherSelectedAnnotation=_otherSelectedAnnotation - In the implementation block
@property (assign,nonatomic) int currentSelectedState;                                                                //@synthesize currentSelectedState=_currentSelectedState - In the implementation block
@property (nonatomic,retain) NSMutableArray * accuracyOverlays;                                                       //@synthesize accuracyOverlays=_accuracyOverlays - In the implementation block
@property (assign,nonatomic) char isFingerOnMap;                                                                      //@synthesize isFingerOnMap=_isFingerOnMap - In the implementation block
@property (assign,nonatomic) char isFingerOnAnnotation;                                                               //@synthesize isFingerOnAnnotation=_isFingerOnAnnotation - In the implementation block
@property (assign,nonatomic) char isMapMoved;                                                                         //@synthesize isMapMoved=_isMapMoved - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)hasUserLocation;
-(char)canRotateForHeading;
-(void)_setUserTrackingMode:(int)arg1 animated:(char)arg2 fromTrackingButton:(char)arg3 ;
-(MKUserLocationView *)userLocationView;
-(void)addOverlay:(id)arg1 ;
-(void)removeOverlay:(id)arg1 ;
-(void)setUserLocationView:(MKUserLocationView *)arg1 ;
-(SCD_Struct_FM1)coordinateForAnnotationView:(id)arg1 ;
-(id)viewForAnnotation:(id)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(MKUserLocation *)userLocation;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapViewDidStopLocatingUser:(id)arg1 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(char)arg3 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)removeOverlays:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(void)addOverlays:(id)arg1 ;
-(MKMapView *)mapView;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FMMapViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id<FMMapViewDelegate>)delegate;
-(void)synchronize;
-(void)initialize;
-(int)renderingMode;
-(void)didMoveToSuperview;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(char)isPreviewing;
-(void)deselectAllAnnotations;
-(void)fingerOnAnnotation:(id)arg1 ;
-(void)fingerOffAnnotation:(id)arg1 ;
-(void)setupConstraints;
-(void)setupGestures;
-(void)setUserTrackingButton:(_MKUserTrackingButton *)arg1 ;
-(NSTimer *)layoutTimer;
-(void)setLayoutTimer:(NSTimer *)arg1 ;
-(void)setCurrentTrackingMode:(int)arg1 ;
-(void)setCurrentSelectedState:(int)arg1 ;
-(void)setDoubleSelectionMode:(int)arg1 ;
-(void)setCanSelectUserAnnotation:(char)arg1 ;
-(void)setCanChangeUserTrackingMode:(char)arg1 ;
-(void)setAccuracyOverlays:(NSMutableArray *)arg1 ;
-(void)createMKMapView;
-(void)createUserTrackingButton;
-(void)setupCamera;
-(void)setLastVisibleMapRect:(SCD_Struct_FM2)arg1 ;
-(void)setLastVisibleInsets:(UIEdgeInsets)arg1 ;
-(int)currentSelectedState;
-(SCD_Struct_FM2)lastVisibleMapRect;
-(UIEdgeInsets)lastVisibleInsets;
-(void)setIsUserLocationUpdated:(char)arg1 ;
-(void)setMapGesture:(FMMapGestureRecognizer *)arg1 ;
-(void)layoutMapView;
-(char)isPreventingMapUpdates;
-(void)updateCameraPositionForAnnotation:(id)arg1 ;
-(char)isAllAnnotationsShown;
-(void)displayAllAnnotations;
-(void)recenterVisibleAnnotations;
-(void)removeUserAnnotationIfNeeded:(id)arg1 ;
-(void)deselectAnnotationViewIfNeeded:(id)arg1 ;
-(void)setSelectedAnnotation:(id<FMAnnotation><MKAnnotation>)arg1 ;
-(void)didSelectAnnotation:(id)arg1 ;
-(void)setIsMapAnimating:(char)arg1 ;
-(SCD_Struct_FM2)repositionOnAnnotation:(id)arg1 withZoom:(char)arg2 ;
-(void)setIsMapPositioningDisabled:(char)arg1 ;
-(void)didDoubleSelectAnnotation:(id)arg1 ;
-(id<FMAnnotation><MKAnnotation>)currentDeviceAnnotation;
-(void)setCurrentDeviceAnnotation:(id<FMAnnotation><MKAnnotation>)arg1 ;
-(void)deselectAnnotationView:(id)arg1 ;
-(id<FMAnnotation><MKAnnotation>)selectedAnnotation;
-(void)updateOverlayForAnnotation:(id)arg1 withForce:(char)arg2 ;
-(NSTimer *)userSelectionTimer;
-(void)setUserSelectionTimer:(NSTimer *)arg1 ;
-(void)updateCanSelectUserAnnotation;
-(char)showUserLocationCallout;
-(char)isMapPositioningDisabled;
-(void)setIsAllAnnotationsShown:(char)arg1 ;
-(void)slideAnnotationIntoViewIfNeeded:(id)arg1 ;
-(int)doubleSelectionMode;
-(void)selectOrDeselectAnnotationView:(id)arg1 ;
-(char)isMapAnimating;
-(char)isFingerOnMap;
-(void)setShouldDisplayOverlay:(char)arg1 ;
-(void)refreshOverlayForAnnotation:(id)arg1 andCoordinate:(SCD_Struct_FM1)arg2 ;
-(char)shouldDisplayOverlay;
-(char)isOverlayOnMap:(id)arg1 ;
-(void)removeAllOverlaysAndCurrentAnnotationOverlay:(id)arg1 ;
-(NSMutableArray *)accuracyOverlays;
-(char)isUserSwiping;
-(id<MKAnnotation>)otherSelectedAnnotation;
-(int)currentTrackingMode;
-(SCD_Struct_FM2)mapRectForAnnotations:(id)arg1 ;
-(SCD_Struct_FM2)normalizeMapRect:(SCD_Struct_FM2)arg1 toZoomScale:(float)arg2 ;
-(void)updateCameraPositionForMapRect:(SCD_Struct_FM2)arg1 withZoom:(char)arg2 ;
-(id)nearbyAnnotations;
-(void)repositionOnMapRectIfNeeded:(SCD_Struct_FM2)arg1 ;
-(void)repositionToMapRect:(SCD_Struct_FM2)arg1 withZoom:(char)arg2 ;
-(void)setIsGoingBackToAllAnnotation:(char)arg1 ;
-(void)animateToAllAnnotation;
-(void)animateRenderingModeChange;
-(char)isMapMoved;
-(void)animateMapToPosition:(SCD_Struct_FM2)arg1 withInsets:(UIEdgeInsets)arg2 andZoom:(char)arg3 ;
-(char)isSwitchingTrackingMode;
-(char)isGoingBackToAllAnnotation;
-(void)setIsMapMoved:(char)arg1 ;
-(double)distanceBetweenOrigin:(SCD_Struct_FM1)arg1 andDestination:(SCD_Struct_FM1)arg2 ;
-(float)dampingForAltitude:(double)arg1 andDistance:(double)arg2 ;
-(MKMapCamera *)cameraBefore3DRendering;
-(void)setCameraBefore3DRendering:(MKMapCamera *)arg1 ;
-(void)moveCenterByOffset:(CGPoint)arg1 from:(SCD_Struct_FM1)arg2 ;
-(char)isValidLocation:(SCD_Struct_FM1)arg1 ;
-(id)annotationsSortedByDistance;
-(char)isNearbyModeDisabled;
-(char)canSelectUserAnnotation;
-(void)depthSortAnnotations;
-(void)setPotentiallySelectedAnnotationView:(FMAnnotationView *)arg1 ;
-(FMAnnotationView *)potentiallySelectedAnnotationView;
-(void)setOtherSelectedAnnotation:(id<MKAnnotation>)arg1 ;
-(void)clearUserLocation;
-(void)updateAnnotationStyle:(id)arg1 ;
-(char)canChangeUserTrackingMode;
-(void)updateAccordingToUserTrackingMode;
-(id<FMAnnotation><MKAnnotation>)lastSelectedAnnotationBeforeTracking;
-(void)setIsSwitchingTrackingMode:(char)arg1 ;
-(void)setLastSelectedAnnotationBeforeTracking:(id<FMAnnotation><MKAnnotation>)arg1 ;
-(_MKUserTrackingButton *)userTrackingButton;
-(void)updateUserTrackingButtonState;
-(void)setIsFingerOnMap:(char)arg1 ;
-(char)isFingerOnAnnotation;
-(void)setIsUserSwiping:(char)arg1 ;
-(FMMapGestureRecognizer *)mapGesture;
-(void)setIsFingerOnAnnotation:(char)arg1 ;
-(void)updatePreviewLocationForAnnotation:(id)arg1 ;
-(void)mapTouchBegan:(id)arg1 ;
-(void)mapTouchEnded:(id)arg1 ;
-(void)mapTouchMoved:(id)arg1 ;
-(void)mapSwiped:(id)arg1 withPercent:(float)arg2 ;
-(void)mapSwipedBegin:(id)arg1 ;
-(void)mapSwipedEnd:(id)arg1 withPercent:(float)arg2 ;
-(void)mapTapped:(id)arg1 ;
-(void)mapDoubleTapped:(id)arg1 ;
-(void)calloutButtonTapped:(id)arg1 ;
-(void)userLocationTapped:(id)arg1 ;
-(void)doubleSelectAnnotation:(id)arg1 ;
-(void)updateCameraPositionWithLocation:(SCD_Struct_FM1)arg1 andAltitude:(double)arg2 ;
-(void)updateCameraPositionForNoLocation;
-(void)refreshCameraPosition;
-(void)flashMapInset:(UIEdgeInsets)arg1 ;
-(void)setIsSwipeGestureEnabled:(char)arg1 ;
-(void)updateAnnotationPositionAfterPreview:(id)arg1 ;
-(void)setIsPreviewing:(char)arg1 ;
-(void)selectAnnotationForPreview:(id)arg1 ;
-(char)isSwipeGestureEnabled;
-(void)setIsNearbyModeDisabled:(char)arg1 ;
-(void)setShowUserLocationCallout:(char)arg1 ;
-(void)setIsPreventingMapUpdates:(char)arg1 ;
-(char)isUserLocationUpdated;
-(void)selectAnnotation:(id)arg1 ;
-(FMAnnotationView *)selectedAnnotationView;
-(void)setSelectedAnnotationView:(FMAnnotationView *)arg1 ;
-(SCD_Struct_FM2)mapRectMakeWithRadialDistanceForCoordinate:(SCD_Struct_FM1)arg1 andRadius:(double)arg2 ;
-(void)setRenderingMode:(int)arg1 ;
-(void)setUserLocation:(MKUserLocation *)arg1 ;
-(char)hasUserLocation;
-(int)userTrackingMode;
-(float)maxZoomLevel;
-(void)setMaxZoomLevel:(float)arg1 ;
@end

